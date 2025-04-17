#include <iostream>
using namespace std;
void ShowManu (){
    cout << "\tManu\t\n";
    cout << "1. Check Balance \n";
    cout << "2. Deposit\n";
    cout << "3. withdraw\n";
    cout << "4. Exit\n";
    

}

int main()
{
    //Show manu,check balance,deposit,withdraw
    int option ;
    cout << "option \n";
   
    do{
    ShowManu();
     cin>>option;
     double balance=100;
    switch(option){
        case 1: cout<<"Balance :"<<balance<<endl; break;
       
        case 2: cout <<"Deposit Amount :"<<deposit<<endl;
               double deposit;
               cin >>deposit;
               balance += deposit;
        
               break;
       
        case 3: cout<<"Withdraw Amount :"<<withdrawAmount<<endl;
             int withdrawAmount;
             cin >> withdrawAmount;
             if (withdrawAmount<=balance)
             balance -= withdrawAmount; 
             else
              cout << "Enough Balance \n";
             break;
    }
    }while(option!=4);
    return 0;

}