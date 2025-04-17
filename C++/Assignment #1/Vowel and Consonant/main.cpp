#include <iostream>

using namespace std;

int main()
{
    char x;
    cout <<"Enter an alphabet \n" ;
    cin >> x;
    switch(x)
    {
        case 'a':case 'e':case 'i':case 'o':case 'u':
        cout <<"It is a WAVOL \n";
        break;
        default:
            cout <<"It is a CONSONANT \n";

    }
    cout <<"Thanks \n";
    return 0;
}
