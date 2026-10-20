class Solution {
public:
    bool isPowerOfTwo(int n) {

        // 1
        // 0001

        // 16 
        // 8 - 0 , 4 - 0, 2 - 0, 1 - 0, 0 - 1
        // 10000
        //16 + 0 = 16

        return (n > 0) && (n & (n - 1)) == 0;
        
    }
};