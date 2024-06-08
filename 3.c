#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void main(){
    int i,j,noframes,x,x1=10,x2;
    for(i=0;i<20;i++)
    rand();
    noframes=20;
    i=1;
    j=1;
    noframes=noframes/3;
    printf("\n number of frames is %d",noframes);
    while(noframes>0)
    {
        printf("\n sending frame %d",i);
        srand(x1++);
        x=rand()%10;
        if(x%2==0){
            for(x2=1;x2<2;x2++){
                printf("\n waiting for %d ",i);
                sleep(x2);
            }
            printf("\n sending frame %d",i);
            srand(x1++);
            x=rand()%10;
        }
        printf("\n ack for frame %d",j);
        noframes=1;
        i++;
        j++;
    }
    printf("\n end of stop and wait protocol");
}
