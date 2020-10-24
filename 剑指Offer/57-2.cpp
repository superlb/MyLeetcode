class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> vec;
        vector<int> res;
        int sum = 0, limit = (target - 1) / 2;
        for (int x = 1; x <= limit; ++x) {
            long long delta = 1 - 4 * (x - 1ll * x * x - 2 * target);
            if (delta < 0) {
                continue;
            }
            int delta_sqrt = (int)sqrt(delta + 0.5);
            if (1ll * delta_sqrt * delta_sqrt == delta && (delta_sqrt - 1) % 2 == 0) {
                int y = (-1 + delta_sqrt) / 2;
                if (x < y) {
                    res.clear();
                    for (int i = x; i <= y; ++i) {
                        res.emplace_back(i);
                    }
                    vec.emplace_back(res);
                }
            }
        }
        return vec;
    }
};