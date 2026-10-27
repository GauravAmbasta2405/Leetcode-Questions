class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int n = fruits.size();
        int low = 0;
        int high = 0;
        int maxlen = INT_MIN;

        unordered_map<int, int> mpp;

        while(high < n)
        {
            mpp[fruits[high]]++;

            while(mpp.size() > 2)
            {

                mpp[fruits[low]]--;

                if(mpp[fruits[low]] == 0)
                {
                    mpp.erase(fruits[low]);
                }

                low++;
            }


            maxlen = max(maxlen, high - low + 1);

            high++;
        }


        return maxlen == INT_MIN ? -1 : maxlen;
        
    }
};