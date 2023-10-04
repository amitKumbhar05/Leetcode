#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int>r;
        unordered_set<int>c;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    r.insert(i);
                    c.insert(j);
                }
            }
        }
        for(auto i:r)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                matrix[i][j]=0;
            }
        }
        for(auto i:c)
        {
            for(int j=0;j<matrix.size();j++)
            {
                matrix[j][i]=0;
            }
        }
    }
};