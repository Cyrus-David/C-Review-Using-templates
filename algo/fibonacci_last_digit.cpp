#include <iostream>

unsigned long long get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    unsigned long long previous = 0;
    unsigned long long current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        unsigned long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int get_fibonacci_last_digit_fast(int n) {
    if (n <= 1) return n;

    int prev = 0;
    int cur = 1;
    int copyP;

    for(int i = 1; i < n; i++) {
        copyP = prev;
        prev = cur;
        cur = (copyP + cur)%10;
    }
    
    return cur;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
    
    // while (1) {
    //     n = rand() % 200 + 1;
    //     if (get_fibonacci_last_digit_naive(n) == get_fibonacci_last_digit_fast(n))
    //         std::cout << "okay" << std::endl;
    //     else
    //     {
    //         std::cout << "bad" << std::endl;
    //         std::cout << n << " === " << get_fibonacci_last_digit_naive(n) <<  "||" << get_fibonacci_last_digit_fast(n);
    //         break;
    //     }
        
    // }
    
}
