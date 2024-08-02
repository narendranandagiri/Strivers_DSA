class Solution {
public:
    bool search(vector<int>& a, int target) {
        int l=0,mid,n=a.size();
        int h=n-1;
        while(l<=h){
            mid=(l+h)/2;
            if(a[mid]==target) return true;
            if(a[l]==a[mid] && a[mid]==a[h]){
                l++; h--; continue;
            }
            if(a[l]<=a[mid]){
                if( a[l]<=target && target<=a[mid])
                h=mid-1;
                else
                l=mid+1;
            }
            else{
                if(a[mid]<=target && target<=a[h])
                l=mid+1;
                else
                h=mid-1;
            }
        } 
        return false;
    }
};
