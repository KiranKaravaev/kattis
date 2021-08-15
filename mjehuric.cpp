#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

void print(int* a) {
    for(int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool sorted(int* a) {
    for(int i = 1; i < 5; ++i) {
        if(a[i] < a[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    while(1) {
        while(a[0] > a[1]) {
            swap(a[0], a[1]);
            print(a);
        }
        while(a[1] > a[2]) {
            swap(a[1], a[2]);
            print(a);
        }
        while(a[2] > a[3]) {
            swap(a[2], a[3]);
            print(a);
        }
        while(a[3] > a[4]) {
            swap(a[3], a[4]);
            print(a);
        }
        if(sorted(a)) {
            break;
        }
    }
    return 0;
}