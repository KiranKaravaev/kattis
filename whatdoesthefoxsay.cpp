#include <bits//stdc++.h>
using namespace std;

const int N = 200;

char s[N], s1[N], s2[N];

int main(){
    int q;
    scanf("%d\n", &q);
    vector <string> words;
    set <string> animals;
    while(q --> 0){
        words.clear();
        animals.clear();
        char ch;
        while(scanf("%s%c", s, &ch)) {
            words.push_back(s);
            if(ch == '\n') {
                break;
            }
        }
        while(scanf("%s %s %s\n", s, s1, s2), s1[0] != 'd') {
            animals.insert(s2);
        }
        scanf("%s %s\n", s1, s2);
        for(int i = 0; i < words.size(); ++i) {
            if (animals.find(words[i]) == animals.end()) {
                printf("%s ", words[i].c_str());
            }
        }
        printf("\n");
    }
    return 0;
}
/*
1
toot woof wa ow ow ow pa blub blub pa toot pa blub pa pa ow pow toot
dog goes woof
fish ne goes blub
elephant goes toot
seal goes ow
what does the fox say?
 */