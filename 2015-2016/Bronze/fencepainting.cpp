#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int total = 0;
    total += b - a;
    total += d - c;
    total -= max(min(b, d) - max(a, c), 0);
    cout << total << endl;
}