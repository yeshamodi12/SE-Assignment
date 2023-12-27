#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class operators
{
public:
    //  WAP to create simple calculator using class  //

    // addition, subtraction, multiplication, division and modulo

    int nam1, nam2;
    void cal()
    {
        cout << "enter nam1 : ";
        cin >> nam1;
        cout << "enter nam2 : ";
        cin >> nam2;

        // simple calculator
        cout << "--------------------------\n";
        cout << "addition is = " << nam1 + nam2 << endl;
        cout << "---------------------------\n";

        cout << "subtraction is =" << nam1 - nam2 << endl;
        cout << "---------------------------\n";

        cout << "multiplication is =" << nam1 * nam2 << endl;
        cout << "----------------------------\n";

        cout << "division is = " << fixed << setprecision(2) << (float)nam1 / (float)nam2 << endl;
        cout << "-----------------------------\n";

        cout << "modulo is = " << nam1 % nam2 << endl;
    }
};
int main()
{

    operators op;
    op.cal();
    return 0;
}
