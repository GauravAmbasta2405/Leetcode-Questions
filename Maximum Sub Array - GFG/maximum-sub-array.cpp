// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	     long long int curr_sum=0;
    long long int max_sum=-1;
    vector<int>ans,res;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            curr_sum+=a[i];
            ans.push_back(a[i]);
        }
        else
        {
            if(curr_sum>max_sum)
            {
                max_sum=curr_sum;
                res=ans;
            }
            ans.clear();
            curr_sum=0;
        }
    }
    if(curr_sum>max_sum)
    {
       max_sum=curr_sum;
       res=ans;
    }
    ans.clear();
    curr_sum=0;
    if(res.empty())
        res.push_back(-1);
   return res;
	}
};

// { Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends