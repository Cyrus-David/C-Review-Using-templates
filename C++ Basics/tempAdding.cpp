//addition function using templates

#include <iostream>

using namespace std;

template <class T>

void Addition(T num1, T num2){
  cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
}

int main(){
  int num1 = 22, num2 = 23;
  double num3 = 23.23, num4 = 21.22;

  Addition(num1,num2);
  Addition(num3,num4);
  
  return 0;
}