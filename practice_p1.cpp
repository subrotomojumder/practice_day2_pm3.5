#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char name[100], int roll, char section, int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student korim("Ms, Korim", 10, 'A', 40, 9);
    Student rohim("Ms, Rorim", 11, 'A', 43, 9);
    Student najim("Ms, Najim", 12, 'A', 50, 9);
    int max_mark = max({korim.math_marks, rohim.math_marks, najim.math_marks});

    if (korim.math_marks == max_mark)
    {
        cout << korim.name;
    }
    else if (rohim.math_marks == max_mark)
    {
        cout << rohim.name;
    }
    else if (najim.math_marks == max_mark)
    {
        cout << najim.name;
    }

    // cout << max_mark;
    return 0;
}