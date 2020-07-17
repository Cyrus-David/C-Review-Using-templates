#include <iostream>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> maxRemover(vector<int> a){
    vector<int> result;
    int max = *std::max_element(a.begin(), a.end());
    int cnt = 0, save;

    for (int i = 0; i < a.size(); i++) {
        if (max == a[i]){
            cnt++;
            save = i;
        }
        if(cnt == 3){
            cnt++;
            continue;
        }
        result.push_back(a[i]);
    }

    if (cnt == 1)
        result.erase(result.begin()+save);
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    vector<int> result =  maxRemover(a);

    for (int i = 0; i < n-1; ++i) {
        if (i != 0)
            cout << ' ';
        cout << result[i];
    }

    cout << endl;

    return 0;
}
