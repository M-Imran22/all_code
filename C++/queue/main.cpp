#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;

};
struct node* front=NULL;
struct node* rear=NULL;
struct node* temp;

void Insert()
{
    int val;
    cout<<"Insert the element in queue : \n";
    cin>> val;
    if(rear==NULL)
    {
        rear = (struct node *)malloc(sizeof(struct node));
        rear->next=NULL;
        rear->data = val;
        front = rear;

    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        rear->next = temp;
        temp->data = val;
        temp->next = NULL;
        rear = temp;

    }
}
void Delete()
{
    temp = front ;
    if (front == NULL)
    {
        cout <<"Underflow \n";
        return;
    }
    else
    {
        temp = temp->next;
        cout  <<"element deleted from queue is : "<<front->data<<endl;
        free(front);
        front = temp;
        rear = NULL;
    }
}
void Display()
{
    temp = front;
    if (front == NULL)
    {
        cout<< "Queue is empty \n";
        return;
    }
    cout<< "Queue elements are: ";
    while (temp != NULL)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
void DisplayElement()
{

    cout << "Enter the index of the element you want to display: ";
    int index;
    cin >> index;
    temp = front;
    int i = 1;
    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        cout << "Index out of range.\n";
    }
    else
    {
        cout << "Element at index " << index << ": " << temp->data << "\n";
    }
}

int main()
{
    int ch;
    cout<<"1) Insert element to queue \n";
    cout<<"2) Delete element from queue \n";
    cout<<"3) Display all the elements of queue \n";
    cout<<"4) Display a specific element of queue \n";
    cout<<"5) Exit \n";

    do
    {
        cout <<"Enter your choice : \n";
        cin>>ch;
        switch (ch)
        {
        case 1:
            Insert();

            break;
        case 2:
            Delete();

            break;
        case 3:
            Display();

            break;
        case 4:
            DisplayElement();

            break;
        case 5:
            cout<<"Exit \n";

            break;

        default:
            cout<<"Invalid choice \n";
            break;
        }
    }
    while (ch!=5);
    return 0;
}
