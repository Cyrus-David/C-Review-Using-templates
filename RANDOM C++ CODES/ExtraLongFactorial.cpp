#include <iostream>

using namespace std;

//multiplies the factorial in an array holder
//copies carry and adds them to the next number
//if there is still carry left, we add them to the next number
int multiply(int [], int, int);

//following the factorial formula
void factorial(int n);

//driver
int main() {
    int N;
    cin >> N;

    factorial(N);
}

void factorial(int n) {
    int holder[500]; //declaring the possible max digits
    holder[0] = 1;
    int holderSize = 1; //current number of digits

    //the factorial, 1 * 2 * 3 * 4 ... * n
    for (int num = 2; num <= n; num++) {
        holderSize = multiply(holder, holderSize, num);
    }
	
    //reverse printing
    for (int i = holderSize-1; i >= 0; i--) {
        cout << holder[i];
    }

}

int multiply(int* holder, int size, int num) {
    int carry = 0; //initializing the carry
    int prod; //the holder of the product
    
    //multiplying all the digits in the holder
    for (int i = 0; i < size; i++) {
        prod = holder[i] * num + carry;
        holder[i] = prod % 10; //because of this, the answer must be reversed
        carry = prod/10;
    }

    while(carry){
        holder[size] = carry % 10;
        carry /= 10;
        size++;
    }
    return size;
}


