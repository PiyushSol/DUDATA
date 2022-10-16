#include <iostream>
using namespace std;

class Deque{
public:
    class Node{
    public:
     int data;
     Node*next ;
     Node* prev;

    Node(int d){
     this->data =d;
     next = prev =NULL;
    }
    };
    Node *head =NULL ,*temp =NULL;

    void pushfront(int el);
    void pushback(int el);
    void erasefront();
    void eraseback();
    int top();
    int back();
    int size();
    bool isEmpty();
};

bool Deque::isEmpty(){
 if(head==NULL){
    cout<<"The Queue is Empty :("<<endl;
    return true;
 }
 else{
    cout<<"The Queue is Not Empty :)"<<endl;
    return false;
 }
}

void Deque::pushfront(int el){
Node* newnode =new Node(el);
if(head ==NULL){
    head= newnode;
    newnode->next = head;
    newnode->prev=head;
    return;
}

temp =head;
while(temp->next!= head){
    temp = temp->next;
}
temp->next = newnode;
newnode->prev=temp;
head->prev = newnode;
newnode->next = head;
head= newnode;
return;
}

void Deque::pushback(int el){
Node* newnode = new Node(el);
if(head==NULL){
    newnode->next=newnode->prev = newnode;
    head=newnode;
    return;
}
temp=head;
while(temp->next !=head){
    temp=temp->next;
}
   temp->next = newnode;
   newnode->next = head;
   newnode->prev=temp;
  return;
}

void Deque::erasefront(){
if(head ==NULL){
    cout<<"The Queue is Completely Popped Out :)"<<endl;
   return;
}
 if(head->next == head){
    head=NULL;
    free(head);
    return;
 }

 temp =head;
 while(temp->next !=head){
    temp = temp->next;
 }
  temp->next= head->next;
  head->next ->prev = temp;
  free(head);
  head =temp->next;
  return;
}

void Deque::eraseback(){
 if(head == NULL){
    cout<<"The Queue is Completely Popped Out :("<<endl;
    }

if(head->next == head){
    head=NULL;
    free(head);
    return;
}

while(temp->next !=head){
    temp = temp->next;
}
 temp->prev->next = head;
 head->prev = temp->prev;
 free(temp);
return;
}

int Deque::top(){
    return head->data;
}

int Deque::back(){
temp =head;
while(temp->next !=head){
    temp= temp->next ;
}
return temp->next->data;
}

int Deque::size(){
int counter=1;
temp = head;
while(temp->next !=head){
    counter++;
    temp =temp->next;
}
return counter;
}

int main(){
int choice,data;
Deque ob;
do{
cout<<"\n**********Queue with Circular Linked List***********"<<endl;
cout<<"\n 1.Push at Front \n 2.Push at Back \n 3.Front \n 4.Back \n 5.IsEmpty \n 6.Erase Front"<<endl;
cout<<" 7.Erase Back \n 8.Size \n 9.Exit"<<endl;
cout<<"\nEnter Your Choice: "<<endl;
cin>>choice;

if(choice ==1){
    cout<<"Enter the Data :"<<endl;
    cin>>data;
    ob.pushfront(data);
}
else if(choice ==2){
    cout<<"Enter the Data :"<<endl;
    cin>>data;
    ob.pushback(data);
}
else if(choice ==3){
    cout<<"The Front Element is : ";
    int ans = ob.top();
    cout<<ans<<endl;
}
else if(choice ==4){
    int ans =ob.back();
      cout<<"The Rear Element is : "<<ans<<endl;
}
else if(choice == 5){
    ob.isEmpty();
}
else if(choice ==6){
    ob.erasefront();
}
else if(choice == 7){
    ob.eraseback();
}
else if(choice ==8){
    int ans =ob.size();
    cout<<"The Size is : "<<ans<<endl;
}
else if(choice ==9){
    exit(0);
}
else{
    cout<<"Invalid Choice !"<<endl;
}

}while(choice>=1 and choice<=9);

return 0;
}
