#include<bits/stdc++.h>
using namespace std;

// Brute force
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        for(int i=0;i<boxes.length();i++)
        {
            int sm=0;
            for(int j=0;j<boxes.length();j++)
            {
                if(boxes[j]=='1')
                    sm+=abs(j-i);
            }
            ans.push_back(sm);
        }
        return ans;
    }
};

vector<int> minOperations(string boxes) {
    vector<int> res(boxes.length()); 
    for (int i = 0, ops = 0, cnt = 0; i < boxes.length(); ++i) {
       res[i] += ops;
       cnt += boxes[i] == '1' ? 1 : 0;
       ops += cnt;
    }
    for (int i = boxes.length() - 1, ops = 0, cnt = 0; i >= 0; --i) {
        res[i] += ops;
        cnt += boxes[i] == '1' ? 1 : 0;
        ops += cnt;
    }
    return res;
}