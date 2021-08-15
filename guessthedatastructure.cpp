#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        stack <int> s;
        queue <int> q;
        priority_queue <int> pq;
        bool st = true, qu = true, qpu = true;
        while(n--) {
            int cmd, a;
            cin >> cmd >> a;
            if(cmd == 1) {
                if(st) {
                    s.push(a);
                }
                if(qu) {
                    q.push(a);
                }
                if(qpu) {
                    pq.push(a);
                }
            } else {
                if(st) {
                    if(s.empty() || s.top() != a) {
                        st = false;
                    } else {
                        s.pop();
                    }
                }
                if(qu) {
                    if(q.empty() || q.front() != a) {
                        qu = false;
                    } else {
                        q.pop();
                    }
                }
                if(qpu) {
                    if(pq.empty() || pq.top() != a) {
                        qpu = false;
                    } else {
                        pq.pop();
                    }
                }
            }
        }
        if(st) {
            if(!qu && !qpu) {
                cout << "stack" << endl;
            } else {
                cout << "not sure" << endl;
            }
        } else if(qu) {
            if(!qpu) {
                cout << "queue" << endl;
            } else {
                cout << "not sure" << endl;
            }
        } else if(qpu) {
            cout << "priority queue" << endl;
        } else {
            cout << "impossible" << endl;
        }
    }
    return 0;
}