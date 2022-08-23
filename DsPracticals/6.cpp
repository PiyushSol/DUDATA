#include <iostream>
using namespace std;

void Tower_of_Hanoi(int disk, string source , string helper , string dest){
     if(disk<1){
        cout<<"Enter Disks Greater Than 0"<< endl;
     }
     else
     if( disk == 1){
        cout<<"Transfer Disk " << disk << " From " <<source << " to "<<dest<<endl;
        return;
     }

    Tower_of_Hanoi( disk -1 ,source,dest,helper );
    cout<<" Transfer Disk " << disk << " From "<<source<<" to "<<dest<<endl;
    Tower_of_Hanoi(disk -1,helper,source,dest);
}

int main(){
 int d;
 cout<<"Enter the Number of Disks :" <<endl;
 cin>>d;

  Tower_of_Hanoi(d," S ", " H ", " D " );
return 0;
}