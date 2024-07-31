class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        for(auto i : s){
            if(i == '('){
                st.push(i);
                if(st.size() > 1) ans+=i;
            }
            else{
                    if(st.size() > 1) ans+=i;
                    st.pop();
                }
            
        }
        return ans;
    }
};
