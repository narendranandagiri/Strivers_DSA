class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int maxi = 1;
        for(int i = 0; i < nums.size(); i++) s.insert(nums[i]);
        for(auto i : s){
            if(s.find(i - 1) == s.end()){
                int c = 1;
                int x = i;
                while(s.find(x+1) != s.end()){
                    x++; c++;
                }
                maxi = max(maxi, c);
            }
        }
        return maxi;
    }
};
