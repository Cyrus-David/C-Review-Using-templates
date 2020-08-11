#include <iostream>
#include <cmath>
using namespace std;

int fib4(int num) {
  double phi = (1 + sqrt(5))/2;
  double phi2 = (1 - sqrt(5))/2;
  return ((pow(phi,num) - pow(phi2,num)) / sqrt(5));
}

int fib3(int num) {
  int ans[num+1];
  ans[0] = 0;
  ans[1] = 1;
  for( int i = 2; i <= num; i++) {
    ans[i] = ans[i-1] + ans[i-2];
  }
  return ans[num];
}

int fib2(int num) {
  if(num <= 1)
    return num;

  return (fib2(num-1) + fib2(num-2));
}

int fib(int num) {
  int cnt = 0, ans = 0;
  int start, end = 1;
  while (cnt != num) {
    start = ans;
    ans = start + end;
    end = start;
    ++cnt; 
  }
  return ans;
}

int main(){
  int n;
 
  while(1) {
    n = rand() % 30 + 1;
    if (fib3(n) == fib(n))
      cout << "correct" << fib3(n) << "|" << fib(n) << endl; 
    else {
      cout << "wrong -- "<< n << "  === " << fib3(n) << "|" << fib(n) << endl;
      break;
    }
  } 
  return 0;
}
