#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int N, shell_at_position[3], counter[3];
/*
N stores the number of operations (as described in the problem statement)
shell_at_position[i] stores the label of the shell located at position i
counter[i] stores the number of times the shell with label i was picked
*/

int main()
{
    cin >> N;
    for(int i = 0; i < 3; i++)
        shell_at_position[i] = i; // We arbitrarily place the shells down (In this case, I happen to be putting the shell with label i at position i)
    for(int i = 0; i < N; i++)
    {
        int a,b,g;
        cin >> a >> b >> g;
        --a, --b, --g; // Zero indexing: offset all positions by 1
        swap(shell_at_position[a], shell_at_position[b]); // Perform Bessie's swapping operation
        ++counter[shell_at_position[g]]; // Count the number of times Elsie guesses each particular shell
    }
    int maxNum = 0;
    for(int i = 0; i < 3; i++) {
        if(shell_at_position[i] > maxNum) {
            maxNum = shell_at_position[i];
        }
    }
    printf("%d\n", maxNum);
    return 0;
}