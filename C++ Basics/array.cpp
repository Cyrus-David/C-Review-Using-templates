#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
  
  int myFavNums[5];

  int badNums[5] = {4, 13 ,14, 24, 34};

  cout << "Bad Number 1: " << badNums[0] << endl;

  char myName[5][5] = {{'C','y','r','u','s'},
                        {'D','a','v','i','d'}};

  cout << "2nd ltter in tn 2nd array: " << myName[1][1] << endl;

  myName[0][2] = 'h';

  cout << "New Value " << myName[0][2] << endl;

  for(int i = 1; i <= 10; i++){

    cout << i << endl;

  }

  for(int j = 0; j < 5; j++){

    for(int k = 0; k < 5; k++){

      cout << myName[j][k];

    }

    cout << " ";
  
  }
}