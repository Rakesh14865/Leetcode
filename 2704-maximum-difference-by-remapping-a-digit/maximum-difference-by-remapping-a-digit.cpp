
class Solution {
public:
    int minMaxDifference(int num) {
        string org = to_string(num);
        string max_org = org;
        char to_replace_max = 0;
        for (char c : org) {
            if (c != '9') {
                to_replace_max = c;
                break;
            }
        }
        if (to_replace_max) {
            for (char &x : max_org) {
                if (x == to_replace_max) x = '9';
            }
        }

        
        string min_org = org;
        char to_replace_min = org[0];
        for (char &x : min_org) {
            if (x == to_replace_min) x = '0';
        }

        int maxi = stoi(max_org);
        int mini = stoi(min_org);

        return maxi - mini;
    }
};
