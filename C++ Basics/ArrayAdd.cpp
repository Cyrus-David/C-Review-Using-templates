//Array Addition using template

#include <iostream>

using namespace std;

template <class T>

T Adding(T arr[], T sum){
  for(int i = 0; arr[i+1] != '\0'; i++){
    sum += arr[i];
  }

  return sum;
}

int main(){
  int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
  int sum = 0;

  cout << "Sum of Array 1 is " << Adding(arr1,sum) <<endl;

  double arr2[10] = {1.2,2.2,3.2,4.2,5.3,6.1,7.4,8.3,9.1,10.5};
  double sum2 = 0;

  cout << "Sum of Array 2 is " << Adding(arr2,sum2);
}
