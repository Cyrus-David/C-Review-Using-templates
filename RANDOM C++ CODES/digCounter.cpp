#include <iostream>
#include<string>

using namespace std;

int digitCounter(string num) {
    int result = num.length();
    if(num.find_first_not_of('9') == string::npos)
        result += 1;

    return result;
}

int main(){
    string num;
    cin >> num;

    cout << digitCounter(num);
   
    return 0;
}
