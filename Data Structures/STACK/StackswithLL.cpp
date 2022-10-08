#include <iostream>
using namespace std;

class Stack{
public:
    class Node{
    public:
      int data;
      Node* next;

     Node(int val){
       data = val;
       next = NULL;
     }
             };
   Node* head=NULL ,*temp=NULL;
   void push(int element, int size);
   void pop(int size);
   void peek();
   bool isEmpty();
   void menu();
};

void Stack:: menu(){
cout<<"******Stack Implementation with Arrays******"<<endl;
cout<<" 1.Push into Stack \n 2.Pop Element out of Stack \n 3.Show Top Element"<<endl;
cout<<" 4.Check If Stack is Empty \n 5.Exit "<<endl;
}

void Stack::push(int element,int size){
    Node* newnode = new Node(element);
  if(head ==NULL){
     head=newnode;
     return;
  }
  temp =head;
  while(temp->next !=NULL){
    temp = temp->next;
  }
    temp->next =newnode;
}

void Stack::pop(int size){
if(head ==NULL){
    cout<<"Stack is Empty :("<<endl;
}
temp = head;
int counter=size;
Node* prev=NULL;
while(temp->next !=NULL){
        counter--;
       prev=temp;
       temp=temp->next;
}
   if(counter<0){
    cout<<"Stack Underflow :("<<endl;
     return;
 }
   cout<<"Popping "<< temp->data <<" out of Stack ."<<endl;
   free(temp);
 prev->next= NULL;
}

void Stack::peek(){
 temp =head;
 if(temp ==NULL){
    cout<<"Stack is Completely Popped Out "<<endl;
 }

 while(temp->next!=NULL){
    temp=temp->next;
 }
   cout<<"Top Element of The Stack is : "<< temp->data <<endl;
}

bool Stack:: isEmpty(){
 if(head == NULL){
    cout<<"Stack is Empty :("<<endl;
    return true; }
 else{
    cout<<"Stack is Not Empty :)"<<endl;
    return false; }
}

int main(){
int size, data , choice;
  Stack obj;
  cout<<"Enter the Size of Your Stack :"<<endl;
  cin>>size;

  do{
    obj.menu();
    cout<<" Enter your Choice : "<<endl;
    cin>>choice;

      switch(choice){
  case 1:
      for(int i=0 ; i<size ; i++){
    cout<<"Enter Data to Push into Stack : "<<endl;
    cin>>data;
    cout<<"Pushing "<< data <<" into Stack "<<endl;
    obj.push(data,size);
  }
        break;
  case 2:obj.pop(size);
        break;
  case 3:obj.peek();
        break;
  case 4:obj.isEmpty();
        break;
  case 5:exit(0);
        break;
  default:
       cout<<"Enter a Valid Choice !"<<endl;
       break;
  }
  }while(choice>=1 && choice<=5);

return 0;
}
