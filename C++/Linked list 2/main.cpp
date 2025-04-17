#include <iostream>

using namespace std;
struct node
{
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insert(node* &head, int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }

    node* temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}
void display(node* head )
{
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
void delete (node* &head, int val)
{
    Node* temp=head;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    Node* todelete= temp->next;
    temp->next=temp->next->next;

    delete todelete;

}


int main()
{
    node* head=NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    display(head);


    return 0;
}

