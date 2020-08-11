//Swapping using template

#include <iostream>
#include <complex>

using namespace std;

template <class T>

void Swap(T &num1, T &num2){
  T temp = num2;
  num2 = num1;
  num1 = temp;
}

int main(){
  int num1 = 5, num2 = 10;
  double num3 = 5.3, num4 = 10.6;

  complex<double>r(2.4,3.5),s(3.4,6.7);

  //int
  cout << "Inputs are: " << num1 << " and " << num2 << endl;
  Swap(num1,num2);
  cout << "Swap result " << num1 << " and " << num2 << endl;
  //double
  cout << "Inputs are: " << num3 << " and " << num4 << endl;
  Swap(num3,num4);
  cout << "Swap result " << num3 << " and " << num4 << endl;
  //complex number
  cout << "Inputs are: " << r << " and " << s << endl;
  Swap(r,s);
  cout << "Swap result " << r << " and " << s << endl;
  

}