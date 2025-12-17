#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Cricketer
    {
    public:
        int jersey_no;
        // char country[100];
    };
    Cricketer * dhoni;
    dhoni->jersey_no = 10;
    // char country_name[100] = "India";
    // strcpy(dhoni->country, country_name);

    cout << dhoni->jersey_no;
    return 0;
}