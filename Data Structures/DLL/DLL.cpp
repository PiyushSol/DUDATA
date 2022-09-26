#include<iostream>
using namespace std;

template <class T>
class DLL{
class Node{
 public:
     T data;
     Node* next;
     Node* prev;

 public:
    Node(T val){
        data= val;
        next=NULL;
        prev=NULL;
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
 void display();
 void menu1();
};

template<class T>
void DLL<T>::display(){
  temp = head;
  while(temp!= NULL){
    cout<<temp->data<<" <==> ";
    temp= temp->next;
  }
    cout<<"NULL"<<endl;
}

template<class T>
void DLL<T>::addtoHead(){
T data;
cout<<"Enter the Data to add to Head :"<<endl;
cin>>data;
Node* newnode = new Node(data);
    newnode->next = head;
    newnode->prev= NULL;

    if(head !=NULL)
    head->prev = newnode;
    head = newnode;
}

template<class T>
void DLL<T>::addBetween(){
 T data;
 int position , counter=0;
 cout<<"Enter the Data to add at Specific Position :"<<endl;
 cin>>data;
 cout<<"Enter the Position after which you want to add Data : "<<endl;
 cin>>position;
 Node* newnode = new Node(data);
 temp = head;
  if(temp == NULL){
    cout<<"The Previous Node cannot be NULL !"<<endl;
  }

  while(temp!=NULL){
      counter++;
      if(position == counter){
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
        if(newnode->next != NULL){
        newnode->next ->prev =newnode;
        }
        break;
      }
        temp = temp->next;
        }
}

template<class T>
void DLL<T>::addtoTail(){
T data;
cout<<"Enter the Data to add to Tail :"<<endl;
cin>>data;
Node* newnode = new Node(data);
if(head ==NULL){
    head= newnode;
    return;
}
temp =head;
while(temp->next != NULL){
    temp= temp->next;
}
  temp->next = newnode;
  newnode->prev = temp;
}

template<class T>
void DLL<T>::deleteHead(){
    temp =head;
    if(head == NULL){
        cout<<"Linked List is Empty , Nothing to delete !"<<endl;
        return;
    }

    if(temp->next ==NULL){
        head = NULL;
        return;
    }
    head = head->next;
    head->prev=NULL;
    delete(temp);
}

template<class T>
void DLL<T>::deleteBetween(){
Node* prevnode=NULL;
int position;
cout<<"Enter the Position of the Node to be Deleted :"<<endl;
cin>>position;
temp = head;
for(int i=0; i<position-1;i++){
    prevnode = temp;
    temp= temp->next;
}
    prevnode->next->prev =temp;
    prevnode->next = temp->next;
    delete(temp);
}

template<class T>
void DLL<T>::deleteTail(){
temp = head;
Node *prevnode=NULL;
while(temp->next!=NULL){
    prevnode=temp;
    temp = temp->next;
}

   if(prevnode->next !=NULL)
     prevnode->next = NULL;
  delete(temp);
}

template<class T>
void DLL<T>::Search(){
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
void DLL<T>::Reverse(){
 Node *current= head;
 while(current != NULL){
     temp =current->prev;
     current->prev = current->next;
    current->next = temp;
    current = current->prev;
    }
    if(temp !=NULL)
        head = temp->prev;
}

template<class T>
void DLL<T>::concat(){
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
void DLL<T>::menu1(){
    int ch,choice;
    cout<<"---Choose the Datatype you want to Work with :"<<endl;
    cout<<"1.Integer \n2.Float \n3.Double \n4.Character \n5.Exit"<<endl;
    cout<<"Enter Your Choice :"<<endl;
    cin>>ch;

    if(ch ==1){
       DLL<int> obj;
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
       DLL<float> obj;
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
       DLL<double> obj;
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
       DLL<char> obj;
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
    DLL<int> obj;
 do{
    obj.menu1();
 }while(true);

return 0;
}
