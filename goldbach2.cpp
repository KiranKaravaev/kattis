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

const int N = 33000;

bool ne_prost[N];

int main() {
    vector <int> prost;
    ne_prost[0] = true;
    ne_prost[1] = true;
    for(int i = 2; i < N; ++i) {
        if(!ne_prost[i]) {
            prost.push_back(i);
            for(int j = i * i; j < N; j += i) {
                ne_prost[j] = true;
            }
        }
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int k = 0;
        set < pair <int, int> > s;
        for(int i = 0; i < n; ++i) {
            if(prost[i] < n) {
                if(!ne_prost[n - prost[i]]) {
                    if(prost[i] <= n - prost[i]) {
                        ++k;
                        s.insert({prost[i], n - prost[i]});
                    } else {
                        break;
                    }
                }
            } else {
                break;
            }
        }
        cout << n << " has " << k << " representation(s)" << endl;
        for(const auto& it : s) {
            cout << it.first << "+" << it.second << endl;
        }
        cout << endl;
    }

    return 0;
}