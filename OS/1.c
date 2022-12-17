#include <stdio.h>;
#include <stdlib.h>;
#include <uistd.h>;
int main(){
pid_t p, pid;
p=fork();
pid=getpid();
if(p<0){
fprintf(stderr,”Fork Failed \n”);
return 1;
}
printf(“My PID is :%d, My Parent PID is: %d \n”,p,pid);
return 0;
}
