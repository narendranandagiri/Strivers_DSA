class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int zero = -1;
        for(zero = 0; zero < n; zero++){
            if(nums[zero] == 0) break;
        }
        if(zero != n-1){
            for(int i = zero+1; i < n; i++){
                if(nums[i] != 0) {swap(nums[zero],nums[i]); zero++;}
            }
        }
    }
};
