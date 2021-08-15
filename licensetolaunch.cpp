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
    int n;
    cin >> n;
    int mn = INT_MAX, ind = -1;
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if(a < mn) {
            mn = a;
            ind = i;

        }
    }
    cout << ind << endl;
    return 0;
}