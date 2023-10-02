#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        long sma=0;
        for(int i=0;i<nums.size();i++)
        {
            sma+=nums[i];
        }
        long sm=0;
        int n=nums.size(),k=target/sma,res=n;
        target%=sma;
        if(target==0)
        {
            return k*n;
        }
        unordered_map<long ,int> mp{{0L,-1}};

        for(int i=0;i<2*n;i++)
        {
            sm+=nums[i%n];
            if(mp.count(sm-target))
            {
                res=min(res,i-mp[sm-target]);
            }
            mp[sm]=i;
        }

        return res<n? res+k*n : -1;
    }
};