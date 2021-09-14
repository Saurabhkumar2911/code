#include<bits/stdc++.h>
using namespace std ;

struct node{
    int data;
    struct node *link;};

struct node *head=NULL;

void insert(int value)
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));

     temp -> data=value;
      temp -> link=head;
        head=temp; 
}
void display()
{
    struct node* temp=head;
    cout<<"The Value in the Linked list are : ";
        while(temp!=NULL)
        {
            cout<<temp->data;
            temp=temp->link;
        }
        cout<<endl;
}

int main()
{
   int n,b;
   cout<<"Enter no of values to insert"<<"  ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cout<<"enter value"<<" ";
       cin>>b;
       insert(b);
   }
   display();
   return 0;
}