#include<stdio.h>
void main(){
int i,j,temp,framearr[20],pages,pageno,frames,memsize,log,pagesize,prosize,base;
printf("enter the process size:");
scanf("%d",&prosize);
printf("\n enter the main memory size:");
scanf("%d",&memsize);
printf("\n enter the page size:");
scanf("%d",&pagesize);
pages=prosize/pagesize;
printf("\n The process is divided into %d pages",pages);
frames=memsize/pagesize;
printf("\n \n The main memory is divided into  %d frames\n",frames);
for(i=0;i<frames;i++)
framearr[i]=-1;
for(i=0;i<pages;i++){
pos:printf("\n enter the frame number of page %d:",i);
scanf("%d",&temp);
if (temp>=frames){
printf("\n\t **** invalid frmae number***\n");
goto pos;
}
for(j=0;j<frames;j++)
if(temp==j)
framearr[temp]=i;
}
printf("\n\n Frame\tpageno\tValidationBit\n---\t---\t-----");
for(i=0;i<frames;i++){
printf("\n %d \t %2d \t",i,framearr[i]);
if(framearr[i]==-1)
printf(" 0");
else
printf(" 1");
}
printf("\n Enter the logical address:");
scanf("%d",&log);
printf("\n Enter the base address:");
scanf("%d",&base);
pageno=log/pagesize;
for(i=0;i<frames;i++)
if(framearr[i]==pageno){
temp=i;
break;
}
j=log%pagesize;
temp=base+(temp*pagesize)+j;
printf("\n Physical address is :%d",temp);
}
