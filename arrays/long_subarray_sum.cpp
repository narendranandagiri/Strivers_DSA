//hashing

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low < high){
        int p = partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
        int p = arr[low];
        int i = low;
        int j = high;
        while(i < j){
            while(arr[i] <= p && i<=high-1) i++;
            while(p < arr[j] && j>=low+1) j--;
            if(i < j) swap(arr[i],arr[j]);
        }
        swap(arr[low],arr[j]); return j;
    }
};




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
