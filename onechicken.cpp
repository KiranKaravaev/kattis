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
    int n, m;
    cin >> n >> m;
    if(n > m) {
        if(n - m > 1) {
            cout << "Dr. Chaz needs " << n - m << " more pieces of chicken!" << endl;
        } else {
            cout << "Dr. Chaz needs " << n - m << " more piece of chicken!" << endl;
        }
    } else {
        if(n - m > 1) {
            cout << "Dr. Chaz will have " << m - n << " pieces of chicken left over!" << endl;
        } else {
            cout << "Dr. Chaz will have " << m - n << " piece of chicken left over!" << endl;
        }
    }
    return 0;
}