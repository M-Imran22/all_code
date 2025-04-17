#include<iostream>
using namespace std;
struct node{
public:
  int data;
  node* next;

  node(int val)
  {
      data =val;
      next=NULL;
  }
};
void insertAtTail(node* &head, int val)
{
node* n= new node(val);
if(head==NULL)
{

    head=n;
    return;
}
node* temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deletion(node* &head, int val)
{
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete= temp->next;
    temp->next=temp->next->next;
    delete todelete;
}


int main()
{

    node* head=NULL;
    int s;
    do{
        cout<<"Enter 1 to insert.\n";
        cout<<"Enter 2 to display.\n";
        cout<<"Enter 3 to delete an element.\n";
        cin>>s;
        switch(s)
        {
        case 1:
            {
                int q;
                cout<<"Enter Value for Insertion : ";
                cin>>q;
                insertAtTail(head,q);
                break;
            }
        case 2:
            {
                display(head);
                break;
            }
        case 3:
            {
                int e;
                cout<<"Enter Value for Deletion : ";
                cin>>e;
                deletion(head,e);
                break;
            }
        case 4:
            {
              break;
            }
        }

    }while(s!=4);
   /* insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    deletion(head,3);
    display(head);*/

}