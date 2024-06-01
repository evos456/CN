#include<stdio.h>
int main(){
int n,i,j,b[20],sb[20],t[20],x,c[20][20];
printf("enter no of files:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter no of blocks occupied by the file %d",i+1);
scanf("%d",&b[i]);
printf("enter the starting block of file %d",i+1);
scanf("%d",&sb[i]);
t[i]=sb[i];
for(j=0;j<b[i];j++)
c[i][j]=sb[i]++;
}
printf("filename\t startblock\t length\n");
for(i=0;i<n;i++)
printf("%d\t%d\t%d\n",i+1,t[i],b[i]);
printf("enter file name:");
scanf("%d",&x);
printf("\n Filename is %d ",x);
printf("\n length is :%d ",b[x-1]);
printf("\n blocks occupied:");
for(i=0;i<b[x-1];i++)
printf("%4d ",c[x-1][i]);
return 0;
}
