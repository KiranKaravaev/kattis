#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for(int i = 1; i < n - 1; ++i) {
            int prev = a[0];
            bool sorted = true;
            for(int j = 1; j < n; ++j) {
                if(j != i) {
                    if(a[j] < prev) {
                        sorted = false;
                        break;
                    }
                    prev = a[j];
                }
            }
            if(sorted) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}