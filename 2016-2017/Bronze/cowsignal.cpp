#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> drawing;
    for(int i = 0; i < n; i++) {
        string bruh; cin >> bruh;
        string temp = "";
        for(int j = 0; j < m; j++) {
            char chr = bruh[j];
            for(int l = 0; l < k; l++) {
                temp += chr;
            }
        }
        for(int p = 0; p < k; p++) {
            drawing.push_back(temp);
        }
    }
    for(int i = 0; i < n * 2; i++) {
        cout << drawing[i] << endl;
    }
}
