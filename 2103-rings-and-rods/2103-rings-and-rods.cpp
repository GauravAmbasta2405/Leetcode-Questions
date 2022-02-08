class Solution {
public:
    int countPoints(string rings) {
        set<int> r,g,b;
        int n= rings.size();
        for(int i=0;i<n;i+=2)
        {
            int rods= rings[i+1]- '0';
            if(rings[i]=='G')
            {
                g.insert(rods);
                
            }
            else if(rings[i]=='B')
            {
                b.insert(rods);
                
            }
            else
            {
                r.insert(rods);
            }
        }
        int cnt=0;
        for(int i=0;i<10;i++)
        {
            if(r.count(i) && b.count(i) && g.count(i))
            {
                cnt+=1;
            }
        }
        return cnt;
        
    }
};