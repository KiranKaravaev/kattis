#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int bin_to_dec(string bin) {
    int res = 0;
    for(int i = 0; i < bin.size(); ++i) {
        res += (bin[i] - '0') * pow(2, bin.size() - i - 1);
    }
    return res;
}

int main() {
    int a, b, c, d;
    while(cin >> a >> b >> c >> d) {
        if(a == 0) {
            break;
        }
        if(a < b) {
            swap(a, b);
        }
        int score1 = a * 10 + b;
        if(c < d) {
            swap(c, d);
        }
        int score2 = c * 10 + d;
        if(score1 == score2) {
            cout << "Tie." << endl;
        } else {
            cout << "Player ";
            if(score1 == 21) {
                cout << 1;
            } else if(score2 == 21) {
                cout << 2;
            } else {
                if(a == b) {
                    if(c == d) {
                        cout << (score1 > score2 ? 1 : 2);
                    } else {
                        cout << 1;
                    }
                } else {
                    if(c == d) {
                        cout << 2;
                    } else {
                        cout << (score1 > score2 ? 1 : 2);
                    }
                }
            }
            cout << " wins." << endl;
        }

    }

    return 0;
}