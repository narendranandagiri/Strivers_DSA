class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        if(s.size() != goal.size()) return false;
        else{
            string ans = "";
            goal+=goal;
            for(int i = 0; i < goal.size(); i++){
                if(s[0] == goal[i] && goal.substr(i,s.size()) == s) return true; 
            }
        }
        return false;
    }
};
