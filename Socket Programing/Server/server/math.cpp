
/*
#include "server.h"
using namespace std;

int math_function()
{
    int num, d, number_limit;
    int result{}, a[10];

    cout << "Enter the size of Number, doing maths operation" << endl;
    cin >> number_limit;

    cout << "Enter the numbers" << endl;
    for (int i = 1; i <= number_limit; ++i)
    {
        cin >> a[i];

        cout << "\n" << "choose any operator.\n1. + \n2. - \n3. * \n4. / \n5. Average" << endl;
        cin >> num;
        cout << "\n";
        switch (num)
        {
        case 1:
            result = result + a[i];
            cout << result << endl;
            break;
        case 2:
            result = result - a[i];
            cout << result << endl;
            break;
        case 3:
            result = 1;
            result = result * a[i];
            cout << result << endl;
            break;
        case 4:
            cout << "Enter the divident number" << endl;
            cin >> d;
            result = d / a[i];
            cout << result << endl;
            break;
        default:
            cout << "You Choose WRONG Option \nKindly choose CORRECT option" << endl;
            break;
        }
        cout << "\nEnter next Number -  " << endl;
    }
    return result;
}


*/
