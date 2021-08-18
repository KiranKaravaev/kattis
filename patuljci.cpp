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

int main() {
    int a[9], b[9];
    for(int i = 0; i < 9; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + 9);
    do {
        int s = 0;
        for(int i = 0; i < 7; ++i) {
            s += a[i];
        }
        if(s == 100) {
            for(int i = 0; i < 9; ++i) {
                bool in = false;
                for(int j = 0; j < 7; ++j) {
                    if(b[i] == a[j]) {
                        in = true;
                        break;
                    }
                }
                if(in) {
                    cout << b[i] << endl;
                }
            }
            return 0;
        }
    } while(next_permutation(a, a + 9));
    return 0;
}