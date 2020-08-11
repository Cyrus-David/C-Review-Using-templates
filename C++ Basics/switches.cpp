#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(){

  int greetingOption = 2;

  switch(greetingOption){
    case 1:
      cout << "bonjour!" << endl;
      break;
    case 2:
      cout << "Hallo!" << endl;
      break;
    default:
      cout << "Kamusta!" << endl;
  }
}