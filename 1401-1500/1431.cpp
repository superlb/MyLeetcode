class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v(candies.size(),false);
        int maxnum = *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();++i)
            if(candies[i]+extraCandies>=maxnum)
                v[i]=true;
        return v;
    }
};