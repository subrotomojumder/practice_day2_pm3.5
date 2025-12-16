#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if ((int)s == 42)
    {
        a *b == c ? cout << "Yes" : cout << a * b;
    }
    else if ((int)s == 43)
    {
        a + b == c ? cout << "Yes" : cout << a + b;
    }
    else if ((int)s == 45)
    {
        a - b == c ? cout << "Yes" : cout << a - b;
    }
    // cout << a << " " << s << " " << b << " " << q << " " << c << endl;
    return 0;
}