#include <bits/stdc++.h>
using namespace std;

int main()
{
    class Cricketer
    {
    public:
        int jersey_no;
        char country[100];
    };
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 10;
    char country_name[100] = "India";
    strcpy(dhoni->country, country_name);

    Cricketer *kohli = new Cricketer;
    // kohli = dhoni; // wrong way
    strcpy(kohli->country, dhoni->country);
    kohli->jersey_no = dhoni->jersey_no;
    delete dhoni;
    cout << kohli->country;
    return 0;
}