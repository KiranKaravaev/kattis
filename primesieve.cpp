#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

const int N = 1e7 + 1;

bool ne_prost[N];

bool is_prime(int n) {
    for(int i = 2; 1L * i * i <= n; ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, q;
    cin >> n >> q;
    int k = 0;
    ne_prost[1] = true;
    for(int i = 2; i <= min(n, (int)1e7); ++i) {
        if(!ne_prost[i]) {
            ++k;
            if(1LL * i * i <= min(n, (int)1e7)) {
                for(int j = i * i; j <= min(n, (int)1e7); j += i) {
                    ne_prost[j] = true;
                }
            }
        }
    }
    // cout << sizeof(ne_prost) / 1024 << endl;
    cout << k << endl;
    while(q--) {
        int x;
        cin >> x;
        if(x <= 1e7) {
            cout << !ne_prost[x] << endl;
        } else {
            cout << is_prime(x) << endl;
        }
    }
    return 0;
}