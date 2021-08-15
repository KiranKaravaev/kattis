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
    while(cin >> n) {
        int s = 1;
        for(int i = 2; i * i <= n; ++i) {
            if(n % i == 0) {
                s += i;
                if(i != n / i) {
                    s += n / i;
                }
            }
        }
        cout << n << " ";
        if(s == n) {
            cout << "perfect" << endl;
        } else if(abs(n - s) <= 2) {
            cout << "almost perfect" << endl;
        } else {
            cout << "not perfect" << endl;
        }
    }
    return 0;
}