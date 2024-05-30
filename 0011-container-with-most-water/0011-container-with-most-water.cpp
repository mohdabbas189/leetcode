
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxi=0;
        while(left<right){
            int width = right-left;
            int h = min(height[left],height[right]);
            int area = width*h;
            maxi=max(maxi,area);
            if(height[right]>height[left]){
                left++;
            }
            else if(height[right]<height[left]){
                right--;
            }
        else{
            left++;
            right--;
            }
        }
        return maxi;
    }
};

