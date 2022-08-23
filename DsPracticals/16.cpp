#include <iostream>
int Matrix[100][100];

using namespace std;

class Graph{
public:
    int v,e, ver1, ver2;

  void getData( ){
     cout<<"Enter the # of Vertices : "<<endl;
  cin>>v;
  cout<<"Enter the # of Edges : "<<endl;
  cin>>e;

  int i,j;
  cout<<"Enter Adjacent Vertices : "<<endl;
  for( i=1 ; i<= e ; i++){
        cin>>ver1>>ver2;
        Matrix[ver1][ver2]=1;
        Matrix[ver2][ver1]=1;
    }

  cout<<"The Adjacency Matrix For Graph is : "<<endl;
   for( i=1 ; i<=v ; i++){
      for(j = 1 ; j<= v ; j++){
        cout<<Matrix[i][j]<<" ";
      }
      cout<<endl;
  }
  }
  void isComplete(){
      int res = (v * (v-1))/2;
     if( e = res)
        cout<<"The Graph is Complete"<<endl;
     else
        cout<<"The Graph is not Complete" <<endl;
  }



};

int main(){

  Graph g1;
   g1.getData();
   g1.isComplete();
return 0;

}
