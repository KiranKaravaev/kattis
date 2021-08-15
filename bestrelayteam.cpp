#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

struct Runner {
    string name;
    double a, b;
    friend istream&operator>>(istream& in, Runner& r) {
        in >> r.name >> r.a >> r.b;
        return in;
    }
    friend ostream&operator<<(ostream& out, const Runner& r) {
        out << r.name << " " << r.a << " " << r.b;
        return out;
    }
    bool operator<(const Runner& r) {
        return b < r.b || (b == r.b && a < r.a);
    }
};

int main() {
    int n;
    cin >> n;
    vector <Runner> runners(n);
    for(int i = 0; i < n; ++i) {
        cin >> runners[i];
    }
    sort(runners.begin(), runners.end());
    double best_time = INT_MAX;
    vector <string> best_runners;
    for(int i = 0; i < n; ++i) {
        double time = runners[i].a;
        vector <string> cur_runners;
        cur_runners.push_back(runners[i].name);
        if(i < 3) {
            for(int j = 0; j < 4; ++j) {
                if(i != j) {
                    time += runners[j].b;
                    cur_runners.push_back(runners[j].name);
                }
            }
        } else {
            for(int j = 0; j < 3; ++j) {
                time += runners[j].b;
                cur_runners.push_back(runners[j].name);
            }
        }
        if(time < best_time) {
            best_time = time;
            best_runners = cur_runners;
        }
    }
    printf("%.9lf\n", best_time);
    for(const auto& runner : best_runners) {
        cout << runner << endl;
    }
    return 0;
}