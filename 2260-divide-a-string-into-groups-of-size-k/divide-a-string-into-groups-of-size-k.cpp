class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>res;
        int n=s.size();
        int i=0;
        while(i<n){
            string str=s.substr(i,k);
            if(str.size()<k){
                str.append(k-str.size(),fill);
                res.push_back(str);
            }
            else{
                res.push_back(str);

            }
            i=i+k;
        }
        return res;
    }
};