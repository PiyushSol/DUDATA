#include <iostream>
using namespace std;

void BinarySearch( int arr[], int key , int f , int l){
   if(f > l){
    cout<<"Element Does not exist ! "<<endl;
    return;
   }
  else
    {
  int mid = (f+l)/2;
  if( key == arr[mid]){
    cout<< "Element Found at : "<<mid+1<<endl;
  }
  else
  if( key < arr[mid]){
    BinarySearch(arr,key,f,mid-1);
  }
  else
  if(key > arr[mid]){
    BinarySearch(arr,key,mid+1,l);
  }
  }
}

int main(){
int n,key;
cout<<"Enter the Size of Array : "<<endl;
cin>>n;
int arr[n];
cout<<"Enter the Elements of Sorted Array : "<<endl;
for( int i=0; i<n ; i++){
    cin>>arr[i];
}
cout<<"Enter the Key to Search : "<<endl;
cin>>key;
int f =0;
int l= n-1;
BinarySearch(arr,key,f,l);
return 0;

}