#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
  vector <int> lotteryNumVect(10);

  int lotteryNumArray[5] = {4, 13, 14, 24, 34};

  lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray+3);

  cout << lotteryNumVect[1] << endl;

  cout << lotteryNumVect.at(2) << endl;

  lotteryNumVect.insert(lotteryNumVect.begin()+5, 44);

  cout << lotteryNumVect.at(5) << endl;

  lotteryNumVect.push_back(64);

  cout << "Final Value " << lotteryNumVect.back() << endl;

  lotteryNumVect.pop_back();

  //.empty() .front() - first element, .back() - last element, .size() - size of vector; 

  return 0;

}