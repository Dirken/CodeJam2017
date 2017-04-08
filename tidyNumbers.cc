#include <iostream>  // includes cin to read from stdin and cout to write to stdout
using namespace std;  // since cin and cout are both in namespace std, this saves some text


int tidy_number(int number){
	while (number >= 0){
		if (is_tidy_number(number)) return number;
		--number;
	}
}

bool is_tidy_number(int number){
	while (number >= 10){
		int aux1 = number%10:
		number = number/10;
		int aux2 = number%10;
		if (aux2 < aux1) return false;
	}
	return true;
}

int main() {
  int t, n;
  cin >> t; 
  for (int i = 1; i <= t; ++i) {
    cin >> n; 
    cout << "Case #" << i << ": " << tidy_number(n) << endl;
  }
}