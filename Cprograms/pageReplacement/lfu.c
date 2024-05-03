#include<stdio.h>
void main()
{
  int rs[50], i, j, k, m, f, cntr[20], a[20], min, pf=0;
  printf("\nEnter number of page references -- ");
  scanf("%d",&m);
  printf("\nEnter the reference string -- ");
  for(i=0;i<m;i++)
  scanf("%d",&rs[i]);
  printf("\nEnter the available no. of frames -- ");
  scanf("%d",&f);
   for(i=0;i<f;i++)
   {
     cntr[i]=0; a[i]=-1;
   }
  printf("\nThe Page Replacement Process is- \n");
  for(i=0;i<m;i++)
  {
 
    for(j=0;j<f;j++)
      if(rs[i]==a[j])
      {
        cntr[j]++;
        break;
	}
       if(j==f)
       {     min = 0;    
         for(k=1;k<f;k++)
             if(cntr[k]<cntr[min])
             min=k;
             a[min]=rs[i]; cntr[min]=1;
             pf++;
       }
         printf("\n");
         for(j=0;j<f;j++)
         printf("\t%d",a[j]);
         
     }
     printf("\n\nTotal number of page faults -- %d",pf);
}


/*
<pre>nter number of page references -- 8

Enter the reference string -- 1
2
3
1
2
5
4
6

Enter the available no. of frames -- 3

The Page Replacement Process is- 

	1	-1	-1
	1	2	-1
	1	2	3
	1	2	3
	1	2	3
	1	2	5
	1	2	4
	1	2	6

Total number of page faults -- 6<font color="#26A269"><b>c</b></font></pre>
*/
