class Solution {
public:
    int hammingWeight(uint32_t n) {
        int countBit =0;
        while(n > 0){
            if(n&1) {
                countBit++;
            }
            n>>=1;
        }
        return countBit;
    }
};
// another approach using n = n&(n-1)  and then counBit ++ ; return countBits;
