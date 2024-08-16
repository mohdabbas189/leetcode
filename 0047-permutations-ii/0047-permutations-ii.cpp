
class Solution {
    private:
        set<vector<int>>s;
        void solve(vector<int>&nums,vector<vector<int>>&ans,int index){
            if(index >=nums.size() && s.find(nums)==s.end()){
                ans.push_back(nums);
                s.insert(nums);
                return;
            }
            
            for(int j=index;j<nums.size();j++){
                swap(nums[index],nums[j]);
                solve(nums,ans,index+1);
                swap(nums[index],nums[j]);
            }
        }
 
 
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int index=0;
        solve(nums,ans,index);
        return ans;
        
    }
};