class Solution {
public:
    int exchangeBits(int num) {
        return ((num & 0b10101010101010101010101010101010) >> 1) |
               ((num & 0b01010101010101010101010101010101) << 1);
    }
};