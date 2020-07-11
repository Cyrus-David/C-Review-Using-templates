#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  for(int i = 1; i <= 10; i++){

    cout << i << endl;

  }
///////////////////////////////////////////////////////////  
  char myName[5][5] = {{'C','y','r','u','s'},
                     {'D','a','v','i','d'}};

  for(int j = 0; j < 5; j++){

    for(int k = 0; k < 5; k++){

      cout << myName[j][k];

    }

    cout << endl;
  
  }
/////////////////////////////////////////////////////
  int index = 1;

  while(index <= 10){
    
    cout << index << endl;
    index++;
  }
//////////////////////////////////////////////////////////////////
  string numberGuessed;
  int intNumberGuessed = 0;

  do {
  
    cout << "Guess between 1 and 10";

    getline(cin, numberGuessed);

    intNumberGuessed = stoi(numberGuessed);

    cout << intNumberGuessed  << endl;
  
  } while(intNumberGuessed != 4);

  cout << "You win" << endl;


/////////////////////////////////////////////////
  int randNum = (rand() % 100) + 1;

  while(randNum != 100){
    cout << randNum << ", ";
    randNum = (rand() % 100) + 1;

  }

  return 0;
}