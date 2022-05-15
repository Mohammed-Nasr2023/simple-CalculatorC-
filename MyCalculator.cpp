#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char operation;
    cout << "\t\t\t\t\t\t**Mohammed's Calculator**\n";
    cout << "\n please insert the first number followed by the desired operation then second number :\n";
    cin >> num1  >> operation >> num2;

    //using switch case to performe calculations

    switch (operation)
    {
    case '+': cout << num1 << operation << num2 << " = " << num1 + num2 << endl; break;
    case '-': cout << num1 << operation << num2 << " = " << num1 - num2 << endl; break;
    case '*': cout << num1 << operation << num2 << " = " << num1 * num2 << endl; break;
    case '/': if (num2 == 0)
        cout << "impossibile divide by 0 \n"; //checking the denominator not equal zero
            else
        cout << num1 << operation << num2 << " = " << num1 / num2 << endl; break;

        //modulus case can be implemented with two methods the first using boolean variable to determine if the numbers are integer or not
       /* case '%':
       bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);
        isNum2Int = ((int)num2 == num2);

        if (isNum1Int && isNum2Int) 
            cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
        
        else
            cout << "use modulus operator with integer numbers only!";
        break;*/

    case '%': if ((int)num1 == num1 && (int)num2 == num2) //using casting
        cout << num1 << " % " << num2 << " = " << (int)num1 % (int)num2 << endl;
            else
        cout << "use modulus operator with integer numbers only! \n";
        break;

    default: "use a valid operator! \n";
        break;
    }

    system("pause>0");

}
