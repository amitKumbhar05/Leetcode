#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int mp[26]={0};
        int mx=INT_MIN;
        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]-'A']++;
            mx=max(mx,mp[tasks[i]-'A']);
        }
        int minf=(mx-1) * (n+1);
        for(int i=0;i<26;i++)
        {
            if(mx==mp[i])
            {
                minf++;
            }
        }
        int ans=max(static_cast<int>(tasks.size()),minf);
        return ans;
    }
};