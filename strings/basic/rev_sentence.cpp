class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(!temp.empty()){
                    st.push(temp);
                    temp = "";
                }
            }
            else{
                temp+=s[i];
            }
        }
        if(!temp.empty()) st.push(temp);
        string ans;
        int n = st.size();
        for(int i = 0; i < n; i++){ ans+=st.top(); st.pop(); if(i != n-1) ans+=' ';}
        return ans;
    }
};
