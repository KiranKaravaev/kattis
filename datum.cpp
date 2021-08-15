#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day_on_week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main() {
    int d, m;
    cin >> d >> m;
    int cur_d = 1, cur_m = 1, ind = 3;
    while(cur_d != d || cur_m != m) {
        ++cur_d;
        if(cur_d > days_in_month[cur_m - 1]) {
            cur_d = 1;
            ++cur_m;
        }
        ++ind;
        if(ind == 7) {
            ind = 0;
        }
    }
    cout << day_on_week[ind] << endl;
    return 0;
}