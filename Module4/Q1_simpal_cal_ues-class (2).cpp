#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class operators
{
public:
    //  WAP to create simple calculator using class  //

    // addition, subtraction, multiplication, division and modulo

    int num1, num2;
    void calculet()
    {
        cout << "enter num1 : ";
        cin >> num1;
        cout << "enter num2 : ";
        cin >> num2;

        // simple calculator
        cout << "--------------------------\n";
        cout << "addition is = " << num1 + num2 << endl;
        cout << "---------------------------\n";

        cout << "subtraction is =" << num1 - num2 << endl;
        cout << "---------------------------\n";

        cout << "multiplication is =" << num1 * num2 << endl;
        cout << "----------------------------\n";

        cout << "division is = " << fixed << setprecision(2) << (float)num1 / (float)num2 << endl;
        cout << "\n";

        cout << "modulo is = " << num1 % num2 << endl;
    }
};
int main()
{

    operators op;
    op.calculet();
    return 0;
}
