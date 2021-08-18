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

string add(string s1, string s2, string s3) {
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    reverse(s3.begin(), s3.end());
    return s1 + s2 + s3;
}

int main() {
    string str;
    cin >> str;
    string res;
    string f;
    for(int i = 0; i < str.size() - 2; ++i) {
        f += str[i];
        string s;
        for(int j = i + 1; j < str.size() - 1; ++j) {
            s += str[j];
            string t;
            for(int k = j + 1; k < str.size(); ++k) {
                t += str[k];
            }
            string temp = add(f, s, t);
            if(res.empty()) {
                res = temp;
            } else {
                res = min(res, temp);
            }
        }
    }
    cout << res << endl;
    return 0;
}