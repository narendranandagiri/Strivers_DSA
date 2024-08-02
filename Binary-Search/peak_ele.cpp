class Solution {
public:
    int findPeakElement(vector<int>& ar){
        int n=ar.size(),l=1,m;
        int h=n-2;
        if(n==1) return 0;
        if(ar[0]>ar[1]) return 0;
        if(ar[n-1]>ar[n-2]) return n-1;
        while(l<=h){
        int m=(l+h)/2;
        if(ar[m-1]<ar[m] && ar[m]>ar[m+1]) return m;
        if(ar[m-1]<ar[m]) l=m+1;
        else h=m-1;    
        } return -1;
    }
};
