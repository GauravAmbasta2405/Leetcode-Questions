class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int n = arr.size();

        int nodelete = arr[0];
        int onedelete = INT_MAX;

        int res = arr[0];

        for(int i = 1; i < n; i++)
        {

            int prevnodelete = nodelete;
            int prevondelete = onedelete;



            int v1 = nodelete + arr[i];
            int v2 = arr[i];

            nodelete = max(v1, v2);

            int v3;

            if(onedelete == INT_MAX)
            {
                v3 = arr[i];

            }
            else{

                v3 = prevondelete + arr[i];
            }



            onedelete = max(v3, prevnodelete);


            res = max(res, max(nodelete, onedelete));
        }
        

        return res;
    }
};