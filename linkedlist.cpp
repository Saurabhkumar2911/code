#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;};

void printlinkedlist(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"element = "<< ptr -> data <<endl;
        ptr =ptr->link;
    }
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    head =(struct node*)malloc(sizeof(struct node));
    first =(struct node*)malloc(sizeof(struct node));
    second =(struct node*)malloc(sizeof(struct node));
    third =(struct node*)malloc(sizeof(struct node));
    
    head->data=45;
    head->link=first;

    first->data=55;
    first->link=second;

    second->data=78;
    second->link=third;

    third->data=89;
    third->link=NULL;

    printlinkedlist(head);

    return 0;

}