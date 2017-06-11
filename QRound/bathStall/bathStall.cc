#include <iostream> 
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;  


long long bathProblem(long long N, long long K){
  int level = floor(log(K)/log(2));
  long long people = pow(2,level);
  long long seats = N - people + 1;
  long long seatsCeil = ceil(1.0*seats/people);
  long long seatsFloor = floor(1.0*seats/people);
  seats = seats - seatsFloor*people;
  if(K - pow(2,level) + 1 <= seats) return seatsCeil;
  return seatsFloor;
}
int main() {
  long long t, stalls, people, r, min, max;
  cin >> t; 
  for (int i = 1; i <= t; ++i) {
    cin >> stalls >> people;
    long long effectiveSize = bathProblem(stalls,people);
    cout << "Case #" << i << ": ";
    if(effectiveSize <= 1){
      cout << 0 << " " << 0 << endl;
    }else{
      long long upper = ceil(1.0*(effectiveSize-1)/2);
      long long lower = floor(1.0*(effectiveSize-1)/2);
      cout << upper << ' ' << lower << endl;
    }
}
}


