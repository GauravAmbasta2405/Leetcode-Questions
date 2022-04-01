class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()==0)
            return ;
        int a =0;
        int b = s.size()-1;
        while(a<b){
            char temp = s[a];
            s[a]= s[b];
            s[b]= temp;
            a++;
            b--;
        }
    }
};