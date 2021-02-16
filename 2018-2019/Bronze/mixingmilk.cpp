#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int> > cows;
    for(int i = 0; i < 3; i++) {
        int c, m;
        cin >> c >> m;
        cows.push_back(make_pair(c, m));
    }
    int amt;
    for(int i = 0; i < 100; i++) {
        amt = min(cows[i % 3].second, cows[(i + 1) % 3].first - cows[(i + 1) % 3].second);
        cows[i % 3].second -= amt;
        cows[(i + 1) % 3].second += amt;
    }
    for(int i = 0; i < 3; i++) {
        cout << cows[i].second << endl;
    }
}