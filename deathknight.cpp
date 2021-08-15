#include <iostream>

using namespace std;

int main() {
    int n, k = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        for(int j = 0; j < str.size(); ++j) {
            if (str[j] == 'C' && str[j + 1] == 'D') {
                ++k;
                break;
            }
        }
    }
    cout << n - k << endl;
    return 0;
}