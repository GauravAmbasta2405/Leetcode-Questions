

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        int start = 0, end = n-k;
        while(start<end){
            int mid = (start+end)/2;
            if (x-arr[mid]> arr[mid+k]-x){
                start = mid+1;
            }else{
                end = mid;
            }
        }
        vector<int> op(arr.begin()+start, arr.begin()+start+k);
        return op;
    }
};