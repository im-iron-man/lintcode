class Solution {
public:
    // param n : description of n
    // return: description of return
    long long trailingZeros(long long n) {
        if (n < 5) return 0;
        n /= 5;
        return n + trailingZeros(n);
    }
};