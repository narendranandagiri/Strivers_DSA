class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {    
         vector<int> temp;
         int start = l;
         int end = m+1;
         while(start <= m && end <= r){
             if(arr[start] <= arr[end]){
                 temp.push_back(arr[start]);
                 start++;
             }
             else{
                 temp.push_back(arr[end]);
                 end++;
             }
         }
         while(start <= m){
             temp.push_back(arr[start]); start++;
         }
         while(end <= r){
             temp.push_back(arr[end]); end++;
         }
         for(int i = l; i <= r; i++) arr[i] = temp[i-l];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l >= r) return;
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
};
