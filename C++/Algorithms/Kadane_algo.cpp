#include <stdio.h>

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int best = arr[0];
    int maxi = arr[0];

    for (int i = 1; i < n; i++)
    {
        maxi = ((arr[i] > maxi + arr[i]) ? arr[i] : maxi + arr[i]);
        best = ((best > maxi) ? best : maxi);
    }
    cout << best << '\n';
    return 0;
}
