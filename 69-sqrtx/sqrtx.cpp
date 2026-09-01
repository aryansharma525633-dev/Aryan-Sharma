class Solution {
public:
    int mySqrt(int n) {
        long long x = n;
        while (x*x > n) {
            x = (x + n/x)/2;

        }
        return x;
    }
};