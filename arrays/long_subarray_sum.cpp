//hashing




//for negative:
class Solution{
    public:
    int lenOfLongSubarr(int ar[],  int n, int k) 
    { 
        int ml = 0;
        int sum = ar[0];
        int right = 0, left = 0;
        while(right < n){
            while(left <= right && sum > k){
                sum-=ar[left]; left++;
            }
            if(sum == k) ml = max(ml, right - left + 1);
            right++;
            if(right < n) sum+=ar[right];
        }
        return ml;
    } 

};
