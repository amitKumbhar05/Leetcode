#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(nums),suf(nums);

        for(int i=1;i<n-1;i++)
        {
            pre[i]*=pre[i-1];
            suf[n-i-1]*=suf[n-i];
        }
        nums[0]=suf[1];
        nums[n-1]=pre[n-2];

        for(int i=1;i<n-1;i++) nums[i]=pre[i-1]*suf[i+1];
        return nums;
    }
};