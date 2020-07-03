// #include "hash_set.h"
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
    ~LinkedList();
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
     Node* intersecn = NULL; 
     Node* unin = NULL; 
  
    ll.push (&head1, 20); 
    ll.push (&head1, 4); 
    ll.push (&head1, 15); 
    ll.push (&head1, 10); 
  
    /*create a linked lits 8->4->2->10 */
    ll.push (&head2, 10); 
    ll.push (&head2, 2); 
    ll.push (&head2, 4); 
    ll.push (&head2, 8); 
    ll.PrintList(head1);

    return 0;
}