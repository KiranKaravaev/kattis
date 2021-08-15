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
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    map <int, int> cnt1;
    int k = 0;
    for(int  i = a1; i <= b1; ++i) {
        for(int j = a2; j <= b2; ++j) {
            ++cnt1[i + j];
            ++k;
        }
    }
    cin >> a1 >> b1 >> a2 >> b2;
    int win1 = 0, win2 = 0;
    for(int  i = a1; i <= b1; ++i) {
        for(int j = a2; j <= b2; ++j) {
            int k1 = 0, k2 = 0;
            for(const auto& it : cnt1) {
                if(it.first < i + j) {
                    k1 += it.second;
                } el    se if(it.first > i + j) {
                    k2 += it.second;
                }
            }
            win1 += k2;
            win2 += k1;
        }
    }
    cout << (win1 > win2 ? "Gunnar" : win1 < win2 ? "Emma" : "Tie") << endl;
    return 0;
}