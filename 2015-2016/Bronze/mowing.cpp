#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<pair<int, int> > coords;
    coords.push_back(make_pair(0, 0));
    int x = 0;
    int y = 0;
    for(int i = 0; i < N; i++) {
        string D; int S;
        cin >> D >> S;
        if(D == "N") {
            for(int j = 0; j < S; j++) {
                y++;
                coords.push_back(make_pair(x, y));
            }
        }
        else if(D == "S") {
            for(int j = 0; j < S; j++) {
                y--;
                coords.push_back(make_pair(x, y));
            }
        }
        if(D == "E") {
            for(int j = 0; j < S; j++) {
                x++;
                coords.push_back(make_pair(x, y));
            }
        }
        if(D == "W") {
            for(int j = 0; j < S; j++) {
                x--;
                coords.push_back(make_pair(x, y));
            }
        }
    }
    int minTime = 100;
    int difference;
    for(int i = 0; i < coords.size() - 1; i++) {
        for(int j = i + 1; j < coords.size(); j++) {
            if(coords[i].first == coords[j].first && coords[i].second == coords[j].second) {
                difference = j - i;
                if(difference < minTime) {
                    minTime = difference;
                }
            }
        }
    }
    cout << minTime << endl;
}
