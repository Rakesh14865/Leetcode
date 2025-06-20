class Solution {
public:
    int maxDistance(string s, int k) {
        int maxDist = 0;

        for (char xDir : {'E', 'W'}) {
            for (char yDir : {'N', 'S'}) {
                int flipsLeft = k;
                int x = 0, y = 0;

                for (char move : s) {
                    char current = move;

                    if (current == xDir && flipsLeft > 0) {
                        current = (current == 'W') ? 'E' : 'W';
                        flipsLeft--;
                    }
                    else if (current == yDir && flipsLeft > 0) {
                        current = (current == 'S') ? 'N' : 'S';
                        flipsLeft--;
                    }

                    if (current == 'E') x++;
                    else if (current == 'W') x--;
                    else if (current == 'N') y++;
                    else if (current == 'S') y--;

                    int dist = abs(x) + abs(y);
                    maxDist = max(maxDist, dist);
                }
            }
        }

        return maxDist;
    }
};
