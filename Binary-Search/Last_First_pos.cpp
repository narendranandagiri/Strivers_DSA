class Solution {
    public:
    int floorr(vector<int>& a, int tar){
        int mid,l=0,n=a.size(),ans;
        int h=n-1;
        while(l<=h){
            mid=(l+h)/2;
            if(a[mid]==tar){
               ans=mid; h=mid-1;
            }
            else if(a[mid]>tar) h=mid-1;
            else l=mid+1;
        } if(ans>n-1 || ans<0) return -1; else return ans;
    }
public:
    int ceill(vector<int>& a, int tar){
        int mid,l=0,n=a.size(),ans;
        int h=n-1;
        while(l<=h){
            mid=(l+h)/2;
            if(a[mid]==tar){
                ans=mid; l=mid+1;
            }
            else if(tar<a[mid]) h=mid-1;
            else l=mid+1;
        } if(ans>n-1 ||  ans<0) return -1; else return ans;
    }    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a1;
        a1.push_back(floorr(nums,target));
        if(a1[0]==-1) return {-1,-1};
        a1.push_back(ceill(nums,target));
        return a1;
    }
};
