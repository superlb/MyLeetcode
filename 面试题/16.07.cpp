class Solution {
public:
    int maximum(int a, int b) {
        long long aa=a,bb=b;
        return ((aa+bb) + abs(aa-bb))/2;
    }
};