class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0, ele;
        for(int i = 0; i < nums.size(); i++){
            if(c == 0){ ele = nums[i]; c++; }
            else if(nums[i] == ele) c++;
            else c--;
        }
        int cnt = 0;
        for(int i : nums) if(i == ele) cnt++;
        if(cnt > nums.size()/2) return ele;
        return -1;
    }
};
