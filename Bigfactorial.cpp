#include <iostream>

using namespace std;

void factorial(int);
int multiply(int[], int, int);

int main() {
	int N;
	cin >> N;
	factorial(N);
}

void factorial(int N) {
	int holder[500];
	holder[0] = 1;
	int size = 1;

	for (int i = 2; i <= N; i++) {
		size = multiply(holder, size, i);
	}
	
	for (int i = size - 1; i >=0; i--) {
		cout << holder[i];
	}
}

int multiply(int holder[], int size, int num) {
	int carry = 0;
	
	for (int i = 0; i < size; i++) {
		holder[i] = holder[i] * num + carry;
		carry = holder[i]/10;
		holder[i] %= 10;
	}

	while (carry) {
		holder[size++] = carry % 10;
		carry /= 10;
	}

	return size;
}
