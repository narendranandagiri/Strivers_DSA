class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(),l=0;
        int h=n-1,min=INT_MAX,m;
        while(l<=h){
            m=(l+h)/2;
            if(nums[l]<=nums[m]){
                if(nums[l]<min)
              min=nums[l];
              l=m+1;
            }
            else{
                if(nums[m]<min)
                min=nums[m];
                h=m-1;
            }
        }
        return min;
        
    }
};
