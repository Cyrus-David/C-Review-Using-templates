#include <iostream>

using namespace std;

int minRefill(int* arr, int size, int max) {
	int numRefill = 0, cur = 0;
	for (int i = 0; i < size - 1; i++) {
		if (arr[i + 1] - arr[cur] <= max)
			continue;
		if (i == 0)
			return 0;
		numRefill++;
		cur = i - 1;
	}
	return numRefill;
}

int main() {
	int size;
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	int max;
	cin >> max;

	cout << minRefill(arr, size, max);
}
