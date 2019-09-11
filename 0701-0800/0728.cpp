/*
Date: 2019年9月9日14:44:54
Time: 4ms
*/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> a;
        for(int d1 = 1;d1<=9;++d1)
            if(d1>=left && d1<=right)
                a.push_back(d1);
        for(int d1 = 1;d1<=9;++d1)
        {
            for(int d2 = 1;d2<=9;++d2)
            {
                int q = d1*10+d2;
                if(q >= left && q<=right && q%d1==0 && q%d2==0)
                    a.push_back(q);
            }
        }
        for(int d1 = 1;d1<=9;++d1)
        {
            for(int d2 = 1;d2<=9;++d2)
            {
                for(int d3 = 1;d3<=9;++d3)
                {
                    int q = d1*100+d2*10+d3;
                    if(q >= left && q<=right && q%d1==0 && q%d2==0 && q%d3==0)
                        a.push_back(q);
                }
            }
        }
        for(int d1 = 1;d1<=9;++d1)
        {
            for(int d2 = 1;d2<=9;++d2)
            {
                for(int d3 = 1;d3<=9;++d3)
                {
                    for(int d4 = 1;d4<=9;++d4)
                    {
                        int q = d1*1000+d2*100+d3*10+d4;
                        if(q >= left && q<=right && q%d1==0 && q%d2==0 && q%d3==0 && q%d4==0)
                            a.push_back(q);
                    }
                }
            }
        }
        return a;
    }
};
