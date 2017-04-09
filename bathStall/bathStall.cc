#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;  


long long stallDistance(long long stalls, long long people){
	if (people == 1) return stalls -1;
  else{
    if (people%2 == 0) return stallDistance(stalls/2, people/2);
    else{
        if (stalls%2 == 0) return stallDistance(stalls/2 -1, people/2);
        else return stallDistance(stalls/2, people/2);
    }
  }
}

int main() {
  long long t, stalls, people, r, min, max;
  cin >> t; 
  for (int i = 1; i <= t; ++i) {
    cin >> stalls >> people;
    r = stallDistance(stalls,people);
    if (r%2 == 0) {
      min = max = r/2;
    }
    else {
      max = (r+1)/2;
      min = (r-1)/2;
    }
    cout << "Case #" << i << ": " << max << ' ' << min << endl;
  }
}


