#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, pair <string, int> > m;
    while(n--) {
        string name;
        cin >> name;
        int c;
        cin >> c;
        string date;
        cin >> date;
        if(m[date].second <= c) {
            m[date] = {name, c};
        }
    }
    cout << m.size() << endl;
    vector <string> names;
    for(const auto& it : m) {
        names.push_back(it.second.first);
    }
    sort(names.begin(), names.end());
    for(const auto& name : names) {
        cout << name << endl;
    }
    return 0;
}