#include <iostream>

#define ll long long

ll get_fibonacci_huge_naive(ll n, ll m) {
    if (n <= 1)
        return n;

    ll previous = 0;
    ll current  = 1;

    for (ll i = 0; i < n - 1; ++i) {
        ll tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}


ll get_fibonacci_huge_fast(ll n, ll m) {
    if (n <= 1) return n;

    long prev;
    long cur; 
    int j;
    
    if (n >= 2000000000) {
        prev = 37501;
        cur = 53125; 
        j = 2000000000;
    } else if (n >= 1000000000) {
        prev = 90626;
        cur = 46875; 
        j = 1000000000;
    }else if (n >= 100000001) {
        prev = 546875;
        cur = 937501; 
        j = 100000001;
    } else {
        prev = 0;
        cur = 1;
        j = 1;
    }
    
    long copyP;

    for(long i = j; i < n; i++) {
        copyP = prev;
        prev = cur;
        cur = (copyP + cur)%m;
    }
    
    return cur;
}

int main() {
    ll n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge_fast(n, m) << '\n';
}
