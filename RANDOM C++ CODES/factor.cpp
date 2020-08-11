#include <iostream>
#include <vector>
using namespace std;

vector<int> factorList(int n) {
	int factor = 2;
	vector<int> ans = {};
	while (factor <= n) {
		if (n % factor == 0) {
			ans.push_back(factor);
			n /= factor;
		} else
			factor++;
	}
	return ans;
}


int main(){
	vector<int> ans = factorList(100);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}

}
