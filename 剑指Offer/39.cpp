class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int card = 0;
        for(auto a : nums)
        {
            if(count==0) card = a;
            count += (card==a)?1:-1;
        }
        return card;
    }
};