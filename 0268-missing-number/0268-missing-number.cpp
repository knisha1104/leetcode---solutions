class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int>mp;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != i){
                return i;
            }
        }
        return nums.size();
        
    }
};