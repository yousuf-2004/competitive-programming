#include <bits/stdc++.h>
using namespace std;

/*
        Yousuf Ibrahim

        Be Consistant;

        Stay Hungry;
*/

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
     int disturbance = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            disturbance++;
        }
    }
    
    int minDisturbance = disturbance;
    
    // Try to minimize disturbance by checking the effect of a swap at every valid position
    for (int i = 0; i < n - 1; ++i) {
        int currentDisturbance = disturbance;

        // Check if arr[i] == arr[i+1] is causing disturbance before the swap
        if (i > 0 && arr[i-1] == arr[i]) currentDisturbance--;
        if (arr[i] == arr[i+1]) currentDisturbance--;

        // Simulate the swap arr[i] and arr[i+1]
        swap(arr[i], arr[i+1]);

        // Check if arr[i-1] == arr[i] or arr[i] == arr[i+1] is causing disturbance after the swap
        if (i > 0 && arr[i-1] == arr[i]) currentDisturbance++;
        if (arr[i] == arr[i+1]) currentDisturbance++;

        // Update the minimum disturbance found
        minDisturbance = min(minDisturbance, currentDisturbance);

        // Revert the swap
        swap(arr[i], arr[i+1]);
    }

    // Output the minimized disturbance
    cout << minDisturbance << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}