#include <stdio.h>
int main(void)
{
int i,j,n,time,sum_wait=0,sum_turnaround=0,smallest;
int at[10],bt[10],pt[10],rt[10],remain;
printf("\nEnter number of Processes: ");
scanf("%d",&n);
remain=n;
printf("\nEnter Arrival Time, Burst Time and Priority for:\n ");
for(i=0;i<n;i++)
{
printf("\nProcess %d: ",i+1);
scanf("%d",&at[i]);
scanf("%d",&bt[i]);
scanf("%d",&pt[i]);
rt[i]=bt[i];
}
pt[9]=11;
for(time=0;remain!=0;time++)
{
smallest=9;

for(i=0;i<n;i++)
{
if(at[i]<=time && pt[i]<pt[smallest] && rt[i]>0)
{
smallest=i;
}
}
rt[smallest]--;
if(rt[smallest]==0)
{
remain--;
printf("\nProcess %d: Waiting Time= %d\t\tTurn Around Time=%d",smallest+1,time+1-at[smallest],time+1-at[smallest]- bt[smallest]);
sum_wait+=time+1-at[smallest];
sum_turnaround+=time+1-at[smallest]-bt[smallest];
}
}
float wt=sum_wait*1.0/n;
float tat=sum_turnaround*1.0/n;
printf("\nAverage Waiting Time: %f",wt);
printf("\nAverage Turn Around Time:�%f",tat);

return;
}
