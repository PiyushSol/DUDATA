#include <iostream>
#include <math.h>

using namespace std;

void isMember( int setA[],int len){
    int key;
    cout<<"Enter Element to be Searched : "<<endl;
    cin>>key;
  for( int i =0 ; i< len ; i++){
    if(setA[i] == key){
        cout<<"Element is the member of set.";
    }
  }
}

void powerSet( int setA[], int len){
 int power = pow(2,len);
 for( int i =0 ; i< power ; i++){
        cout<<" { ";
        
/* The Loop Set and i with every value of j to set the bit. If bit is 0 then bit is not
set else if bit is not 0 then bit is set .*/

for( int j = 0 ; j< len ; j++){
 if((i & (1<<j)) != 0){
    cout<<setA[j]<<" ";
 }

}
cout<<"} ";
 cout<<endl;
}
}

int main(){
int len;
cout<<"Enter the Size of Set : ";
cin>>len;
cout<<endl;
int setA[len];
cout<<"Enter the Elements of Set : ";

for( int i =0 ; i< len ; i++){
    cin>>setA[i];
}
cout<<endl;
isMember(setA,len);
powerSet(setA, len);



return 0;
}