class Solution {
public:
    int reverse(int x) {
        int r=0;
        while(x){
          if(r>214748364 || r<-214748364) return 0;
          r*=10; r+=x%10; x/=10; 
        }
        return r;
    }
};
