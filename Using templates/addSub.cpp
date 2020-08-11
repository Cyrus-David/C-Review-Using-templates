#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int myFunc(int x, int y, int z){
    if (z == 0) return 0;  //trivial cases
    if (x == z) return 1;
    if (x == y) return -1;

    int ans;
    //checks the geometric ratio of the difference of x and y
    if (z % (x - y) == 0)
      ans = (z / (x - y)) * 2 ;
    else
      ans = 100000000;

    int ans2;
    //checks if z subtracted by x the initial, is divisible by the difference
    if ((z - x) % (x - y) == 0){
      ans2 = (z - x) / (x - y) + 1;
      ans2 = 2 * ans2 - 1;
    } else
      ans2 = 100000000;
    //if negative, remove them from possible answer
    if (ans < 0) ans = 100000000;
    if (ans2 < 0) ans2 = 100000000;
    if (ans2 == ans) return -1;
    return (ans < ans2) ? ans : ans2;
}

int main() {

    int x, y, z;
    
    while(cin >> x >> y >> z){
       cout << myFunc(x,y,z) << endl;
    }

}
