    long long gcd(long long a, long long b){
        while(a > 0 && b > 0){
            if(a > b) a = a % b;
            else b = b % a;
        }
        if(a == 0) return b; return a;
    }
    
    long long lcm(long long a,long long b){
        return (a/gcd(a,b)) * b;
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> v;
        v.push_back(lcm(A,B));
        v.push_back(gcd(A,B));
        return v;
    }
