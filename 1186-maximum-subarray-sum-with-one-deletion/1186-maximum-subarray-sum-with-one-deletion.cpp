class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int n = arr.size();
        int nodelete = arr[0];
        int onedelete = INT_MIN;
        int res = arr[0];


        for(int i = 1; i < n; i++)
        {
            int prevnodelete = nodelete;
            int prevonedelete = onedelete;

            int v1 = nodelete + arr[i];
            int v2 = arr[i];

            nodelete = max(v1, v2);

            int v3;

            if(prevonedelete == INT_MIN)
            {
                v3 = arr[i];
            }

            else{

                v3 = prevonedelete + arr[i];
            }


            onedelete = max(v3, prevnodelete);



            res = max(res, max(nodelete, onedelete));
        }

        return res;
        
    }
};