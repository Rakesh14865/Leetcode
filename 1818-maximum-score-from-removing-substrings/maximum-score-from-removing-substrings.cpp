class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int topScore,btmScore;
        string top,btm;
        int i=0;
        if(x>y){
            top="ab";
            btm="ba";
            topScore=x;
            btmScore=y;
        }
        else{
            top="ba";
            btm="ab";
            topScore=y;
            btmScore=x;
        }
        string str1="";
        int res=0;
        for(i=0;i<s.length();i++){
            if(!str1.empty() && s[i]==top[1] && str1.back()==top[0]){
                res=res+topScore;
                str1.pop_back();
            }
            else{
                str1.push_back(s[i]);
            }
        }
        string str2="";
        for(i=0;i<str1.length();i++){
            if(!str2.empty() && str1[i]==btm[1] && str2.back()==btm[0]){
                res=res+btmScore;
                str2.pop_back();
            }
            else{
                str2.push_back(str1[i]);
            }
        }
        return res;
    }
};