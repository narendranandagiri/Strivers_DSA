class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> a;int c=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=c){
              a.push_back(nums[i]); c=nums[i];
              } else c=-1;
        }
        //for( auto i:a) cout<<a[i]<<" "; cout<<endl;
        return a.size();

    }
};
