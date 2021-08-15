#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int l = 1, r = 1000;
    while(r - l > 1) {
        int m = l + (r - l) / 2;
        printf("%d\n", m);
        fflush(stdout);
        string res;
        cin >> res;
        if(res == "higher") {
            l = m + 1;
        } else if(res == "lower"){
            r = m - 1;
        } else {
            return 0;
        }
    }
    printf("%d\n", l);
    fflush(stdout);
    return 0;
}