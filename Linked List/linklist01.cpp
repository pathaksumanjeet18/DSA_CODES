#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node*next;

        //Constructor
        node(int d){
            data = d;
            next = NULL;
        }
};

/*

We can do with oops way and procedural programming way
but will go with procedural programming

//Linked Class (Object Oriented)
class LinkedList{
    node* head;
    node* tail;

    public:
        LinkedList(){

        }
        void insert(int d){

        }
        ...
        
}
*/
//function (procedural programming)

void build(){

}
//passing a pointer by refrence
void insertAtHead(node*&head, int d){
    if(head == NULL){
        head = new node(d);
        return;
    }
    node*n = new node(d);
    // (*n).next = head;
    n->next = head;
    head = n;

}
int length_ll(node*head){
    int cnt = 0;
    while(head!=NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertAtTail(node* head,int d){
     if(head == NULL){
         head = new node(d);
         return;
     }
     node*tail = head;
     while(tail->next!=NULL){
         tail = tail->next;
     }
     tail->next = new node(d);
     return;

}
void insertInMiddle(node*&head,int d,int p){
    if(head==NULL or p==0){
        insertAtHead(head,d);
    }
    else if(p>length_ll(head)){
        insertAtTail(head,d);
    }
    else{
        node*temp = head;
        while(--p){
            temp = temp->next;
        }
        node* n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}
void deleteHead(node*&head){
    if(head==NULL){
        return;
    }
    node*temp = head->next;
    delete head;
    head = temp;
}
void deleteMiddle(node*&head,int p){
    if(head==NULL)
        return;
    node*prev = head;
    node* temp = head;
    temp = temp->next;
    while(--p){
        temp= temp->next;
        prev = prev->next;
        
    }
    prev->next = temp->next;
    delete temp;

}

bool search(node*head,int key){
    node*temp = head;
    while(temp!=NULL){
        if(head->data==key){
            return true;
        }
        head = head->next;
    }
}
bool searchRecur(node*head,int key){
    if(head == NULL){
        return false;
    }
    if(head->data == key)
        return true;
    else{
        return searchRecur(head->next,key);
    }
}
void reverseLink(node*&head){
    node* c = head;
    node* prev = NULL;
    node* n;
    while(c!=NULL){
        n = c->next;
        c->next = prev;
        prev = c;
        c = n;
    } 
    head = prev;
}
//recurseviely reverse a linked list

node* take_input(){
    int d;cin>>d;
    node* head=NULL;
    while(d!=-1){

        insertAtHead(head,d);
        cin>>d;
    }
    return head;
}
node* recReverse(node* head){
    if(head->next == NULL or head==NULL)
        return head;

    //rec case;
    node* shead = recReverse(head->next);
    node* temp = shead;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    head->next = NULL;
    temp->next = head;
    return shead;
}
node* midPoint(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    node*slow = head;
    node*fast = head->next;
    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
node* kthNodefromEnd(node*head,int k){
    node* fast = head;
    node* slow = head;
    while(fast->next != NULL){
        if(k>0){
            fast = fast->next;
            k--;
        }
        else{
            fast=fast->next;
            slow = slow->next;
        }

    }
    return slow;
}
node* merge(node* a,node* b){
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    node * c;
    if(a->data < b->data){
        c = a;
        c->next = merge(a->next,b);
    }
    else{
        c = b;
        c->next = merge(a,b->next);
    }
    return c;
}
//Cycle Detection Method Floyd's Cycle Algoreith
bool detectCycle(node* head){
    node * slow = head;
    node * fast = head;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow -> next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}
void removeCycle(node* head){
    node* slow = head;
    node* fast = head;
     while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow -> next;
        if(fast == slow){
            break;
        }
    }
    slow = head;
    node* prev = fast;
    while(fast!=slow){
        prev = fast;
        fast = fast->next;
        slow = slow -> next;
    }
    prev->next = NULL;
}
//Operator Overload
ostream& operator<<(ostream &oc,node*head){
    print(head);
    return oc;//cout
}
istream& operator>>(istream &in,node*&head){
    head = take_input();
    return in;
}
int main(){

    // node* head = NULL;
    //node*head = take_input();
    //node*head2 = take_input();
    node* head;
    node* head2;
    cin>>head>>head2;
    cout<<head;
    cout<<head2;
    cout<<head<<head2;//cascading of operators


    head = recReverse(head);
    node* mid = midPoint(head);
    cout<<mid->data;
    node* kth = kthNodefromEnd(head,3);
    cout<<kth->data;
    
    // print(head);
    /*
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);

    print(head);
    insertInMiddle(head,4,3);
    insertAtTail(head,7);
    print(head);
    deleteHead(head);
    deleteMiddle(head,2);
    print(head);

*/

    return 0;

}



