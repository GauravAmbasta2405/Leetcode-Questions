class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n= plants.size();
        int l=0;
        int r=n-1;
        int alicecap = capacityA;
        int bobcap = capacityB;
        int cnt=0;
        while(l<r){
            if(plants[l] > alicecap){
                cnt+=1;
                alicecap = capacityA;
            }
            if(plants[r] > bobcap){
                cnt+=1;
                bobcap = capacityB;
            }
            alicecap -= plants[l++];
            bobcap-=plants[r--];
            
        }
        if(l==r){
            if(max(alicecap, bobcap) < plants[l])cnt+=1;

        }
        return cnt;
        
    }
};