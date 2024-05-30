class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,k=1,zerocount=0,count=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[i]==0){
                    zerocount--;
                }
                i++;
            }
            while(count<j-i+1){
                count=j-i+1;
            }
        }
        return count-1;
    }
};