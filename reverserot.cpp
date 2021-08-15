#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
    int k;
    string s;
    while(cin >> k) {
        if(k == 0) {
            break;
        }
        cin >> s;
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.size(); ++i) {
            int ind =  (alf.find(s[i]) + k) % 28;
            cout << alf[ind];
        }
        cout << endl;
    }
    return 0;
}