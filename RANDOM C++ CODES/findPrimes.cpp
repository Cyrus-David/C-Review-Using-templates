#include <iostream>
using namespace std;
 
bool isPrime(int num) {
    if ((num % 2 == 0 && num > 2) || num <= 1)
        return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return false;
    }

    return true;
}
 
int main()
{
    int testCase;
    int low, high;

    cin >> testCase;
    while(testCase--) {
        cin >> low >> high;
        cout << endl;
        for (int i = low; i <= high; i++) {
            if (isPrime(i)) {
                cout << i << endl;
            }
        }
    }
    return 0;
}
