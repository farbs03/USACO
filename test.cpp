#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;

int k, n;
vector<vector<int> > cows;

int main() {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    cin >> k; cin >> n;
    vector<vector<int> > cows;
    for(int i = 0; i < k; i++) {
        vector<int> cow;
        for(int j = 0; j < n; j++) {
            int x; cin >> x;
            cow.push_back(x);
        }
        cows.push_back(cow);
    }
    int num1 = 1;
    int num2 = 2;
    int total = 0;
    for(int x = 0; x < n; x++) {
        vector<int> idxs;
        for(int i = 0; i < k; i++) {
            for(int j = 0; j < n; j++) {
                if(j + 1 == num1) {
                    for(int k = 0; k < n; k++) {
                        if(k + 1 == num2 && k != j) {
                            idxs.push_back(j - k);
                        }
                        num2++;
                    }
                    num1++;
                    num2 = 1;
                }
            }
        }
        int idx1 = idxs[0];
        bool isConsistent = true;
        for(int i = 0; i < k; i++) {
            if(idx1 > 0) {
                if(idxs[i] < 0) {
                    isConsistent = false;
                }
            }
            else if(idx1 < 0) {
                if(idxs[i] > 0) {
                    isConsistent = false;
                }
            }
        }
        if(isConsistent) {
            total++;
        }
    }
    cout << total + 1 << endl;
} 
