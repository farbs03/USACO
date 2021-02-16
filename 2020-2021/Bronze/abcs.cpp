#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 7;
    vector<int> nums;
    int max = 0;
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        if(num > max) {
            max = num;
        }
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    int idx = 2;
    int A = nums[0]; int B = nums[1]; int C = nums[idx];
    while(A + B + C != max) {
        idx++;
        C = nums[idx];
    }
    cout << A << " " << B << " " << C << endl;
}