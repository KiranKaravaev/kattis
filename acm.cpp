#include <iostream>
#include <map>
using namespace std;

int main() {
    int c;
    map <char, pair<int, int> > m;
    int resk = 0, ress = 0;
    while(cin >> c) {
        if(c == -1) {
            break;
        }
        char id;
        cin >> id;
        m[id].first++;
        m[id].second = c;
        string status;
        cin >> status;
        if(status == "right") {
            resk++;
            ress += (m[id].first - 1) * 20 + m[id].second;
        }
    }
    cout << resk << " " << ress << endl;
    return 0;
}