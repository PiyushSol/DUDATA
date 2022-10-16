#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue(int s){
    this->size = s;
    front = rear = -1;
    arr = new int[s];
    }

    void enqueue(int element);
    void dequeue();
    int top();
    int sizes();
    bool isempty();
};

void Queue:: enqueue(int element){
 if((front == 0 && rear == size-1)||(rear == (front-1)%(size-1))){
    cout<<"Queue is Full :( "<<endl;
    return;
 }
 else if(front == -1){
    front = rear = 0;
 }
 else if(rear == size-1 && front !=0){
    rear=0;
 }
 else{
    rear++;
 }
 arr[rear]= element;
}

void Queue:: dequeue(){
 if(front == -1){
    cout<<"Queue is Empty :( "<<endl;
    return;
 }
 int ans =arr[front];
 cout<<"Element Popped out is "<<ans<<endl;
if(front == rear){
    front= rear = -1;
 }
 else if(front == size-1){
    front =0;
 }
 else{
    front++;
 }

}

int Queue:: top(){
if(front == -1){
    return -1;
}
int ans =arr[front];
    return ans;
}

int Queue ::sizes(){
if(front == -1){
    cout<<"Queue is Empty:("<<endl;
    return -1;
}

else if(front == rear){
    return 1;
}

else if(front ==0 && rear ==size-1){
    return size-1;
}
else{
        int counter=0;
    for(int i=0 ; i<size-1 ; i++){
        if(arr[i] != -1){
            counter++;
        }
    }
    return counter;
}
}

bool Queue::isempty(){
if(front == -1){
    cout<<"The Queue is Empty :("<<endl;
    return true;
}
else {
cout<<"The Queue is Not Empty :("<<endl;
return false;
}
}
int main(){
int n,choice,data;
cout<<"Enter the Size of Your Queue :"<<endl;
cin>>n;
Queue ob(n);
do{
cout<<"\n**********Queue with Circular Array***********"<<endl;
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

return 0;}
