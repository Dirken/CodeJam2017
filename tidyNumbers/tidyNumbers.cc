#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;  

long long next_tidy_number(long long number){
	vector<int> v;
	while (number >= 10){
		v.insert(v.begin(), number%10);
		number = number/10;
	}
	for (int i = 1; i <= v.size(); ++i){
		if (v[i-1] > v[i]) {
			for (int j = i; j <= v.size(); ++j)v[j] = 0;
		}
	}
	long long aux = 0;
	for (long long i = 0; i < v.size(); ++i){
		aux = aux * 10 + v[i];
	}
	return aux-1;
}

bool is_tidy_number(long long number){
	while (number >= 10){
		int aux1 = number%10;
		number = number/10;
		int aux2 = number%10;
		if (aux2 > aux1) return false;
	}
	return true;
}
long long tidy_number(long long number){
	number = next_tidy_number(number);
	while (number >= 0){
		if (is_tidy_number(number)) return number;
		number = next_tidy_number(number);
		cout << number << endl;
	}
}



int main() {
  long long t, n;
  cin >> t; 
  for (long long i = 1; i <= t; ++i) {
    cin >> n; 
    cout << "Case #" << i << ": " << tidy_number(n) << endl;
  }
}
