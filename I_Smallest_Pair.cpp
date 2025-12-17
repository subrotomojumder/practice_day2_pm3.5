#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int last_smallest = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int possible_smallest = a[j - 1] + a[i - 1] + j - i;
                if (last_smallest > possible_smallest)
                    last_smallest = possible_smallest;
            }
        }
        cout << last_smallest << endl;
    }
    return 0;
}