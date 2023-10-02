#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool winnerOfGame(string s)
    {
        int a = 0, b = 0;
        int ac = 0, bc = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'A')
            {
                ac++;
                if (bc > 2)
                {
                    b += bc - 2;
                }
                bc = 0;
            }
            else if (s[i] == 'B')
            {
                bc++;
                if (ac > 2)
                {
                    a += ac - 2;
                }
                ac = 0;
            }
        }
        if (bc > 2)
        {
            b += bc - 2;
        }
        if (ac > 2)
        {
            a += ac - 2;
        }

        return a > b;
    }

    // Method 2 efficient and smalll

    bool Game(string s) {
        
        int a = 0, b = 0;
        
        for(int i=1; i<s.size()-1; i++){
            if(s[i-1] == s[i] && s[i] == s[i+1]){
                if(s[i] == 'A')
                    a++;
                else
                    b++;
			}
        }   
                    
        return a>b;
    }

};