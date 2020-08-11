#include <iostream>
//I'm using multiple templates here
//this is a valid use of multiple templates
using namespace std;

template <class T1, class T2>

void copy(const T1 source[], T2 des[]){
  for(int i = 0; source[i] != '\0'; i++){
    des[i] = static_cast<T2>(source[i]);  //static casting to avoid errors
  }
}

int main(){
  int arr1[5] = {2,3,4,5,6};
  double arr2[5];

  copy(arr1,arr2);

  for(int i = 0; i < 5; i++){
    cout << arr2[i] << endl;
  }

  return 0;
}