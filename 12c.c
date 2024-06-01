#include<stdio.h>
int main()
{
int n,m[20],i,j,sb[20],b[20][20],x;
printf("\n enter no of files");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\n enter index block of file %d:",i+1);
scanf("%d",&sb[i]);
printf("\n enter length of file %d: ",i+1);
scanf("%d",&m[i]);
printf("enter blocks of file %d:",i+1);
scanf("%d",&b[i][j]);
}
printf("\nFile\tIndex\tLength\n");
for(i=0;i<n;i++){
printf("%d\t%d\t%d\n",i+1,sb[i],m[i]);
}
printf("\n Enter file name:");
scanf("%d",&x);
printf("\nfile name:%d",x);
printf("\nIndex is :%d",sb[x-1]);
printf("\nBlocks occupied are:");
for(j=0;j<m[x-1];j++)
printf("%4d",b[x-1][j]);
return 0;
}
