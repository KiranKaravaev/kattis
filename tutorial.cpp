#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

int main() {
    double m, n, t;
    cin >> m >> n >> t;
    if(t == 7) {
        cout << (n <= m ? "AC" : "TLE") << endl;
    } else if(t == 6) {
        cout << (n * log2(n) <= m ? "AC" : "TLE") << endl;
    } else if(t == 5) {
        long long st = 1;
        int k = 2;
        while(k--) {
            st *= n;
            if(st > m) {
                cout << "TLE" << endl;
                return 0;
            }
        }
        cout << "AC" << endl;
    } else if(t == 4) {
        long long st = 1;
        int k = 3;
        while(k--) {
            st *= n;
            if(st > m) {
                cout << "TLE" << endl;
                return 0;
            }
        }
        cout << "AC" << endl;
    }  else if(t == 3) {
        long long st = 1;
        int k = 4;
        while(k--) {
            st *= n;
            if(st > m) {
                cout << "TLE" << endl;
                return 0;
            }
        }
        cout << "AC" << endl;
    }  else if(t == 2) {
        long long st = 1;
        int k = n;
        while(k--) {
            st *= 2;
            if(st > m) {
                cout << "TLE" << endl;
                return 0;
            }
        }
        cout << "AC" << endl;
    } else {
        long long st = 1;
        for(int i = 1; i <= n; ++i) {
            st *= i;
            if(st > m) {
                cout << "TLE" << endl;
                return 0;
            }
        }
        cout << "AC" << endl;
    }
    return 0;
}