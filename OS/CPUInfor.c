#include <stdlib.h>;
#include <stdio.h>;
int main(){
printf("\n The Kernel Version is : \n");
system("cat/proc/sys/kernel/osrelease");
printf("\n The CPU information is: \n");
system("cat/proc/cpuinfo \n");
return 0;
}
