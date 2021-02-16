#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> cows;
    vector<int> heights;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        cows.push_back(x);
    }
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        heights.push_back(x);
    }
    sort(cows.begin(), cows.end()); sort(heights.begin(), heights.end());
    long long prod = 1;
    for(int i = n - 1; i >= 0; i--) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(cows[i] <= heights[j]) {
                cnt++;
            }
        }
        cnt -= n - i - 1;
        prod *= cnt;
    }
    cout << prod << "\n";
}