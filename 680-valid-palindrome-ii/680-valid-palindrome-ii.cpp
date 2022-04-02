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
    int start  = 0;
    int end = s.size() - 1;
    
    while(start < end){
        if(s[start] == s[end]){
            end--;
            start++;
        }
        else{
            return isPalindrome (s, start, end-1) || isPalindrome (s, start+1, end);
        }
    }
    return true;
    
}
};