class Solution {
public:
    /*
     * @param n an integer
     * @return the nth prime number as description.
     */
    int nthUglyNumber(int n) {
        int *p = new int[n];
        p[0] = 1;
        int next = 1;
        int *p2 = p;
        int *p3 = p;
        int *p5 = p;
         while (next < n) {
             p[next] = min(min(*p2 * 2, *p3 * 3), *p5 * 5);
             if (*p2 * 2 == p[next]) ++p2;
             if (*p3 * 3 == p[next]) ++p3;
             if (*p5 * 5 == p[next]) ++p5;
             ++next;
        }
        int ugly = p[n-1];
        delete[] p;
        return ugly;
    }
};