#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int bin_to_dec(string bin) {
    int res = 0;
    for(int i = 0; i < bin.size(); ++i) {
        res += (bin[i] - '0') * pow(2, bin.size() - i - 1);
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    string bin;
    if(s.size() % 3 != 0) {
        for (int i = 0; i < s.size() % 3; ++i) {
            bin += s[i];
        }
        cout << bin_to_dec(bin);
        bin.clear();
    }
    for(int i = s.size() % 3; i < s.size(); i += 3) {
        for(int j = i; j < i + 3; ++j) {
            bin += s[j];
        }
        cout << bin_to_dec(bin);
        bin.clear();
    }
    cout << endl;
    return 0;
}