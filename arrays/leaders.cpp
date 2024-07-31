class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> ans;
        int store = INT_MIN;
        for(int i = n-1; i >= 0; i--){
            if(arr[i] >= store){ store = arr[i]; ans.push_back(store); }
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
