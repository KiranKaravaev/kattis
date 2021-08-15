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

int main() {
    int n, ind = 1;
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        map <string, int> zoo;
        while(n--) {
            char name[255];
            char c;
            //string name;
            while (scanf("%s%c", &name, &c)) {
                if (c == '\n') {
                    break;
                }
               // n = name;
            }
            //cout << name << endl;
            transform(name, name + 255, name, [](unsigned char c){ return std::tolower(c); });
            ++zoo[name];
        }
        cout << "List " << ind << ":" << endl;
        for(const auto& it : zoo) {
            cout << it.first << " | " << it.second << endl;
        }
        ++ind;
    }
    return 0;
}