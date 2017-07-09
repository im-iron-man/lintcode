class Solution {
public:
    /*
     * @param a: The first integer
     * @param b: The second integer
     * @return: The sum of a and b
     * @solution: http://blog.csdn.net/zhongjiekangping/article/details/6855864
     */
    int aplusb(int a, int b) {
        while (b) {
            int t = a;
            a ^= b;
            b &= t;
            b <<= 1;
        }
        return a;
    }
};