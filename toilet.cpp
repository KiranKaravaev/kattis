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

int k[3];
char Prev[3];

int main() {
    string s;
    cin >> s;
    if(s[0] == 'D') {
        if(s[1] == 'U') {
            ++k[0];
            k[1] += 2;
            ++k[2];
        } else {
            ++k[0];
        }
    } else {
        if(s[1] == 'D') {
            k[0] += 2;
            ++k[1];
            ++k[2];
        } else {
            ++k[1];
        }
    }
    for(int i = 2; s[i]; ++i) {
        if(s[i] == 'D') {
            k[0] += 2;
            if(s[i - 1] == 'U') {
                ++k[2];
            }
        } else {
            k[1] += 2;
            if(s[i - 1] == 'D') {
                ++k[2];
            }
        }
    }
    cout << k[0] << endl << k[1] << endl << k[2] << endl;
    return 0;
}