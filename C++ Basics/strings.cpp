#include <string>
#include <fstream>
#include <iostream>

using namespace std;
int main(){

  char happyArray[6] = {'H', 'A', 'P', 'P', 'Y', '\0'};

  string birthdayString = " BIRTHDAY!";

  cout << happyArray + birthdayString << endl;

  string yourName;
  cout << "What is you name? ";
  getline(cin, yourName);

  cout << "Hello " << yourName << endl;

  double eulersConstant = .57721;
  string eulerGuess;
  double eulerGuessDouble;

  cout << "What is Euler's Constant? ";

  getline(cin, eulerGuess);

  eulerGuessDouble = stod(eulerGuess);

  if(eulerGuessDouble == eulersConstant)
    cout << "You are correct!" << endl;
  else
    cout << "You are wrong!" << endl;


  cout << "Size of String " << eulerGuess.size() << endl;
  cout << "Is string empty " << eulerGuess.empty() << endl;
  cout  << eulerGuess.append(" was your guess") << endl;

  string dogString = "dog";
  string catString = "cat";

  cout << dogString.compare(catString) << endl;
  cout << dogString.compare(dogString) << endl;
  cout << catString.compare(dogString) << endl;

  string wholeName = yourName.assign(yourName);
  cout <<wholeName << endl;

  string firstName = wholeName.assign(wholeName, 0, 5);
  cout << firstName << endl;

  int lastNameIndex = yourName.find("David", 0);
  cout << "Index for last name " << lastNameIndex << endl;

  yourName.insert (lastNameIndex, "Pasteeleeroooo ");
  cout << yourName << endl;
  yourName.erase(6, 7);
  cout << yourName << endl;

  yourName.replace(6, 5, "Maximus");
  cout << yourName << endl;


}