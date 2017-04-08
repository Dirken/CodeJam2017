#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;  

struct result{
	int max;
	int min;
};

result stallDistance(int stalls, int people){
	result a;
	a.max = 20;
	a.min = 21;
	return a;
}

int main() {
  int t, stalls, people;
  cin >> t; 
  for (int i = 1; i <= t; ++i) {
    cin >> stalls >> people;
    result r = stallDistance(stalls,people);
    cout << "Case #" << i << ": " << r.max << ' ' << r.min << endl;
  }
}


