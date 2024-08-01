class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0, ans = 0;
        stack<char> st;
        for(auto i : s){
            if(i == '('){
                st.push(i);
                ans++;
            }
            else if(i == ')' && st.top() == '('){
                maxi = max(ans, maxi);
                st.pop();
                ans--;
            }
        }
        return maxi;
    }
};
