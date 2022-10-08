#include <iostream>
using namespace std;

class Stack{
 private:
   int size;
   int *arr;
   int top;

public:
   Stack(int s){
      this->size= s;
      arr = new int[size];
      top = -1;
   }

   void push(int element);
   void pop();
   void display();
   int peek();
   bool isEmpty();
   void menu();
};

void Stack:: menu(){
cout<<"******Stack Implementation with Arrays******"<<endl;
cout<<" 1.Push into Stack \n 2.Pop Element out of Stack \n 3.Show Top Element"<<endl;
cout<<" 4.Check If Stack is Empty \n 5.Exit "<<endl;
}

void Stack:: push(int element){
   if(size - top >1){
      top++;
      arr[top] = element;
   }
   else{
      cout<<"Stack Overflow "<<endl;
   }
}

void Stack:: pop(){
  if(top>=0){
    cout<<"Popping "<<arr[top]<<" out of Stack ."<<endl;
    top--;
  }
  else{
    cout<<"Stack Underflow :("<<endl;
  }
}

int Stack::peek(){
if(top>=0 && top<size){
    int ans =arr[top];
    return ans;
}
else{
    cout<<"Stack is Completely Popped out."<<endl;
    return -1;
}
}

bool Stack:: isEmpty(){
if(top == -1){
    cout<<"Stack is Empty"<<endl;
    return true;
}
else{
    cout<<"Stack is not Empty"<<endl;
    return false;
}
}

int main(){
  int size, data , choice,ans;
  cout<<"Enter the Size of Your Stack :"<<endl;
  cin>>size;
  Stack obj(size);
  do{
    obj.menu();
    cout<<" Enter your Choice : "<<endl;
    cin>>choice;

      switch(choice){
  case 1: for(int i=0 ; i<size ; i++){
    cout<<"Enter Data to Push into Stack : "<<endl;
    cin>>data;
    cout<<"Pushing "<< data <<" into Stack "<<endl;
    obj.push(data);
  }
        break;
  case 2:obj.pop();
        break;
  case 3:ans = obj.peek();
        cout<<"Top Element of Stack is: "<< ans <<endl;
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
