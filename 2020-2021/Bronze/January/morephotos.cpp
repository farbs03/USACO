#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n; cin >> n;
    int E, O = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(x % 2 == 0) {
            E++;
        }
        else {
            O++;
        }
    }
    while(true) {
        if(E < O) {
            O -= 2;
            E += 1;
        } 
        else if(E > O && E != O + 1) {
            E -= 1;
        }
        if(E == O || E == O + 1) {
            break;
        }
    }
    cout << E + O << endl;
} 