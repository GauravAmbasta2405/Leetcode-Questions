class Solution {
public:
    bool isPalindrome(int x) {
        
		// If the number is negative, it cannot be a palindrome.
        if(x < 0)
            return false;
        
		// Create a reverse of x and store it in reverse, keep an original copy of x though.
        unsigned reverse = 0;
        unsigned original = x;
        while(x != 0) {
               
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
        
		// Return the comapre of the reverse and the original.
        return reverse == original;
    }
};