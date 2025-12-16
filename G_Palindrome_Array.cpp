#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= (n - 1) / 2; i++)
    {
        int fast = i;
        int last = n - i - 1;
        if (fast != last && a[fast] != a[last])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}