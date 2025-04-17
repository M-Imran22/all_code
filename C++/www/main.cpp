#include <iostream>

using namespace std;

int main()
{
    char op;
    cin >>op;
    switch(op)
    {
    case '=':
        {
            cout <<"equal \n";
            break;
        }
    default:
        {
            cout <<"not equal \n";
        }
    }
    return 0;
}
