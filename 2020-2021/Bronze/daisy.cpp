#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int num; cin >> num;
        nums.push_back(num);
    }
    int goodPhotos = n;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int total = 0;
            int parts = 0;
            for(int k = i; k <= j; k++) {
                total += nums[k];
                parts++;
            }
            double avg = (double) total / (double) parts;
            bool isAvg = false;
            if((int) avg == avg) {
                for(int k = i; k <= j; k++) {
                    if(nums[k] == avg) {
                        isAvg = true;
                    }
                }
            }
            if(isAvg) {
                goodPhotos++;
            }
        }
    }
    cout << goodPhotos << endl;
}