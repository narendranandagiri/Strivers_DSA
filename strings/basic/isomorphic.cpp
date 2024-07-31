class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> tp;
        for(int i = 0; i < s.size(); i++){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = t[i];
                tp[t[i]] = s[i];
            }
        }
            for(int i = 0; i < t.size(); i++) if(mp[s[i]] != t[i] || tp[t[i]] != s[i]) return false;
        return true;
    }
};
