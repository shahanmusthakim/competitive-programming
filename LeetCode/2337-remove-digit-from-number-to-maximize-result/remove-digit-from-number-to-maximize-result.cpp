class Solution {
public:
    string removeDigit(string number, char digit) {
        int pos1 = 0, n = number.size();
        for (int i = 0; i < n; i++) {
            if (number[i] == digit) {
                pos1 = i;

                if (i + 1 < n && number[i] < number[i + 1]) {
                    break;
                }
            }
        }

        string ch = "";

        for (int i = 0; i < n; i++) {
            if (i != pos1) {
                ch += number[i];
            }
        }

        return ch;
    }
};