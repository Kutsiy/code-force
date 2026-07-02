#include <iostream>
using namespace std;


int main()
{
    int t; cin >> t;
    int x = 0;
    while (t--)
    {
        char expression[4]; cin >> expression;

        switch (expression[1])
        {
        case '+':
            x++;
            break;
        case '-':
            x--;
            break;
        default:
            break;
        }
    }
    cout << x << endl;

    return 0;
}
