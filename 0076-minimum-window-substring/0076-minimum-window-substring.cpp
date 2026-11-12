class Solution {
    private:

    bool sahi(vector<int>& have, vector<int>& need)
    {

        for(int i = 0; i < have.size(); i++)
        {

             if(have[i] < need[i])
             {
                return false;
             }
        }

        return true;
    }
public:
    string minWindow(string s, string t) {

        int m = s.size();

        int n = t.size();

        if(m < n)
        {
            return "";
        }

        int low = 0;
        int high = 0;

        int start;
        int maxlen = INT_MAX;

        vector<int> have(256, 0);
        vector<int> need(256, 0);

        for(int i = 0; i < n; i++)
        {
            need[t[i]]++;

        }




        while(high < m)
        {

            have[s[high]]++;


            while(sahi(have, need))
            {

                int len = high - low + 1;

                if(maxlen > len)
                {

                    maxlen = len;
                    start = low;
                }


                have[s[low]]--;

                low++;
            }

            high++;


        }


        return maxlen == INT_MAX ? "" : s.substr(start, maxlen);




        
    }
};