class Solution {
public:
    /*
     * @param a: The first integer
     * @param b: The second integer
     * @return: The sum of a and b
     */
    int aplusb(int a, int b) {
        // write your code here, try to do it without arithmetic operators.
        while (b) {
            int t = a;
            a ^= b;
            b &= t;
            b <<= 1;
        }
        return a;
    }
};