#include <iostream>
#include <string>
#include <array>
using namespace std;

array<int, 26> count_freq(string s) {
    array<int, 26> freq;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        freq[c - 'a']++;
    }
    return freq;
}

int main() {
    int n;
    cin >> n;
    array<int, 26> ans;
    for(int i = 0; i < 26; i++) {
        ans[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        array<int, 26> freq1 = count_freq(s1);
        array<int, 26> freq2 = count_freq(s2);
        for (int j = 0; j < 26; j++) {
            if(freq1[j] > freq2[j]) {
                ans[j] += freq1[j];
            }
            else {
                ans[j] += freq2[j];
            }
        }
    } 
    for (int i = 0; i < 26; i++) {
        cout << ans[i] << '\n';
    }
    
    return 0;
}