class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        if(n==1 || n==0) return false;
        for(int j =1; j<n;j++){
            if(nums[i]==nums[j]){
                return true;
            }
            i++;
        }
        return false;
    }
};