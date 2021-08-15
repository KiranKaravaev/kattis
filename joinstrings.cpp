#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;


int main() {
    int n;
    cin >> n;
    string a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    map <int, bool> used;
    for(int i = 0; i < n - 1; ++i) {
        int l, r;
        scanf("%d %d", &l, &r);
        if(!used[r]) {
            used[r] = true;
            if(!used[l]) {
                a[l - 1] += a[r - 1];
            } else {
                a[l - 1] = a[r - 1];
                used[l - 1] = false;
            }
        } else {
            a[l - 1] = "";
        }
        if(i == n - 2) {
            for(int j = 0; j < a[l - 1].size(); ++j) {
                printf("%c", a[l - 1][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
/*
........
........
........
........
........
........
........
........
 */