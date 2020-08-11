#include <iostream>
//subtracting arrays using template
using namespace std;

template <class T>

T subT(const T arr[], T sum = 0){
  for(int i = 0; arr[i] != '\0'; i++){
    sum -= arr[i];
  }
  return sum;
}

int main(){
  int arr1[5] = {1,2,3,4,5};
  cout << subT(arr1) << endl;
  double arr2[5] = {2.1,2.2,2.3};
  cout << subT(arr2);

}