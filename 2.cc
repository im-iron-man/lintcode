class Solution {
public:
    /*
     * @param n : description of n
     * @return: description of return
     * @solution: http://blog.csdn.net/qq_16255321/article/details/37994015
     */
    long long trailingZeros(long long n) {
        if (n < 5) return 0;
        n /= 5;
        return n + trailingZeros(n);
    }
};