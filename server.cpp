#include <iostream>
using namespace std;

int kol[10];

int main() {
    int n, t;
    cin >> n >> t;
    int k = 0, time = 0;
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        time += a;
        if(time <= t) {
            ++k;
        }
    }
    cout << k << endl;
    return 0;
}