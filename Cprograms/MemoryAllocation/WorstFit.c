#include <stdio.h>
void main(){
 int process[4],i,j;
 struct memory{
   int size,flag;
 }m[4],temp;
 printf("Enter the available memory slots\n");
 for(i=0;i<4;i++){
    scanf("%d",&m[i].size);
    m[i].flag=0;
 }
 printf("Enter the memory used by the processes\n");
 for(i=0;i<4;i++)
    scanf("%d",&process[i]);

  for(i=0;i<3;i++){
    for(j=i+1;j<4;j++){
        if(m[i].size<m[j].size){
            temp = m[i];
            m[i]=m[j];
            m[j]=temp;
        }
    }
  }

  for(i=0;i<4;i++){
    int allocated = 0;
    for(j=0;j<4;j++){
        if(process[i]<=m[j].size && m[j].flag==0){
            printf("Process %d is allocated in memory block %d\n",i+1,m[j].size);
            m[j].flag = 1;
            allocated = 1;
            break;
        }
    }
    if(allocated == 0)
        printf("Process %d is not allocated\n",i+1);
  }
}
for(i=0;i<limit;i++){
  if(p[i].flag==0)
   printf("There is no space for %d process\n",p[i].psize);
}
}
