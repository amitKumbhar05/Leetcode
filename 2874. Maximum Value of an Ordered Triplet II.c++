#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long res=0;
        int maxab=0;
        int maxa=0;
        for(auto a:nums)
        {
            res = max(res, 1LL* maxab * a);
            maxab = max(maxab,maxa-a);
            maxa = max(maxa,a);
        }
        return res;
    }
};