#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node () {
        this -> data= 0;
        this -> next = NULL;
    }

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

int LengthLL(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
return len;
}

void insertAtHead ( Node* &head,Node* &tail,int data){

     //check for Empty LL
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
        }
        else {
                //step1:
                Node* newNode = new Node(data);
                //step2:
                newNode -> next = head;
                //step3:
                head = newNode;
        }


}
void insertAtTail(Node* &head, Node* &tail, int data){

      if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
        else {
            //step1: creatae a node
            Node* newNode = new Node(data);
            //step2: connect woth tail ndoe
            tail->next = newNode;
            //step3: update tail;
            tail = newNode;
        }


}
void insertAtPosition(Node* &head, Node* &tail, int data, int position){

    int len = LengthLL(head);

    if(position <= 1){
        insertAtHead(head,tail, data);
    }
    else if(position > len){
        insertAtTail(head,tail,data);
    }
    else{
          // Step 1 create node
          Node* newNode = new Node(data);
            
            Node* prev = NULL;   // previous pointer
            Node* curr = head;   // current pointer
            // step 2 finding position 
            while(position != 1) {
                position--;
                prev = curr; 
                curr = curr->next;
            }
            
            //step3:
            newNode -> next = curr;

            //step4:
            prev -> next = newNode;
            


    }
}

void printLL(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data;

        if (temp->next != NULL) {
            cout << "->";
        }

        temp = temp->next;
    }

    cout << endl;
}


void printAtPosition(Node* head, int position) {

    if (head == NULL) {
        cout << "Linked List is empty\n";
        return;
    }

    if (position <= 0) {
        cout << "Invalid position entered\n";
        return;
    }

    Node* temp = head;
    int currPos = 1;

    while (temp != NULL && currPos < position) {
        temp = temp->next;
        currPos++;
    }

    if (temp == NULL) {
        cout << "Position out of range\n";
    } else {
        cout << temp->data << endl;
    }
}

int main(){

    Node* head= NULL;
    Node* tail= NULL;

    insertAtPosition(head,tail,10,1);
    insertAtPosition(head,tail,20,2);
    insertAtPosition(head,tail,30,3);
    insertAtPosition(head,tail,40,3);
    insertAtPosition(head,tail,50,5);
    insertAtPosition(head,tail,80,100);

    printLL(head);
    printAtPosition(head,3);
    cout<<LengthLL(head);

return 0;
}