#include <iostream>
using namespace std;

template <class T>
class SLL{
 class Node{
 public:
     T data;
     Node* next;

 public:
    Node(T val){
        data= val;
        next=NULL;
    }
 };

 public:
    Node* head=NULL, *temp=NULL;

 void addtoHead();
 void addBetween();
 void addtoTail();
 void deleteHead();
 void deleteBetween();
 void deleteTail();
 void Search();
 void Reverse();
 void concat();
 void menu1();
 void display();
};

template <class T>
void SLL<T>:: addtoHead(){
    T data;
cout<<"Enter the Data :"<<endl;
cin>>data;
 Node* newnode = new Node(data);
 if(head == NULL)
    head=newnode;
 else
 {
     newnode->next = head;
     head=newnode;
 }
}

template <class T>
void SLL<T>::display(){
temp = head;
    while(temp!=NULL){
          cout<<temp->data<<" -> ";
           temp = temp->next;
          }
          cout<<"NULL"<<endl;
}

template<class T>
void SLL<T>::addBetween(){
int position,counter=0;
T data;
cout<<"Enter the Position to add a node : "<<endl;
cin>>position;
cout<<"Enter the Data  :"<<endl;
cin>>data;
Node* newnode= new Node(data);
temp = head;
if(head == NULL){
    cout<<"The Previous Node cannot be NULL"<<endl;
}

while(temp!=NULL){
        counter++;
    if(position == counter){
        newnode->next = temp->next;
        temp->next = newnode;
        break;
    }
    temp= temp->next;
}
}

template <class T>
void SLL<T>:: addtoTail(){
T data;
cout<<"Enter the Data : "<<endl;
cin>>data;
Node* newnode = new Node(data);
if(head == NULL){
    head = newnode;
    head->next = NULL;
    return;
}
temp = head;
while(temp->next !=NULL){
    temp= temp->next;
}
temp->next = newnode;
}

template<class T>
void SLL<T>:: deleteHead(){
temp = head;
head= head->next;
delete(temp);
}

template<class T>
void SLL<T>::deleteBetween(){
int position;
Node* prev=NULL;
cout<<"Enter the Position to delete a node : "<<endl;
cin>>position;
temp = head;
for(int i=0 ; i<position -1; i++){
    prev= temp;
    temp = temp->next;
}
 prev->next = temp->next;
 delete(temp);

}

template<class T>
void SLL<T>:: deleteTail(){
temp = head;
Node* prev= NULL;
while(temp->next !=NULL){
    prev=temp;
    temp=temp->next;
}
 delete(temp);
 prev->next= NULL;
}

template <class T>
void SLL<T>::Search(){
T val;
bool flag=false;
cout<<"Enter the Element you want to Search :"<<endl;
cin>>val;
temp=head;
while(temp!=NULL){
    if(temp->data == val){
            flag= true;
    }
       temp= temp->next;
}
if(flag){
    cout<<"Element Found :) "<<endl;
}
else {
     cout<<"Element Not Found :("<<endl;
}
}

template <class T>
void SLL<T>::Reverse(){
Node* current =head;
Node* prev=NULL , *nextnode =NULL;

while(current!=NULL){
    nextnode= current->next;
    current->next =prev;
    prev=current;
    current= nextnode;
    }
  head = prev;
}

template <class T>
void SLL<T>:: concat(){
int n;
T data;
Node* head1 =NULL;
temp =head;
cout<<"Enter the Number of elements in Your Linked List: "<<endl;
cin>>n;

for(int i=0 ; i<n ; i++){
    addtoTail();
}
}

template<class T>
void SLL<T>::menu1(){
    int ch,choice;
    cout<<"---Choose the Datatype you want to Work with :"<<endl;
    cout<<"1.Integer \n2.Float \n3.Double \n4.Character \n5.Exit"<<endl;
    cout<<"Enter Your Choice :"<<endl;
    cin>>ch;

    if(ch ==1){
       SLL<int> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Singly) Enter Your Choice-----"<<endl;
cout<<"1.Add a Node to Head . \n2.Add a Node to a Specific Position. \n3.Add a Node to Tail"<<endl;
cout<<"4.Delete Node From Head. \n5.Delete Node From a Position. \n6.Delete Node From Tail."<<endl;
cout<<"7.Search a Element. \n8.Reverse the Linked List. \n9.Concat two List together. \n10.Display the List. \n11.Previous Menu"<<endl;
cout<<"12.Exit"<<endl;
cout<<"Enter your Choice : "<<endl;
cin>>choice;

        switch(choice){
            case 1:obj.addtoHead();
            obj.display();
            break;
            case 2:obj.addBetween();
            obj.display();
            break;
            case 3:obj.addtoTail();
            obj.display();
            break;
            case 4:obj.deleteHead();
            obj.display();
            break;
            case 5:obj.deleteBetween();
            obj.display();
            break;
            case 6:obj.deleteTail();
            obj.display();
            break;
            case 7:obj.Search();
            break;
            case 8:obj.Reverse();
            cout<<"The List After reversing is :"<<endl;
            obj.display();
            break;
            case 9:obj.concat();
            cout<<"The Concated List is : "<<endl;
            obj.display();
            break;
            case 10:obj.display();
            break;
            case 11:menu1();
            break;
            case 12:exit(0);
            break;
            default:
                break;
        }
}while(choice>=1 &&choice <=12);
}

else if(ch ==2){
       SLL<float> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Singly) Enter Your Choice-----"<<endl;
cout<<"1.Add a Node to Head . \n2.Add a Node to a Specific Position. \n3.Add a Node to Tail"<<endl;
cout<<"4.Delete Node From Head. \n5.Delete Node From a Position. \n6.Delete Node From Tail."<<endl;
cout<<"7.Search a Element. \n8.Reverse the Linked List. \n9.Concat two List together. \n10.Display the List. \n11.Previous Menu"<<endl;
cout<<"12.Exit."<<endl;
cout<<"Enter your Choice : "<<endl;
cin>>choice;

        switch(choice){
            case 1:obj.addtoHead();
            obj.display();
            break;
            case 2:obj.addBetween();
            obj.display();
            break;
            case 3:obj.addtoTail();
            obj.display();
            break;
            case 4:obj.deleteHead();
            obj.display();
            break;
            case 5:obj.deleteBetween();
            obj.display();
            break;
            case 6:obj.deleteTail();
            obj.display();
            break;
            case 7:obj.Search();
            break;
            case 8:obj.Reverse();
            cout<<"The List After reversing is :"<<endl;
            obj.display();
            break;
            case 9:obj.concat();
            cout<<"The Concated List is : "<<endl;
            obj.display();
            break;
            case 10:obj.display();
            break;
            case 11:menu1();
            break;
            case 12:exit(0);
            break;
            default:
                break;
        }
}while(choice>=1 &&choice <=12);
}
    if(ch ==3){
       SLL<double> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Singly) Enter Your Choice-----"<<endl;
cout<<"1.Add a Node to Head . \n2.Add a Node to a Specific Position. \n3.Add a Node to Tail"<<endl;
cout<<"4.Delete Node From Head. \n5.Delete Node From a Position. \n6.Delete Node From Tail."<<endl;
cout<<"7.Search a Element. \n8.Reverse the Linked List. \n9.Concat two List together. \n10.Display the List. \n11.Previous Menu"<<endl;
cout<<"12.Exit."<<endl;
cout<<"Enter your Choice : "<<endl;
cin>>choice;

        switch(choice){
            case 1:obj.addtoHead();
            obj.display();
            break;
            case 2:obj.addBetween();
            obj.display();
            break;
            case 3:obj.addtoTail();
            obj.display();
            break;
            case 4:obj.deleteHead();
            obj.display();
            break;
            case 5:obj.deleteBetween();
            obj.display();
            break;
            case 6:obj.deleteTail();
            obj.display();
            break;
            case 7:obj.Search();
            break;
            case 8:obj.Reverse();
            cout<<"The List After reversing is :"<<endl;
            obj.display();
            break;
            case 9:obj.concat();
            cout<<"The Concated List is : "<<endl;
            obj.display();
            break;
            case 10:obj.display();
            break;
            case 11:menu1();
            break;
            case 12:exit(0);
            break;
            default:
                break;
        }
}while(choice>=1 &&choice <=12);
}

 if(ch ==4){
       SLL<char> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Singly) Enter Your Choice-----"<<endl;
cout<<"1.Add a Node to Head . \n2.Add a Node to a Specific Position. \n3.Add a Node to Tail"<<endl;
cout<<"4.Delete Node From Head. \n5.Delete Node From a Position. \n6.Delete Node From Tail."<<endl;
cout<<"7.Search a Element. \n8.Reverse the Linked List. \n9.Concat two List together. \n10.Display the List. \n11.Previous Menu"<<endl;
cout<<"12.Exit"<<endl;
cout<<"Enter your Choice : "<<endl;
cin>>choice;

        switch(choice){
            case 1:obj.addtoHead();
               obj.display();
            break;
            case 2:obj.addBetween();
            obj.display();
            break;
            case 3:obj.addtoTail();
            obj.display();
            break;
            case 4:obj.deleteHead();
            obj.display();
            break;
            case 5:obj.deleteBetween();
            obj.display();
            break;
            case 6:obj.deleteTail();
            obj.display();
            break;
            case 7:obj.Search();
            break;
            case 8:obj.Reverse();
            cout<<"The List After reversing is :"<<endl;
            obj.display();
            break;
            case 9:obj.concat();
            cout<<"The Concated List is : "<<endl;
            obj.display();
            break;
            case 10:obj.display();
            break;
            case 11:menu1();
            break;
            case 12:exit(0);
            default:
                break;
        }
}while(choice>=1 &&choice <=12);
}
  if(ch == 5){
    exit(0);
  }
}

int main(){
   SLL<int> obj;
 do{
    obj.menu1();
 }while(true);

return 0;
}
