#include <iostream>
using namespace std;

bool b[20][20]; // b[A-1][B-1] = 1 if A was better than B in any session.

int main(){
    int k, n; cin >> k >> n;
    int a[n];
    while(k--){ // Looping through k times
        for(int i=0;i<n;i++) cin >> a[i];
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                b[a[i]-1][a[j]-1] = true;
            }
        }
    }
    
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            // If either is false, we increment the count
            if(!b[i][j] || !b[j][i]) count++;
        }
    }
    cout << count << endl;
}