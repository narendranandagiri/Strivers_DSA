//recu
class Solution {
  public:
    int recur(vector<int> arr,int low, int high, int k){
        if(low <= high){
            int mid = (low + high) / 2;
            if( arr[mid] == k ) return mid;
            else if(k < arr[mid]) return recur(arr, low, mid - 1, k);
            else return recur(arr, mid + 1, high, k);
        }
        return -1;
    }
    int binarysearch(vector<int> &arr, int k) {
        return recur(arr, 0, arr.size() - 1, k);
    }
};

//iter
class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int low = 0;
        int high = arr.size()-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid] == k) return mid;
            else if(k < arr[mid]) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};
