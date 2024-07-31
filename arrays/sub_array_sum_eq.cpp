class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0, preSum = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            preSum+=nums[i];
            int sub = preSum - k;
            if(mp.find(sub) != mp.end())
            {cnt += mp[sub];}
            mp[preSum]++;
        }
        return cnt;
    }
};
