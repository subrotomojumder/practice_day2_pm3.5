#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;
    if (((int)s == 60 && a < b) || ((int)s == 61 && a == b) || ((int)s == 62 && a > b))
    {
        cout << "Right";
    }
    else
    {
        cout << "Wrong";
    }
    // cout << a << " " << s << " " << b << endl;
    return 0;
}