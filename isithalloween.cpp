#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    string m;
    cin >> m;
    int d;
    cin >> d;
    cout << ((m == "OCT" && d == 31) || (m == "DEC" && d == 25) ? "yup" : "nope") << endl;
    return 0;
}
