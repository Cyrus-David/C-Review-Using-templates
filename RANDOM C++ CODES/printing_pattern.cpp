#include <iostream>
#define min(a, b) ((a) < (b) ? (a) : (b))

using namespace std;

void solve(int n) {
	int row_col = n*2 - 1;
	int dis;
	for (int i = 0; i < row_col; i++) {
		for (int j = 0; j < row_col; j++) {
			dis = min(i, j);
			dis = min(dis, row_col - i - 1);
			dis = min(dis, row_col - j - 1);
			cout << n - dis << " ";
		}
		cout << endl;
	}	
}

int main() {
	int n;
	cin >> n;
	solve(n);
}
