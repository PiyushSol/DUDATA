#include <iostream>
using namespace std;

template <class T>
class CSLL{
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

template<class T>
void CSLL<T>::addtoHead(){
T data ;
cout<<"Enter the Data to add to Head :"<<endl;
cin>>data;
Node* newnode = new Node(data);
if(head ==NULL){
    newnode->next =newnode;
    head = newnode;
    return;
}
 temp = head;
 while(temp->next !=head){
    temp = temp->next;
 }
 temp->next = newnode;
 newnode->next = head;
 head= newnode;
 return;
}

template<class T>
void CSLL<T>::addtoTail(){
T data;
cout<<"Enter the data you want to add to Tail : "<<endl;
cin>>data;
Node* newnode = new Node(data);
if(head == NULL){
    head =newnode;
    newnode->next = newnode;
    return;
}
temp = head;
while(temp->next !=head){
    temp= temp->next;
}
  temp->next = newnode;
  newnode->next = head;
  return;
}

template<class T>
void CSLL<T>::addBetween(){
T data;
int position;
cout<<"Enter the Position to add Data at :"<<endl;
cin>>position;
cout<<"Enter the Data :"<<endl;
cin>>data;
if(head == NULL){
    cout<<"The Previous Node cannot be NULL"<<endl;
}
Node* newnode= new Node(data);
temp =head;
Node* prev=NULL;
for(int i=0; i<=position-1; i++){
    prev= temp;
    temp =temp->next;
}
    prev->next = newnode;
    newnode->next = temp;
    return;
}

template<class T>
void CSLL<T>::deleteHead(){
 if(head == NULL){
    cout<<"List is Empty :) "<<endl;
    return;
 }
 Node* prev = head ;
 Node* current =head;
 if(prev-> next == prev){
    head=NULL;
    return;
 }
  while(prev->next != head){
    prev = prev->next;
  }
  prev->next = current->next;
  head = prev->next;
  free(current);
return;
}

template<class T>
void CSLL<T>::deleteBetween(){
int position;
cout<<"Enter Position After which you want to Delete Node:"<<endl;
cin>>position;
Node* prev=NULL;
temp =head;
for(int i=1 ;i<=position ; i++){
     prev= temp;
    temp = temp->next;
}
    prev->next= temp->next;
   free(temp);
 return;
}

template<class T>
void CSLL<T>::deleteTail(){
Node* prev=NULL;
if(head==NULL){
    cout<<"List is Empty :)"<<endl;
}
if(head-> next == head){
    head=NULL;
    return;
 }

temp = head;
while(temp->next !=head){
   prev=temp;
   temp=temp->next;
}
  prev->next = temp->next;
  free(temp);
 return;
}

template<class T>
void CSLL<T>::Search(){
T key ;
cout<<"Enter the Data you want to Search :"<<endl;
cin>>key;
temp = head;
bool flag=false;
while(temp->next !=head){
    if(temp->data == key){
        flag = true;
        break;
    }
    flag= false;
    temp=temp->next;
}
   if(flag){
    cout<<"Element Found :) "<<endl;
    return;
   }
   else{
    cout<<"Element Not Found :( "<<endl;
    return;
   }
   return;
}

template<class T>
void CSLL<T>::Reverse(){
 if(head ==NULL)
    return;
 Node* prev =NULL;
 Node* current =head;
 Node* next;
 do{
    next = current->next;
    current->next = prev;
    prev= current;
    current = next;
 }while(current != head);

 head->next = prev;
 head = prev;
 return;
}

template<class T>
void CSLL<T>:: concat(){
int n;
cout<<"Enter the Number of elements in your List :"<<endl;
cin>>n;
for(int i=0; i<n ;i++){
    addtoTail();
}
return;
}

template<class T>
void CSLL<T>::menu1(){
    int ch,choice;
    cout<<"---Choose the Datatype you want to Work with :"<<endl;
    cout<<"1.Integer \n2.Float \n3.Double \n4.Character \n5.Exit"<<endl;
    cout<<"Enter Your Choice :"<<endl;
    cin>>ch;

    if(ch ==1){
       CSLL<int> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Circular Singly Linked List) Enter Your Choice-----"<<endl;
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
       CSLL<float> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Circular Singly Linked List) Enter Your Choice-----"<<endl;
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
       CSLL<double> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Circular Singly Linked List) Enter Your Choice-----"<<endl;
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
       CSLL<char> obj;
        do{
     cout<<endl<<"-----Linked-List Functions(Circular Singly Linked List) Enter Your Choice-----"<<endl;
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


template<class T>
void CSLL<T>::display(){
 temp= head;
  if(head ==NULL){
    cout<<"NULL"<<endl;
    return;
  }

  do {
        cout << temp->data <<" ";
        temp = temp->next;
     }while (temp != head);
   cout<<endl;
   return;
}

int main(){
 CSLL <int> obj;
 do{
    obj.menu1();
 }while(true);
return 0;
}
