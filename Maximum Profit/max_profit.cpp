#include<iostream>
#include<algorithm>
using namespace std;

static const int MAX = 200000;

int main(){
    int R[MAX], n;

    cout << "How many numbers do you enter? ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> R[i];
    }

    // Set a sufficiently small value as the initial value
    int maxv = -10000000;
    int minv = R[0];

    for(int i = 1; i < n; i++){
        // Update maximum value
        maxv = max(maxv, R[i] - minv);
        // Store minimum value
        minv = min(minv, R[i]);
    }

    cout << "The maximum profit is " << maxv << endl;

    return 0;
}