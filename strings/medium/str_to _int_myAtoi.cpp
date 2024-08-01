class Solution {
public:
    int myAtoi(string s) {
        int siz=s.size();
        double number=0;
        int i=0;
        while(s[i]==' ') i++;
        bool p = s[i]=='+';
        bool n = s[i]=='-';
        if(p==true) i++; if(n==true) i++;
        while(i<siz && s[i] >='0' && s[i]<='9'){ number=number*10+(s[i]-'0'); i++;}
        if(n) number*=-1;
        if(number>INT_MAX) number=INT_MAX;
        if(number<INT_MIN) number=INT_MIN;
        return number;
    }
};
