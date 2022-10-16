#include<iostream>
using namespace std;

class Queue{
  public:
  class Node{
   public:
    int element;
    Node* next;
    int size;

    Node(int d){
     element = d;
     next =NULL;
    }
  };
  Node* temp=NULL , *head=NULL;

    void enqueue(int el);// It is similar to add to Tail method of Linked List.
    void dequeue(); // It is similar to delete head method of Linked List.
    int top();
    int sizes();
    bool isempty();
};

void Queue:: enqueue(int el){
 Node* newnode= new Node(el);
 if(head ==NULL){
    head =newnode;
    newnode->next =newnode;
    return;
 }
  temp =head;
  while(temp->next !=head){
    temp = temp->next;
  }
  temp->next = newnode;
  newnode->next = head;
  return;
}

void Queue:: dequeue(){
 if(head ==NULL){
    cout<<"Queue is Empty :("<<endl;
 }
 temp = head;
 Node* curr = head;
 if(temp->next == temp){
    head = NULL;
    return;
 }
 while(temp->next != head){
    temp =temp->next;
 }
 temp->next = curr->next;
 head= temp->next;
 cout<<"The Popped Element is : "<<curr->element<<endl;
 free(curr);
 return;
}

int Queue:: top(){
    if(isempty()){
        cout<<"The Queue is Empty :("<<endl;
        return -1;
    }
 if(head->next == head){
    int ans = head->element;
    return ans;
 }
 temp =head;
 while(temp->next != head){
    temp = temp->next;
 }
 int ans = temp->next->element;
 return ans;
}

int Queue ::sizes(){
if(head->next == head){
    return 1;
}
int counter=1;
temp = head;
while(temp->next !=head){
    counter++;
    temp =temp->next;
}
return counter;
}

bool Queue::isempty(){
 if(head ==NULL){
    cout<<"The Queue is Empty : ("<<endl;
    return true;
 }
 else {
     cout<<"The Queue is Not Empty :)"<<endl;
        return false;}
}

int main(){
int choice,data;
Queue ob;
do{
cout<<"\n**********Queue with Circular Linked List***********"<<endl;
cout<<"\n 1.Enqueue \n 2.Dequeue \n 3.Front \n 4.Size \n 5.IsEmpty \n 6.Exit"<<endl;
cout<<"\nEnter Your Choice: "<<endl;
cin>>choice;

if(choice ==1){
    cout<<"Enter the Data :"<<endl;
    cin>>data;
    ob.enqueue(data);
}
else if(choice ==2){
    ob.dequeue();
}
else if(choice ==3){
    cout<<"The Front Element is : ";
    int ans = ob.top();
    cout<<ans<<endl;
}
else if(choice ==4){
    int ans =ob.sizes();
      cout<<"The Size is : "<<ans<<endl;
}
else if(choice == 5){
    ob.isempty();
}
else if(choice ==6){
    exit(0);
}
else{
    cout<<"Invalid Choice !"<<endl;
}

}while(choice>=1 and choice<=6);

return 0;
}
