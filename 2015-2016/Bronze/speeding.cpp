#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> limits;
    vector<int> bessie;
    for(int i = 0; i < N; i++) {
        int dist, limit;
        cin >> dist >> limit;
        for(int j = 0; j < dist; j++) {
            limits.push_back(limit);
        }
    }
    for(int i = 0; i < M; i++) {
        int dist, mph;
        cin >> dist >> mph;
        for(int j = 0; j < dist; j++) {
            bessie.push_back(mph);
        }
    }
    int maxVal = 0;
    for(int i = 0; i < 100; i++) {
        maxVal = max(bessie[i] - limits[i], maxVal);
    }
    cout << maxVal << endl;
}