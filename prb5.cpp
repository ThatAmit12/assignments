#include <iostream>
using namespace std;

int main()
 {
    int o;

    cout << "Enter the value: ";
    cin >> o;

    for (int i = 1; i <= o; ++i)
    {
        if (i % 5 == 0 && i % 10 == 0)
        {
            cout << "FizzBuzz" << endl;
        } 
        else if (i % 5 == 0)
        {
            cout << "Fizz" << endl;
        }
         else if (i % 10 == 0) 
        {
            cout << "Buzz" << endl;
        } 
         else 
        {
            cout << i << endl;
        }
    }
 }
