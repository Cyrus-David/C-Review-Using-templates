#include <bits/stdc++.h>

using namespace std;

bool checker(int a[], int i, int type) {
    if (i > 24)
        return false;
    if (type == 1) {
        if ((i % 5) != 0 && i - 6 >= 0 && a[i - 6] == 1)
            return false;
        if ((i % 5) != 0 && i - 1 >= 0 && a[i - 1] == 2)
            return false;
        if (i - 5 >= 0 && a[i - 5] == 2)
            return false;

    } else {
        if ((i % 5) != 4 && i - 4 >= 0 && a[i - 4] == 2)
            return false;
        if((i % 5) != 0 && i - 1 >= 0 && a[i - 1] == 1)
            return false;
        if(i - 5 >= 0 && a[i - 5] == 1)
            return false;
    }
    return true;
}

void print(int* arr, int size) {
	for(int i = 0; i < size; i++) {
	   cout << arr[i] << " ";
	   if ( i %  5 == 4)
               cout << "\n";
	}
	cout << "\n\n";
}

void solve(int arr[], int i, int diags) {
    if (diags == 16){
	print(arr, 25);
    }
   
    if(i == 25)
        return;

    solve(arr, i+1, diags);

    for(int k = 1; k < 3; k++){
        if (checker(arr,i,k)) {
            arr[i] = k;
            solve(arr, i+1, diags+1);
            arr[i] = 0;
        }
    }
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
        int arr[25]{0};
	solve(arr, 0, 0);
}
