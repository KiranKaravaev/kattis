#include <iostream>

using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;
    for(int i = 1; i <= n; ++i) {
        bool div = false;
        if(i % x == 0) {
            div = true;
            cout << "Fizz";
        }
        if(i % y == 0) {
            div = true;
            cout << "Buzz";
        }
        if(!div) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
