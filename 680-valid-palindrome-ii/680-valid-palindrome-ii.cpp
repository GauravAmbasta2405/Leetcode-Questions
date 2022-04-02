class Solution {
public:

bool isPalindrome (string s, int left, int right){
    while(left < right){
        if(s[left] == s[right] ) {
            right--;
            left++;
        }
        else
            return 0;
    }
    return 1;
}


bool validPalindrome(string s) {
    int left  = 0;
    int right = s.size() - 1;
    
    while(left < right){
        if(s[left] == s[right]){
            right--;
            left++;
        }
        else{
            return isPalindrome (s, left, right-1) or isPalindrome (s, left+1, right);
        }
    }
    return true;
    
}
};