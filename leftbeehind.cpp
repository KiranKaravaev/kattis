#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;


int main(){
    int n, m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) {
            break;
        }
        if(n + m == 13) {
            cout << "Never speak again." << endl;
        } else {
            cout << (n > m ? "To the convention." : m > n ? "Left beehind." : "Undecided.") << endl;
        }
    }
    return 0;
}