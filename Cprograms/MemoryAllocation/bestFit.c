
#include<stdio.h>
void main()
   {
    int Processes[5];

    struct memory{    //Memory available
       int size;
       int flag;
     }m[5],temp;

    printf("Enter the memory used by the processes\n");
    for (int i=0;i<5;i++)
        scanf("%d",&Processes[i]);

    printf("Enter the size of memory slots available :\n");
    for (int i=0;i<5;i++)
       {
        scanf("%d",&m[i].size);
        m[i].flag=0;
       }

    for (int i=0;i<4;i++)
       {
        for (int j=i+1;j<5;j++)
          {
             if (m[i].size>m[j].size)
                {
                 temp=m[i];
                 m[i]=m[j];
                 m[j]=temp;
                }
          }
       }


    for (int i=0;i<5;i++)
       {
        int j;
        int allocated=0;
        for (j=0;j<5;j++)
           {
            if(Processes[i]<=m[j].size&&m[j].flag==0)
               {

                    printf("Processes %d is allocated to %d Memory\n",i+1,m[j].size);
                    m[j].flag=1;
                    allocated =1;
                    break;

               }
           }
           if (allocated==0)
               printf("Processes %d cannot be allocated\n",i+1);
       }
   }
