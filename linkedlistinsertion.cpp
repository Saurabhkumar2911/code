#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* link;
};

struct node* head=NULL;

void insertion(int n)
{
    struct node* new_head=(struct node*)malloc(sizeof(struct node));
    new_head -> data = n;
    new_head ->link = head;
    head=new_head;
}
    void display()
    {
        struct node* ptr;
        ptr=head;
        
        while(ptr!=NULL)
        {
            cout<<ptr-> data <<"  ";
            ptr=ptr-> link; 
        }
    }

int main()
{
    int n;
    for(int i=0;i<5;i++)
    {
        cout<<"enter value to insert";
        cin>>n;
        insertion(n);
    }

    display();
    return 0;
}