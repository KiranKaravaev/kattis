#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

const double pi = 3.14159265;

int main() {
    int a, b;
    while(cin >> a >> b) {
        if(a == 0) {
            break;
        }
        cout << a / b << " " << a % b << " / " << b << endl;
    }
    return 0;
}