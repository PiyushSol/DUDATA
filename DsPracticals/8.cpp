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

 for(int i=0 ; i<n; i++){
 for(int i=0 ; i<n; i++){
        counter=0;
    for( int j=0 ; j<n; j++){
        if(arr[j]>arr[j+1]){
                counter++;
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        cout<<arr[j]<<" ";
    }
    cout<<" The Number of Comparisons  for Pass : "<<i+1<<" is : "<< counter<<endl;
 }

 cout<<"The Sorted Array is : "<<endl;
 for( int i =0 ; i< n ; i++)
    cout<<arr[i]<<" ";

return 0;
}