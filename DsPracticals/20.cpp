#include <iostream>
using namespace std;

int Calc_Leaf(int int_v , int m_child){
 int total_vert=0, leaf_node=0;
  total_vert = (m_child * int_v) + 1;
  leaf_node = total_vert - int_v;
  return leaf_node;
}

int main(){
 int i,  m, res=0;
 cout<<"Enter the 'm' Childrens of the Tree ."<<endl;
 cin>> m;
 cout<<"Enter the Internal Vertices of Tree ."<<endl;
 cin>>i;

 cout<<"The Leaf Nodes for the Given Trees are. "<<endl;
 res=Calc_Leaf(i,m);
 cout<<res;

return 0;
}