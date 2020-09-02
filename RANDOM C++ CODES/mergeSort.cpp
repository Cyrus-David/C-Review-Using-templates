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
		cin >> arr[i]; //input
	arr = solve(arr, N);
	print(arr, N);
}

int* solve(int* arr, int N) {
	if(N == 1) //base case
		return arr;
	int size = N/2; //geting the half siz
	int* arr1 = new int[N-size]; //first must be greater. Example 9, first
	int* arr2 = new int[size]; //array must 5 and second array is 4

	for (int i = 0; i < N; i++) {  //partitioning the array
		if ( i < N-size)
			arr1[i] = arr[i];
		else
			arr2[i-(N-size)] = arr[i];
	}
	arr1 = solve(arr1,N-size); //dividing it again
	arr2 = solve(arr2,size); //diving the second half too

	return sort(arr1, arr2, N); //sorting the final solution
}

int* sort(int* arr1, int* arr2, int N) {
	int j = 0, k = 0; //indexing for two arrays
	int* holder = new int[N]; //temporary holder for sorted array
	
	for (int i = 0; i < N; i++) {//make sure arr1(bigger array) is not empty
		if ((arr1[j] < arr2[k] || arr2[k] == '\0') && arr1[j] != '\0') {
			holder[i] = arr1[j]; //if arr1 is less than, put it to
			j++; //the holder then increase its index
		} else {
			holder[i] = arr2[k]; //same with secind array
			k++;
		}
	}
	return holder; //return the sorted array
}

void print(int* arr, int N) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}
