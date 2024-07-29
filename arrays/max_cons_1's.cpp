class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0;
        int max = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                c++;
                if(i == n-1 && c > max) max = c; 
            }
            else{
                if(max < c) max = c;
                c = 0;
            }
        }
        return max;
    }
};
