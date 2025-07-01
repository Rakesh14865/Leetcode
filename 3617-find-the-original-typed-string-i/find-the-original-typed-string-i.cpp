class Solution {
public:
    int possibleStringCount(string word) {
        string str={word};
        int count = 1;
        int n = word.size();
        for(int i=1;i<n;i++){
            if(word[i]==word[i-1]){
                count++;
            }
        }

        return count; 
    }
};