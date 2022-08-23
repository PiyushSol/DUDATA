#include <iostream>
using namespace std;

int main(){
int n,counter;
cout<<"Enter the Size of Array :"<<endl;
cin>> n;
 int arr[n];
 cout<<"Enter the Elements of Array : " <<endl;
 for( int i=0 ; i<n; i++){
    cin>>arr[i];
 }

 for(int i=1; i<n; i++){
        counter=0;
        int j =i-1;
        int temp= arr[i];

     while( j>=0 && arr[j]> temp){
        arr[j+1]=arr[j];
        j--;
      }
        arr[j+1]= temp;

 }

 cout<<"The Sorted Array is : "<<endl;
 for( int i =0 ; i< n ; i++)
    cout<<arr[i]<<" ";

return 0;
}
