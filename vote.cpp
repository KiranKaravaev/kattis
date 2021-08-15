#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t --> 0){
        int n;
        cin >> n;
        int a[n];
        int s = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s += a[i];
        }
        vector <double> v(n);
        for(int i = 0; i < n; i++){
            v[i] = (100.0 * a[i]) / s;
        }
        double mx = -1, k = 0, ind;
        for(int i = 0; i < n; i++){
            if(v[i] > mx){
                mx = v[i];
                k = 1;
                ind = i;
            } else if(v[i] == mx){
                k++;
            }
        }
        if(k == 1){
            if(mx > 50.0){
                cout << "majority winner " << ind + 1 << endl;
            } else {
                cout << "minority winner " << ind + 1 << endl;
            }
        } else {
            cout << "no winner" << endl;
        }
    }
    return 0;
}