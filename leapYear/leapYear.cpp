#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << " Enter year : ";
    cin >> year;
 
    if (year % 4 == 0)
    {
        cout << year << " is leap year " << endl;

    }
    else if (year % 100 == 0)
    {
        cout << year << " is leap year " << endl;
    }
    else if (year % 400 == 0)
    {
        cout << year << " is leap year " << endl;
    }
    else if (year % 4 != 0 || year % 100 != 0 || year % 400 != 0)
    {
        cout << year << " is not leap year " << endl;
    }

    system("PAUSE");
    return 0;
}

