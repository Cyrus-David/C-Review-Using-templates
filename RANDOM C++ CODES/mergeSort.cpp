#include <iostream>

using namespace std;

int* solve(int*, int);
int* sort(int*, int*, int);
void print(int*, int);

int main() {
	int N;
	cin >> N;
	int* arr = new int[N];
	
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	arr = solve(arr, N);
	print(arr, N);
}

int* solve(int* arr, int N) {
	if(N == 1)
		return arr;
	int size = N/2;
	int* arr1 = new int[N-size];
	int* arr2 = new int[size];

	for (int i = 0; i < N; i++) {
		if ( i < N-size)
			arr1[i] = arr[i];
		else
			arr2[i-(N-size)] = arr[i];
	}
	arr1 = solve(arr1,N-size);
	arr2 = solve(arr2,size);

	return sort(arr1, arr2, N); 
}

int* sort(int* arr1, int* arr2, int N) {
	int j = 0, k = 0;
	int* holder = new int[N];
	
	for (int i = 0; i < N; i++) {
		if ((arr1[j] < arr2[k] || arr2[k] == '\0') && arr1[j] != '\0') {
			holder[i] = arr1[j];
			j++;
		} else {
			holder[i] = arr2[k];
			k++;
		}
	}
	return holder;
}

void print(int* arr, int N) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}
