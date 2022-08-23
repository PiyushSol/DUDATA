#include <iostream>
#include <math.h>
using namespace std;

int main(){
int terms;

cout<<"Enter the Number of Terms : "<<endl;
cin>>terms;
double coeff[terms];
double expo[terms];
for( int  i=1 ; i<=terms ; i++){
    cout<<"Enter the Coefficient and Power of Term "<< i <<" : "<<endl;
    cin>>coeff[i]>>expo[i];
}

cout<<"The Function is : "<<endl;
for(int i =1; i<=terms ; i++){
    if(coeff[i]>0)
        cout<<" + ";
    else
        if(coeff[i]<0)
        cout<<" - ";
    cout<<abs(coeff[i]);
     if(expo[i]>0)
        cout<<"( x^ "<<expo[i]<<" ) ";
}
cout<<endl;
cout<<"Enter the Value to determine Function "<<endl;
int val;
cin>> val;

double res =0 ;

for( int i =1 ; i<=terms ; i++){
  res += coeff[i] * (pow(val,expo[i]));
}
cout<<"The Value of Function at x = "<<val <<" is : "<<res;

return 0;
}