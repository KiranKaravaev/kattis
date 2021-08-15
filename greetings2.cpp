#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    cout << 'h';
    for(int i = 0; i < (s.size() - 2) * 2; ++i) {
        cout << "e";
    }
    cout << 'y' << endl;
    return 0;
}
