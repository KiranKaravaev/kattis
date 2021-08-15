#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

string buttons[10] = {" ", "#", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

int main() {
    int t;
    scanf("%d\n", &t);
    for(int ind = 1; ind <= t; ++ind) {
        string s;
        getline(cin, s);
        cout << "Case #" << ind << ": ";
        int prev_b = -1;
        for(const auto& c : s) {
            if(c == ' ') {
                if(prev_b == 0) {
                    cout << " ";
                }
                cout << 0;
                prev_b = 0;
            } else {
                for (int i = 0; i < 10; ++i) {
                    for (int j = 0; j < buttons[i].size(); ++j) {
                        if (buttons[i][j] == char(c - 32)) {
                            if (prev_b == i) {
                                cout << " ";
                            }
                            for (int k = 0; k <= j; ++k) {
                                cout << i;
                            }
                            prev_b = i;
                        }
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}