class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;

        bool v = false, con = false;

        for (char ch : word) {
            if (!isalnum(ch)) return false;

            char lower = tolower(ch);
            if (isalpha(ch)) {
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                    v = true;
                } 
                else {
                    con = true;
                }
            }
        }

        return v && con;
    }
};
