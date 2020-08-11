#include <string>
#include <fstream>
#include <iostream>

using namespace std;

void makeMeYoung(int* age){

  cout << "I used to be " << *age << endl;
  *age = 21;

}

void actYourAge(int& age){

  age = 39;

}

int main(){
  int myAge = 39;
  char myGrade = 'A';

  cout << "Size of int " << sizeof(myAge) << endl;
  cout << "Size of char " << sizeof(myGrade) << endl;

  cout << "myAge is located at " << &myAge << endl;

  int* agePtr = &myAge;

  cout << "Adress of pointer: " << agePtr << endl;

  cout << "Data at memory adress " << *agePtr << endl;
  ///////////////////////////////////////////////////

  int badNums[5] = {4, 13, 14, 24, 34};

  int* numArrayPtr = badNums;

  cout << "Address " << numArrayPtr << " value " << *numArrayPtr << endl;

  numArrayPtr++;

  cout << "Address " << numArrayPtr << " value " << *numArrayPtr << endl;

  cout << "Address " << badNums << " Value " << *badNums << endl;

  //////////////////////////////////

  makeMeYoung(&myAge);

  cout << "I'm " << myAge << " years old now" << endl;

  int& ageRef = myAge;

  cout << "myAge : " << myAge << endl;

  ageRef++;

  cout << "myAge : " << myAge << endl;

  /////////////////////////////////////////////

  actYourAge(ageRef);

   cout << "myAge : " << myAge << endl;


}