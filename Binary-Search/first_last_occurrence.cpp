int count(int arr[], int n, int k) {
	    
	    // first 
	    int low = 0, high = n - 1;
        int first = -1;
	    while (low <= high) {
            int mid = (low + high) / 2;
            // maybe an answer
            if (arr[mid] == k) {
                first = mid;
                //look for smaller index on the left
                high = mid - 1;
            }
            else if (arr[mid] < k) {
                low = mid + 1; // look on the right
            }
            else {
                high = mid - 1; // look on the left
            }
        }
        
        
        // last 
        low = 0; high = n - 1;
        int last = -1;
    
        while (low <= high) {
            int mid = (low + high) / 2;
            // maybe an answer
            if (arr[mid] == k) {
                last = mid;
                //look for larger index on the right
                low = mid + 1;
            }
            else if (arr[mid] < k) {
                low = mid + 1; // look on the right
            }
            else {
                high = mid - 1; // look on the left
            }
        }
        pair<int, int> ans = {first, last};
        if (ans.first == -1) return 0;
        return (ans.second - ans.first + 1);
	}
