//A program that checks if a given number is even or odd.

#include <iostream>
using namespace std;

int OddOrEven(int num) {
    return (num%2);
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    
    if (OddOrEven(x) == 0) {
        cout << x << " is EVEN.";
    }
    else {
        cout << x << " is ODD.";
    }

    return 0;
}