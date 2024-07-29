class Solution {
public:
    void rev(vector<int>& nums, int start, int end){
        while(start < end){
            int temp = nums[end];
            nums[end] = nums[start];
            nums[start] = temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        rev(nums, 0, n-1);
        rev(nums, 0, k-1);
        rev(nums, k, n-1);
    }
};
