#include <iostream>

using namespace std;

void pascal(int* pas, int n, int k) {
        for (int i = 0; i < n; i++) {
                pas[i*0] = 1;
                pas[i*i] = 1;
                for (int k = 1; k < i; k++)
                        pas[i*k] = pas[(i-1)*(k-1)] + pas[(i-1)*k];
        }
}

int main(){
        int n, k;
        cin >> n >> k;
        int* pas = new int[n*k];
        pascal(pas, n, k);

        cout << pas[7*4]; //7 choose 4

}

