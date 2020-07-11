#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int addNumbers(int firstNum, int secondNum = 0){
  int combinedValue = firstNum + secondNum;

  return combinedValue;
}

//overload functions
int addNumbers(int firstNum, int secondNum, int thirdNum){
  return firstNum + secondNum + thirdNum;
}

int getFactorial(int number){
  if(number == 1) 
    return 1;
  else
    return getFactorial(number - 1) * number;
}


int main(){
  cout << "2 + 2 = " << addNumbers(2,2) << endl;

  cout << "2 + 3 + 4 = " << addNumbers(2,3,4) << endl;

  cout << "Factorial of 6 = " << getFactorial(6);

  return 0;
}