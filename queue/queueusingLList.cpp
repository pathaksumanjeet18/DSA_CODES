#include <iostream>
using namespace std;

class QueueNode{
    public:
        int data;
        QueueNode*next;

        //Constructor
        QueueNode(int d){
            data = d;
            next = NULL;
        }
};
void insertAtTail(QueueNode*&head,QueueNode*&tail,int d){
     if(head == NULL){
         head = new QueueNode(d);
         tail = head;
         return;
     }
     
     
     tail->next = new QueueNode(d);
     tail = tail->next;
     return;

}
void print(QueueNode*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}
int main(){

    QueueNode* head = NULL;
    QueueNode* tail = NULL;

    insertAtTail(head,tail,5);
    insertAtTail(head,tail,15);
    insertAtTail(head,tail,52);
    insertAtTail(head,tail,53);
    insertAtTail(head,tail,25);
    insertAtTail(head,tail,55);
    insertAtTail(head,tail,57);

    print(head);


    return 0;
}