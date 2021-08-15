#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

int main() {
    vector <string> words;
    string s;
    while(cin >> s) {
        words.push_back(s);
    }
    set <string> new_words;
    for(int i = 0; i < words.size(); ++i) {
        for(int j = 0; j < words.size(); ++j) {
            if(i != j) {
                new_words.insert(words[i] + words[j]);
            }
        }
    }
    for(const auto& word : new_words) {
        cout << word << endl;
    }
    return 0;
}