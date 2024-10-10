#include <iostream>
using namespace std;

int main() 
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " This is a leap year,sadly." << endl;
    } else {
        cout << year << " No leap year one day less suffering." << endl;
    }

}
