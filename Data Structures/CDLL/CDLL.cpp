#include<iostream>
using namespace std;

template<class T>
class CDLL{
public:
    class Node{
    public:
    T data;
    Node* next;
    Node* prev;

    Node(T val){
     data = val;
     next=NULL;
     prev= NULL;
    }
    };

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
 void display();
 void menu1();

};

template<class T>
void CDLL<T>::addtoHead(){
T data;
cout<<"Enter the Data to add to head : "<<endl;
cin>>data;
Node* newnode = new Node(data);
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

template<class T>
void CDLL<T>::addBetween(){
int position;
T data;
cout<<"Enter the Position after you want to add Data :"<<endl;
cin>>position;
cout<<"Enter the Data : "<<endl;
cin>>data;
Node* newnode =new Node(data);
for(int i=1; i<=position-1; i++){
    temp=temp->next;
}
  newnode->next =temp->next;
  temp->next = newnode;
  newnode->prev = temp;
        if(newnode->next != NULL){
        newnode->next ->prev =newnode;
        }
 return;
}

template<class T>
void CDLL<T>::addtoTail(){
T data;
cout<<"Enter the Data to add to Tail:"<<endl;
cin>>data;
Node* newnode = new Node(data);
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

template<class T>
void CDLL<T>::deleteHead(){
 if(head ==NULL){
    cout<<"Deletion Not Possible !"<<endl;
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

template<class T>
void CDLL<T>::deleteBetween(){
int position;
cout<<"Enter the Position of Node to be Deleted :"<<endl;
cin>>position;
Node* prevnode = NULL;
for(int i=0;i<position-1;i++){
    prevnode = temp;
    temp=temp->next;
}
 prevnode->next = temp->next;
 temp->next->prev= prevnode;

return;
}

template<class T>
void CDLL<T>::deleteTail(){
    if(head == NULL){
    cout<<"Deletion is Not Possible !"<<endl;
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

template<class T>
void CDLL<T>::Search(){
T key;
bool flag = false;
cout<<"Enter the Element to Search : "<<endl;
cin>>key;
temp = head;
while(temp->next !=NULL){
    if(temp->data == key){
        flag= true;
        break;
    }
    temp=temp->next;
}
if(flag){
    cout<<"Element Found :)"<<endl;
}
else
     cout<<"Element Not Found :("<<endl;
}

template<class T>
void CDLL<T>::Reverse(){
Node* prevnode =head;
Node* current = head->next;
temp=head;
if(head == NULL){
    cout<<"List Is Empty :)"<<endl;
    return;
}

while(current != head){
  temp = current->next;
  current->next = prevnode;
  prevnode->prev= current;
  head->next = current;
  current->prev =head;
  prevnode =current;
  current=temp;
}
 head= prevnode;

return;
}


template<class T>
void CDLL<T>::concat(){
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
void CDLL<T>::display(){
if(head ==NULL){
    cout<<"List is Empty :("<<endl;
    return;
}

temp=head;
do{
    cout<<temp->data<<" ";
    temp= temp->next;
}while(temp!= head);
cout<<endl;
return;
}

template<class T>
void CDLL<T>::menu1(){
    int ch,choice;
    cout<<"---Choose the Datatype you want to Work with :"<<endl;
    cout<<"1.Integer \n2.Float \n3.Double \n4.Character \n5.Exit"<<endl;
    cout<<"Enter Your Choice :"<<endl;
    cin>>ch;

    if(ch ==1){
       CDLL<int> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Circular Doubly Linked List) Enter Your Choice-----"<<endl;
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
       CDLL<float> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Circular Doubly Linked List) Enter Your Choice-----"<<endl;
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
       CDLL<double> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Circular Doubly Linked List) Enter Your Choice-----"<<endl;
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
       CDLL<char> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Circular Doubly Linked List) Enter Your Choice-----"<<endl;
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
CDLL<int> obj;
do{
    obj.menu1();
}while(true);

return 0;
}
