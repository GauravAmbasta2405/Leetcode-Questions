class Solution {
public:
    bool isPossible(vector<int>& target) {
        // int n = target.size();
        priority_queue<int> pq;
        unsigned int sum = 0;
        for(auto ele: target){
            sum+=ele;
            pq.push(ele);
        }
        while(pq.top()!=1){
            int x = pq.top();
            pq.pop();
            sum-=x;
            if(x<= sum || sum < 1) return false;
            x%= sum;
            sum+=x;
            pq.push(x?x: sum);
        }
        return true;
    }
};