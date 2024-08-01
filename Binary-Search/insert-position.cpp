class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int l=0,n=arr.size(),mid;
        int h=n-1,ans=n;
        while(l<=h){
            mid=(l+h)/2;
            if(arr[mid]<target) l=mid+1;
            else{ h=mid-1; ans=mid; }
        }
        return ans;
    }
};
