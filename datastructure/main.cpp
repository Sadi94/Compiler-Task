#include <iostream>
using namespace std;
class node
{
public:
 int data;
 node *next;
};
class LinkedList
{
 node *head=NULL;
public:

 void insertAtLast(int key)
 {
 //Create a New Node
 node *n = new node;
 n->data = key;
 n->next = NULL;
 if(head == NULL)
 {
 head = n;
 }
 else
 {
 //Find the address of last node
 node *currentNode = head;
 while(currentNode->next!=NULL)
 {
 currentNode = currentNode->next;
 }
 //Save n as a next node of last node
 currentNode->next = n;
 }
 }

 int findMin()
 {
 //Implement this function
  int min = 99999;


    while (head != NULL) {


        if (min > head->data)
            min = head->data;

        head = head->next;
    }
    return min;
 }
 void printList()
 {
 node *currentNode = head;
 while(currentNode!=NULL)
 {
 cout<<currentNode->data<<" ";
 currentNode = currentNode->next;
 }
 }
};
int main()
{
 LinkedList List;
 List.insertAtLast(20);
 List.insertAtLast(25);
 List.insertAtLast(18);
 List.printList();

 cout<<"\nMinimum Value: "<<List.findMin()<<endl;
 return 0;
}
