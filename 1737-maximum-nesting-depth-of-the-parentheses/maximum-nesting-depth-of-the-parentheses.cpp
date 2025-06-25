class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=0;
        for(auto c : s){
            if(c=='('){
                count++;
            }
            maxi=max(count,maxi);
            if(c==')'){
                count--;
            }
            
        }
        return maxi;
    }
};