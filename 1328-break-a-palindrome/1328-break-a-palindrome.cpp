class Solution {
public:

string breakPalindrome(string p) {
    int n=p.length();
    if(n==1)
        return "";
    
    for(int i=0;i<n/2;i++)
    {
        if(p[i]!='a')
        {
            p[i]='a';
            return p;
        }
    }
    
    for(int i=n-1;i>=n/2;i--)
    {
         if(p[i]=='z')
         {
             p[i]='a';
             return p;
         }
         else
         {
             // char ch=p[i];
             // ch++;
             // p[i]=ch;
             p[i]++;
             return p;
         }
             
    }
    
    
    return "";
}
};