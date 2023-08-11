#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        vector<int>mp(26);
        int greatf=0,i=0;
        for(char it:s)
        {
            if(++mp[it-'a']>mp[greatf])
            {
                greatf=(it-'a');
            }
        }
        if(2*mp[greatf]-1>s.size())return "";

        while(mp[greatf])
        {
            s[i]=('a' + greatf);
            i+=2;
            mp[greatf]--;
        }
        for(int j=0;j<26;j++)
        {
            while(mp[j])
            {
                if(i>=s.size())i=1;
                s[i]=('a'+ j);
                i+=2;
                mp[j]--;
            }
        }
        return s;
    }
};