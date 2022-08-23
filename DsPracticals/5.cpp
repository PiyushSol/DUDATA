#include <iostream>
using namespace std;

void Fibo( int a , int b, int n ){
    int c;
   if(n == 0)
    return;

   c = a+b;
   cout<<c<<" ";
   Fibo(b,c, n-1);

}

int main(){
int a=0,b=1,n;
cout<<"Enter the Number till you Want Fibonacci Series to be Printed : "<<endl;
cin>>n;
cout<<"The Fibonacci Series till "<< n<< " is :"<<endl;
cout<<a<<" ";
cout<<b<<" ";
Fibo(a,b,n-2);
return 0;
}