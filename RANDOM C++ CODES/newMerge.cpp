#include <iostream>

using namespace std;

void solve(int*, int, int);
void merge(int*, int, int, int, int);

int main() {
	//size of the array
	int N;
	cin >> N;
	
	//dynamic allocation
	int* arr = new int[N];
	
	//input
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	
	//solve the problem, which is sorting
	solve(arr, 0, N - 1);	
	
	//prints
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}


void solve(int* arr, int start, int end) {
	//returns if start is equal to end
	if (start < end) {
		int mid = (start + end)/2;
		solve(arr, start, mid);               //left recursion
		solve(arr, mid + 1, end);	      //right recursion
		merge(arr, start, mid, mid + 1, end); // merge the two
	}
}

void merge(int* arr, int start1, int end1, int start2, int end2) {
	int* temp = new int[end2 - start1]; // get the temp size
	int j = start1, k = start2; //initialize variables for indexing
	
	//storing the sorted values in the temp array	
	for (int i = 0; k <= end2 || j <= end1; i++) {
		if ((arr[j] < arr[k] && j <= end1) || k > end2)
			temp[i] = arr[j++];
		else
			temp[i] = arr[k++];
	}
	
	//assigning it back to main array
	for (int i = start1, j = 0; i <= end2; i++, j++)
		arr[i] = temp[j];
}
