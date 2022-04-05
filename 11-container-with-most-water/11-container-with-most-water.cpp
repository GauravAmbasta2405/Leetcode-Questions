class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int max_area=INT_MIN;
        while(l<r){
            int width=r-l;
            int len= min(height[l],height[r]);
            max_area=max(max_area, len*width);
            
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return max_area;
    }
};