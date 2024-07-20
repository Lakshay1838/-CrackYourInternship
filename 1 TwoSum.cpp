class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int,int> mp;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = i;
        }

        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(mp.find(diff) != mp.end() && mp[diff] != i){
                ans.push_back(i);
                ans.push_back(mp[diff]);
                break;
            }
        }

        return ans;
    }
};