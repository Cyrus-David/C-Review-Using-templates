#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Hello World!" << endl;

  const double PI = 3.1415926535;

  char myGrade = 'A';

  bool isHappy = true;

  int myAge = 39;

  float favNum = 3.141592;

  double otherfavNum = 1.180339887;

  cout << "Favorite Number: " <<favNum << endl;

  cout << "Size of int: " << sizeof(myAge) << endl;

  int largestInt = 2147483647;

  cout << "Largest int: " << largestInt << endl;

  //+, - , * , % , ++ , --

  int five = 5;

  cout << "5++ = " << five++ << endl;
  cout << "++5 = " << ++five << endl;
  cout << "5-- = " << five-- << endl;
  cout << "--5 = " << --five << endl;

  //Order of Operations * and / is performed first befor - and +;

  //Use casting to get the output you want.
  cout << "4/5 = " << (float) 4/5 << endl;




  return 0;

}