#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;

int n, m;
vector<string> cows;

bool contains(int idx) {
    vector<char> chars;
    for(int j = 0; j < n; j++) {
        chars.push_back(cows[j][idx]);
    }
    for(int j = n; j < n * 2; j++) {
        for(int k = 0; k < chars.size(); k++) {
            if(chars[k] == cows[j][idx]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            string cow; cin >> cow;
            cows.push_back(cow);
        }
    }
    int numPositions = 0;
    for(int i = 0; i < m; i++) {
        if(!(contains(i))) {
            numPositions++;
        }
    }
    cout << numPositions << endl;
} 
