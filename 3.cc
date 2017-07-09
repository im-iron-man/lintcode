class Solution {
public:
    /*
     * @param k : As description
     * @param n : As description
     * @return: How many k's between 0 and n
     */
    int digitCounts(int k, int n) {
        int count = 0;
        if (!k) ++count;
        for (int i = 1; i < n+1; ++i) {
            int j = i;
            while (j) {
                if (j % 10 == k) ++count;
                j /= 10;
            }
        }
        return count;
    }
};