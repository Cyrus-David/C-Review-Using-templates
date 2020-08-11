#include <iostream>

#define N 9

using namespace std;

bool isPlaceable(int arr[][N], int num, int row, int col) {
	//column checker
	for (int j = 0; j < N; j++) {
		if (arr[row][j] == num)
			return false;
	}
	//row checker
	for (int i = 0; i < N; i++) {
                 if (arr[i][col] == num)
                        return false;
        }
	//box checker	
	int rCheck, cCheck;
	rCheck = (row/3) * 3;
	cCheck = (col/3) * 3;
	
	for (int i = rCheck; i < rCheck + 3; i++)
		for (int j = cCheck; j < cCheck + 3; j++)
			if (arr[i][j] == num)
				return false;
	return true;
}

//prints the grid
void print(int arr[][N]) {
	cout << endl;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

//checks if it is full
bool isFull(int arr[][N], int &i, int &j) {
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			if (arr[i][j] == 0) //the row and col is equal to the index of zero
				return false;
	return true;
}

//solve the problem using backtracking
bool solve(int arr[][N]) {
	int row, col; //initializing row and col for later use
 
	if (isFull(arr,row,col)) //we get the row and col values here
		return true;
	
	for (int i = 1; i < 10; i++) {
		if (isPlaceable(arr, i, row, col)) {
			arr[row][col] = i;
			if (solve(arr)) //calls the function again, if it full return true
				return true;
			arr[row][col] = 0;	
		}
	}
	//find another solution
	return false;	
}

int main(){
        int arr[N][N]{0};

        //input
        for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                        cin >> arr[i][j];
	
	if(solve(arr))
		print(arr);
	else
		cout << "INVALID";
}


