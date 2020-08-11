#include <iostream>


using namespace std;

void solve() {
}

int main() {
	int n;
	cin >> n;
	
	int* arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}	

	solve();
}
