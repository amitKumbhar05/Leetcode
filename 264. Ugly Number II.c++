#include<bits/stdc++.h>;
#include<vector>
class Solution {
public:
    int nthUglyNumber(int n) {
        if (n <= 6) {
            return n; // The first six ugly numbers are 1, 2, 3, 4, 5, and 6
        }

        vector<int> ugly(n);
        ugly[0] = 1; // The first ugly number is 1
        int idx2 = 0, idx3 = 0, idx5 = 0; // Index pointers for 2, 3, and 5 factors

        for (int i = 1; i < n; i++) {
            int nextUgly = min(ugly[idx2] * 2, min(ugly[idx3] * 3, ugly[idx5] * 5));
            ugly[i] = nextUgly;

            if (nextUgly == ugly[idx2] * 2) {
                idx2++;
            }
            if (nextUgly == ugly[idx3] * 3) {
                idx3++;
            }
            if (nextUgly == ugly[idx5] * 5) {
                idx5++;
            }
        }

        return ugly[n - 1];
    }
};