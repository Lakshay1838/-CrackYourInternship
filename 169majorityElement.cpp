class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count= 1;
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                count++;
            }
            else{
                if(count >n/2)  return nums[i-1];
                count=1;
            }
        }
        if(count >= n/2){
            return nums[n-1];
        }
        return -1;
    }
};