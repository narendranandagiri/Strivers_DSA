class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size(),l=1,m,s=-1;
        int h=n-2,i=0;
        if(arr[i]!=arr[i+1])
           return arr[i];
        if(arr[n-1]==arr[n-2])
           return arr[n-2];   
        while(l<=h){
            m=(l+h)/2;
            if(arr[m]!=arr[m-1] && arr[m]==arr[m+1]){
                s=arr[m-1];
            }
            else if(arr[m]!=arr[m+1] && arr[m]==arr[m-1]){
                s=arr[m+1];
            }
        }
    }
};
