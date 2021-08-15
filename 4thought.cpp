#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

char operations[4] = {'*', '+', '-', '/'};

int f(char o1, char o2, char o3) {
    int res = 0;
    if(o1 == '*' || o1 == '/') {
        if(o1 == '*') {
            res = 16;
        } else {
            res = 1;
        }
        if(o2 == '*' || o2 == '/') {
            if(o2 == '*') {
                res *= 4;
            } else {
                res /= 4;
            }
            if(o3 == '*') {
                res *= 4;
            } else if(o3 == '/') {
                res /= 4;
            } else if(o3 == '+') {
                res += 4;
            } else {
                res -= 4;
            }
            return res;
        } else {
            if(o3 == '*' || o3 == '/') {
                int res1;
                if(o3 == '*') {
                    res1 = 16;
                } else {
                    res1 = 1;
                }
                if(o2 == '+') {
                    res += res1;
                } else {
                    res -= res1;
                }
                return res;
            } else {
                if(o2 == '+') {
                    res += 4;
                } else {
                    res -= 4;
                }
                if(o3 == '+') {
                    res += 4;
                } else {
                    res -= 4;
                }
                return res;
            }
        }
    } else {
        if(o2 == '*' || o2 == '/') {
            if(o2 == '*') {
                res = 16;
            } else {
                res = 1;
            }
            if(o3 == '*') {
                res *= 4;
            } else if(o3 == '/') {
                res /= 4;
            }
            if(o1 == '+') {
                res += 4;
            } else {
                res = 4 - res;
            }
            if(o3 == '+') {
                res += 4;
            } else if(o3 == '-') {
                res = res - 4;
            }
            return res;
        } else {
            if(o3 == '*' || o3 == '/') {
                if (o3 == '*') {
                    res = 16;
                } else {
                    res = 1;
                }
                if (o2 == '+') {
                    res += 4;
                } else {
                    res = 4 - res;
                }
                if (o1 == '+') {
                    res += 4;
                } else {
                    res = 4 - res;
                }
                return res;
            } else {
                if (o1 == '+') {
                    res = 8;
                } else {
                    res = 0;
                }
                if (o2 == '+') {
                    res += 4;
                } else {
                    res -= 4;
                }
                if (o3 == '+') {
                    res += 4;
                } else {
                    res -= 4;
                }
                return res;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bool find = false;
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                for (int k = 0; k < 4; ++k) {
                    if(f(operations[i], operations[j], operations[k]) == n) {

                        cout << 4 << " " << operations[i] << " " << 4 << " " << operations[j] << " " << 4 << " " << operations[k] << " " << 4 << " = " << n << endl;
                        find = true;
                        break;
                    }
                }
                if(find) {
                    break;
                }
            }
            if(find) {
                break;
            }
        }
        if(!find) {
            cout << "no solution" << endl;
        }
    }
    return 0;
}