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
}

long long tidy_number(long long number){
	while (number >= 0){
		if (is_tidy_number(number)) return number;
		else{
			if (number%100 == 10) number = number-number/10;
			else number = number - number%10 - 1;
		}

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
