#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int ost = m % n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m / n; ++j) {
            cout << '*';
        }
        if(ost) {
            --ost;
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}