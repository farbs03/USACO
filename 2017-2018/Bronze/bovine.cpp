#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int> > cows(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        cows[i].first = x;
    }
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        cows[i].second = x;
    }
    sort(cows.begin(), cows.end());
    for(int i = 0; i < n; i++) {
        cout << cows[i].second << endl;
    }
}