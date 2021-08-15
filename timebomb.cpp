#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector <string> v;
    v.push_back("**** ** ** ****");

    v.push_back("  *  *  *  *  *");

    v.push_back("***  *****  ***");

    v.push_back("***  ****  ****");

    v.push_back("* ** ****  *  *");

    v.push_back("****  ***  ****");

    v.push_back("****  **** ****");

    v.push_back("***  *  *  *  *");

    v.push_back("**** ***** ****");

    v.push_back("**** ****  ****");

    vector < vector <string> > str;
    for(int i = 0; i < 5; ++i) {
        string s;
        getline(cin, s);
        if(i == 0) {
            for(int j = 0; j < s.size(); j += 4) {
                string tmp = "";
                tmp += s[j];
                tmp += s[j + 1];
                tmp += s[j + 2];
                vector <string> v1;
                v1.push_back(tmp);
                str.push_back(v1);
            }
        } else {
            int ind = 0;
            for(int j = 0; j < s.size(); j += 4) {
                string tmp = "";
                tmp += s[j];
                tmp += s[j + 1];
                tmp += s[j + 2];
                str[ind].push_back(tmp);
                ind++;
            }
        }
    }
    int n = 0;
    for(int i = 0; i < str.size(); ++i) {
        string tmp = "";
        for(int j = 0; j < str[i].size(); ++j) {
            tmp += str[i][j];
        }
        bool ok = false;
        int k;
        for(int j = 0; j < 10; ++j) {
            if(tmp == v[j]) {
                ok = true;
                k = j;
                break;
            }
        }
        if(ok) {
            n *= 10;
            n += k;
        } else {
            cout << "BOOM!!" << endl;
            return 0;
        }
    }
    cout << (n % 6 ? "BOOM!!" : "BEER!!") << endl;
    return 0;
}