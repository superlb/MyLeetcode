class Solution {
public:
    string printBin(double num) {
        if(num<=0 || num>=1) return "ERROR";
        string str = "0.";
        while(num != 0)
        {
            num*=2;
            if(num>=1)
            {
                --num;
                str.append("1");
            } 
            else
            {
                str.append("0");
            }
            if(str.size()>32)
                return "ERROR";
        }
        return str;
    }
};