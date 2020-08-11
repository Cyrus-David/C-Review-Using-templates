#include <iostream>
//print using template
using namespace std;

template <class T>

T printT(const T arr[], T sum = 0){
  for(int i = 0; arr[i] != '\0'; i++)
    cout << arr[i] << endl;

  return sum;
}

int main(){
  int arr1[5] = {1,2,3,4,5};
  printT(arr1);
  double arr2[5] = {2.1,2.2,2.3};
  printT(arr2);

}