#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

long long bin_to_dec(string bin) {
    long long n = 0;
    for(int i = 0; i < bin.size(); ++i) {
        n += (bin[i] - '0') * pow(2, bin.size() - i - 1);
    }
    return n;
}

string reverse_bin(int n) {
    string res;
    while(n) {
        res += char('0' + (n % 2));
        n /= 2;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << bin_to_dec(reverse_bin(n)) << endl;
    return 0;
}