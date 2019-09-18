/*
Date: 2019年9月11日22:58:47
Time: 64ms
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        vector<int> q;
        while(x!=0)
        {
            q.push_back(x%10);
            x/=10;
        }
        int len = q.size();
        for(int i = 0;i<len/2;++i)
        {
            if(q[i] != q[len-i-1])
                return false;
        }
        return true;
    }
};
