#include<stdio.h>

void main(){
		
	int pd = fork();
	if(pd == 0){
		printf("The child process is running \n and process id is %d \n",getpid());
		printf("the parents id is %d \n", getppid());
		printf("Enter the limit");
		int limit;
		scanf("%d",&limit);
		for(int i = 1; i<limit+1; i++){
			printf("%d \n",i);
		}
		
	}
	
	
	else if(pd>0){
		wait();
		printf("This is parent process\n and the process id is %d \n");
		printf("The parent id is %d \n", getppid());
		int num;
		printf("Enter the number:");
		scanf("%d",&num);
		if (num %2 == 0){
		
			printf("The number is even");
		}
		else{
		
			printf("The number is odd");
		}
	}	
	
	else{
	
		printf("Fork failed");
	}
}

