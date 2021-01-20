#include<stdio.h>
int main(void)
{
int n ,total=0,i;
double avg,weight[1000];
printf("enter no of elephant seals");
scanf("%d",&n);
printf("enter %d number",n);
for(i=1;i<=n;i++)
{
scanf("%lf",&weight[i]);
total=total+weight[i];
avg=total/n;

}
printf("average weight is:%lf",avg);

return 0;
}