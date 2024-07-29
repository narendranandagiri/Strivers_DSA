class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return nums[0];
        int x_or = nums[0];
        for(int i = 1; i < n; i++)
            x_or^=nums[i];
        return x_or;    
    }
};
