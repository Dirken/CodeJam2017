#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;  


char flip(char c){
	if (c == '-') c = '+';
	else c = '-';
	return c;
}

int pancake(string s, int n){
	int counter = 0;
	for (int i = 0; i < s.size()-n+1; ++i){
		if (s[i] == '-'){
			++counter;
			for (int j = i; j < i+n; ++j) {
				s[j] = flip(s[j]);	
			}
		}
	}
	for (int i = 0; i < s.size(); ++i){
		if (s[i] == '-') return -1;
	}
	return counter;
}

int main() {
  int t, n;
  string s;
  cin >> t; 
  for (int i = 1; i <= t; ++i) {
    cin >> s >> n;
    
    int res = pancake(s,n);
    cout << "Case #" << i << ": ";
    if (res == -1) cout << "IMPOSSIBLE"<< endl;
    else cout << res << endl;
  }
}