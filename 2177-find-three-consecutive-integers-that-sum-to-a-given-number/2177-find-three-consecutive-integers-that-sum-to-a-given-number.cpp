class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        // int n= num;
        // vector<int>ans;
        // int c=0;
        // for(int i=2;i*(i+1)/2<=n;i++)
        //     if((n-i*(i+1)/2)%n==0)c++;
        //  return c+1;
        
        vector<long long> res;
        
        if(num %3 == 0){
            res.push_back(num/3-1);
            res.push_back(num/3);
            res.push_back(num/3 +1);
        }
        
        return res;
        
       
        
    }
};