#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
/* 
  This program solves wether placing N queens in a N x N chessboard is valid withouth them attacking eachother.
*/

using namespace std;

//Checks if the partial permutation is valid and does not attach eachother
bool corPat(vector<int> perm) {
  int n = perm.size() - 1;
  for (int i = 0; i < n; i ++) {
    if ( (n - i) == abs(perm[n] - perm[i])){ //this checks if the pieces are not in the same 
      return false;                           //diagonal
    }
  }
  return true;
}

//This creates permutations
void permMaker(vector<int> perm, int n) {
  if (n == perm.size()) {
    for (int i = 0; i < n; i++) {
      cout << perm[i];
      if (i != n-1)
        cout << ",";
      else
        cout << endl;
    }
  } else {
    for (int i = 0; i < n; i++) {
      if (!(find(perm.begin(), perm.end(), i) != perm.end())) { //check wether i is not present in
        perm.push_back(i);                                        //the vector
        
        if (corPat(perm)){
          permMaker(perm,n);
        }
        
        perm.pop_back();
      }
    }
  }

}

int main(){
  int T;

  cin >> T;

  int n;
  while(T--){
    vector<int> perm;
    cin >> n;
    permMaker(perm,n);
  }
}
