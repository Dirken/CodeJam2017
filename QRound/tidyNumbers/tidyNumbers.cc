#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;  

bool is_tidy_number(long long number){
	while (number >= 10){
		int aux1 = number%10;
		number = number/10;
		int aux2 = number%10;
		if (aux2 > aux1) return false;
	}
	return true;
}

long long next_tidy_number(long long number){
	vector<int> v;
	if (not is_tidy_number(number)){
		while (number >= 10){
			v.insert(v.begin(), number%10);
			number = number/10;
		}
		v.insert(v.begin(), number);
		long long aux = 0;
		for (long long i = 1; i <= v.size(); ++i){
			if (v[i-1] > v[i]) {
				for (long long j = i; j <= v.size(); ++j) v[j] = 0;
				
			}	
		}	
		for (long long k = 0; k < v.size(); ++k){
			aux = aux * 10 + v[k];
		}
		return aux;
	}
	return number;
}


long long tidy_number(long long number){
	while (number >= 0){
		if (is_tidy_number(number)) return number;
		number = next_tidy_number(number-1);
	}
	return number;
}



int main() {
  long long t, n;
  cin >> t; 
  for (long long i = 1; i <= t; ++i) {
    cin >> n; 
    cout << "Case #" << i << ": " << tidy_number(n) << endl;
  }
}
