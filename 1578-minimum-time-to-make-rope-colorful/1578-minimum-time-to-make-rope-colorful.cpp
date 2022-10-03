#define INF 100000
class Solution 
{
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        int cost=0;
        
        for(int i=0; i<neededTime.size(); i++)
        {
            int curColor=colors[i];
            int curTime = neededTime[i];
            int maxTime=curTime;
            
            cost+=curTime;
            int count=0;
            while(((i+1)<neededTime.size()) && (curColor==colors[i+1]))
            {
                count++;
                i++;
                cost+=neededTime[i];
                maxTime=max(maxTime, neededTime[i]);
            }
            
            if(count==0)
                cost-=curTime;
            else
                cost-=maxTime;
        }
        return cost;
    }
};