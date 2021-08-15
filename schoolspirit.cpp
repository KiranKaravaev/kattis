#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

double rating(vector <int> scores) {
    double sum = 0;
    for(int i = 0; i < scores.size(); ++i) {
        sum +=  scores[i] * pow(4.0 / 5.0, i);
    }
    return 1.0 / 5 * sum;
}

int main() {
    int n;
    cin >> n;
    vector <int> scores(n);
    for(int i = 0; i < n; ++i) {
        cin >> scores[i];
    }
    printf("%.6lf\n", rating(scores));
    double sum_ratings = 0;
    for(int i = 0; i < n; ++i) {
        vector <int> new_scores = scores;
        new_scores.erase(new_scores.begin() + i);
        sum_ratings += rating(new_scores);
    }
    printf("%.6lf\n", sum_ratings / n);
    return 0;
}