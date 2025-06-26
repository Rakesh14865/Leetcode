class Solution {
public:
    int myAtoi(string s) {
        if(s.size()==0) return 0;
        int n=s.size();
        long res=0;
        int i=0;
        while(i<n && s[i]==' '){
            i++;
        }
        int sign=1;
        if(s[i]=='-'||s[i]=='+'){
            if(s[i]=='-') sign=-1;
            i++;
        }
        while(i<n && isdigit(s[i])){
            res=res*10+ (s[i]-'0');
            if(sign*res>=INT_MAX) return INT_MAX;
            if(sign*res<=INT_MIN) return INT_MIN;
            i++;
        }
        return sign*res;
    }
};