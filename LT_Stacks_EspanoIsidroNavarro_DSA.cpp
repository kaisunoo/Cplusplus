/*Learning Task - Stacks
Espano, Kyla Caryl B.
Isidro, Mary Grace
Navarro, Maria Cleofe R.
*/
#include <bits/stdc++.h>

using namespace std;

//Boolean type of function where the return value type is true/false.
bool balancedBracket(string bracket)
{
    stack<char> esin;

    for (int i = 0; i < bracket.length(); i++) {
        if (esin.empty()) {
            esin.push(bracket[i]);
        }
        else if ((esin.top() == '(' && bracket[i] == ')')
                 || (esin.top() == '{' && bracket[i] == '}')
                 || (esin.top() == '[' && bracket[i] == ']')) {
                     esin.pop();
        }
        else {
            esin.push(bracket[i]);
        }
    }

    if (esin.empty()) {
        return true;
    }
    return false;
}

//Main function
int main()
{
    string bracket;
    int d;
    cout << "Input Data:";
    cin >> d;

    for (int i = 0; i<d; i++){
        cin >> bracket;
    if (balancedBracket(bracket))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
    }
}
