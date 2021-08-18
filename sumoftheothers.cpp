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
    int n;
    char c;
    vector <int> arr;
    while (scanf("%d%c", &n, &c) != EOF) {
        arr.push_back(n);
        if (c == '\n') {
            sort(arr.begin(), arr.end());
            int s = 0;
            for(int el : arr) {
                s += el;
            }
            for(int el : arr) {
                if(s - el == el) {
                    cout << el << endl;
                    break;
                }
            }
            arr.clear();
        }
    }
    return 0;
}