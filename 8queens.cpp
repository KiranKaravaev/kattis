#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

char a[8][8];

bool check(int I, int J) {
    for(int j = 0; j < J; ++j) {
        if(a[I][j] == '*') {
            return false;
        }
    }
    for(int j = J + 1; j < 8; ++j) {
        if(a[I][j] == '*') {
            return false;
        }
    }
    for(int i = 0; i < I; ++i) {
        if(a[i][J] == '*') {
            return false;
        }
    }
    for(int i = I + 1; i < 8; ++i) {
        if(a[i][J] == '*') {
            return false;
        }
    }
    for(int i = I - 1, j = J - 1; i > 0 && j > 0; --i, --j) {
        if(a[i][j] == '*') {
            return false;
        }
    }
    for(int i = I - 1, j = J + 1; i > 0 && j < 8; --i, ++j) {
        if(a[i][j] == '*') {
            return false;
        }
    }
    for(int i = I + 1, j = J + 1; i < 8 && j < 8; ++i, ++j) {
        if(a[i][j] == '*') {
            return false;
        }
    }
    for(int i = I + 1, j = J - 1; i < 8 && j > 0; ++i, --j) {
        if(a[i][j] == '*') {
            return false;
        }
    }
    return true;
}

int main() {
    for(int i = 0; i < 8; ++i) {
        for(int j = 0; j < 8; ++j) {
            cin >> a[i][j];
        }
    }
    int k = 0;
    for(int i = 0; i < 8; ++i) {
        for(int j = 0; j < 8; ++j) {
            if(a[i][j] == '*') {
                ++k;
                if(!check(i, j)) {
                    cout << "invalid" << endl;
                    return 0;
                }
            }
        }
    }
    cout << (k == 8 ? "valid" : "invalid") << endl;
    return 0;
}
/*
........
........
........
........
........
........
........
........
 */