#include <iostream>

using namespace std;
int main(){

int v, e, start_v ,end_v;
int in_deg =0 , out_deg=0 ;
int matrix[100][100];

cout<<"Enter the # of Vertices "<<endl;
cin >> v;
cout<<"Enter the # of Edges " <<endl;
cin>>e;

for( int i=1; i <=e ; i++){
 cout<<"Enter the Starting and Ending edge : "<<endl;
 cin>>start_v >> end_v;
    matrix[start_v][end_v]=1;
    matrix[end_v][start_v]=-1;
   }

   cout<<"The Matrix for Given Data is : "<<endl;
   for( int i =1; i<=v; i++){
    for(int j=1 ; j<=v ; j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
   }

   cout<<endl;

for( int i=1; i<e ;i++){
    for( int j=1 ; j<e ; j++){
        if(matrix[i][j] == 1){
            out_deg +=1;
        }
    }
    cout<<"Out Degree for Vertex  "<<  i <<" : "<<out_deg<<endl;
    out_deg =0;
}

 cout<<endl;

for( int i=1; i< e ;i++){
    for( int j=1 ; j< e ; j++){
        if(matrix[i][j] == -1){
            in_deg +=1;
        }
    }
    cout<<"In Degree for Vertex  "<<  i <<" : "<<in_deg<<endl;
    in_deg = 0;
}

return 0;
}