#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int pos; cin >> pos;
    int cow; cin >> cow;
    int step = 1;
    int total = 0;
    int temp = pos;
    while(pos != cow) {
        pos = temp;
        pos += step;
        total += abs(step);
        if((temp < cow && pos >= cow) || (temp > cow && pos <= cow)) {
            total -= abs(cow - pos);
            break;
        }
        else {
            total += abs(step);
            step *= -2;
        }
    }
    cout << total << "\n";
}