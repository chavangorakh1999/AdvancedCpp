//
//  main.cpp
//  UnionAndIntersection
//
//  Created by Gorakh Chavan on 02/06/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
};

class LinkedList
{
    private:
    Node *head;
    public:
    LinkedList(){
        head=NULL;
    }
    LinkedList(int A[],int n);
//    ~LinkedList();
    void push(Node** head,int data)
    {
        Node *new_node=new Node;
        new_node->data=data;
        new_node->next=*head;
        *head=new_node;
    }
    Node* getIntersection(Node *head1,Node *head2)
    {
        // HashSet<int> hset=new HashSet<>();
        Node *n1=head1;
        Node *result=NULL;
        while(n1!=NULL)
        {
            if(ispresent(head2,n1->data))
                push(&result,n1->data);
            n1=n1->next;
        }
    

        return result;
    
    }
    Node* getUnion(Node* head1,Node *head2)
    {
        Node* result=NULL;
        Node*n1=head1,*n2=head2;
        while(n1!=NULL)
       {
          
           push(&result,n1->data);
           n1=n1->next;
       }
        while(n2!=NULL)
       {
           if(!ispresent(result,n2->data))
               push(&result,n2->data);
           n2=n2->next;
       }
        
        return result;
    }
    bool ispresent(Node *head,int data)
    {
        while(head!=NULL)
        {
            if(head->data==data)
            return 1;
            head=head->next;
        }
        return 0;
    }
    void PrintList(Node *head)
    {
        while(head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
    }
};

int main()
{
    LinkedList ll;
     Node* head1 = NULL;
     Node* head2 = NULL;
     Node* intersection = NULL;
     Node* Union = NULL;
  
    ll.push (&head1, 80);
    ll.push (&head1, 43);
    ll.push (&head1, 15);
    ll.push (&head1, 41);
  
    /*create a linked lits 8->4->2->10 */
    ll.push (&head2, 40);
    ll.push (&head2, 43);
    ll.push (&head2, 41);
    ll.push (&head2, 89);
    ll.PrintList(head1);
    cout<<endl;
    ll.PrintList(head2);
    cout<<endl;
   
    Union=ll.getUnion(head1, head2);
    
    intersection=ll.getIntersection(head1, head2);
    cout<<"Union:";
    ll.PrintList(Union);
    cout<<endl;
    cout<<"Intersection:";
    ll.PrintList(intersection);
    cout<<endl;
    return 0;
}
