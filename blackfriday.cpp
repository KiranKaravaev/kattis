#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    map <int, int> cnt;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        ++cnt[a[i]];
    }
    int mx = INT_MIN, ind = -1;
    for(int i = 0; i < n; ++i) {
        if(cnt[a[i]] == 1) {
            if(a[i] > mx) {
                mx = a[i];
                ind = i + 1;
            }
        }
    }
    if(ind == -1) {
        cout << "none" << endl;
    } else {
        cout << ind << endl;
    }
    return 0;
}