#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

struct Person {
    string name, status, t;
    friend istream&operator>>(istream& in, Person& p) {
        in >> p.name >> p.status >> p.t;
        return in;
    }
    friend ostream&operator<<(ostream& out, Person& p) {
        p.name.erase(p.name.size() - 1);
        out << p.name;
        return out;
    }
    bool operator<(Person& p) {
        string t1, t2;
        deque <string> v1, v2;
        for(const auto& c : status) {
            if(c == '-') {
                v1.push_back(t1);
                t1.clear();
            } else {
                t1 += c;
            }
        }
        v1.push_back(t1);
        for(const auto& c : p.status) {
            if(c == '-') {
                v2.push_back(t2);
                t2.clear();
            } else {
                t2 += c;
            }
        }
        v2.push_back(t2);
        while(v1.size() < v2.size()) {
            v1.push_front("middle");
        }
        while(v2.size() < v1.size()) {
            v2.push_front("middle");
        }
        for(int i = v1.size() - 1; i >= 0; --i) {
            if(v1[i] == "lower") {
                if(v2[i] != "lower") {
                    return false;
                }
            } else if(v1[i] == "middle") {
                if(v2[i] == "lower") {
                    return true;
                }
                if(v2[i] == "upper") {
                    return false;
                }
            } else {
                if(v2[i] != "upper") {
                    return true;
                }
            }
        }
        return name < p.name;
    }
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <Person> v(n);
        for(int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; ++i) {
            cout << v[i] << endl;
        }
        cout << "==============================" << endl;
    }
    return 0;
}