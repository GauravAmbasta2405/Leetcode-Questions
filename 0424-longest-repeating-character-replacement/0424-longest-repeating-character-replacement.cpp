class Solution {
public:
    int characterReplacement(string s, int k) {

        int n = s.size();

        int low = 0;
        int high = 0;
        int maxfreq = 0;
        int maxlen = INT_MIN;

        vector<int> freq(256, 0);

        while(high < n)
        {
            freq[s[high] - 'A']++;

            maxfreq = max(maxfreq, freq[s[high] - 'A']);


            while(((high - low + 1) - maxfreq) > k)
            {
                freq[s[low] - 'A']--;

                low++;
            }

            maxlen = max(maxlen, high - low + 1);

            high++;


        }


        return maxlen == INT_MIN ? -1 : maxlen;
        
    }
};