class Solution {
public:
    int maxProduct(vector<int>& nums) {
       double currprod=1;
       double maxprod=INT_MIN;
        for(double i=0;i<nums.size();i++){
            currprod*=nums[i];
            maxprod=max(maxprod,currprod);
            if(currprod==0){
                currprod=1;
            }
        }
        currprod=1;
        for(double i=nums.size()-1;i>=0;i--){
            currprod*=nums[i];
            maxprod=max(maxprod,currprod);
            if(currprod==0){
                currprod=1;
            }
        }
        return maxprod;
    }
};