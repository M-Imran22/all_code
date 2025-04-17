#include <iostream>

using namespace std;

int main()
{
    int r;
    int c;
    int matrix1[3][4]={{1,3,5,7,},{1,2,8,9,},{2,4,6,8}};
    cout <<"\t Matrix 1 \n";

    for (r=0; r<3; r++)
    {
        for (c=0; c<4; c++)
        {
            cout <<matrix1[r][c]<<"\t";
        }
        cout <<"\n";
    }
    cout <<"\n \t Matrix 2 \n";
    int matrix2[3][4]={{2,4,6,8,},{1,3,5,7},{1,2,8,9}};
    for ( r=0; r<3; r++)
    {
        for (c=0; c<4; c++)
        {
            cout <<matrix2[r][c]<< "\t";
        }
        cout <<"\n";
    }
    cout <<"\n The multiplication of matrix 1 and matrix 2 is \n";
    for (r=0; r<3; r++)
    {
        for (c=0; c<4; c++)
        {
            cout <<matrix1[r][c]*matrix2[r][c]<<"\t";
        }
        cout <<"\n";
    }
    return 0;
}
