class Solution {
public:
    int minArray(vector<int>& numbers) {
        int m = numbers[0];
        for(auto a : numbers)
            m = min(a,m);
        return m;
    }
};