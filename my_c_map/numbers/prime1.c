#include<stdio.h>

int main()
	 
{
	int i,j,isprime;

	printf("the prime number between 2 and 10 are:\n");

	for(i=2; i<=10; i++){

		isprime=1;

	for(j=2; j<=i/2; j++){
         if(i%j ==0){

		 isprime=0;
		 printf("not a prime : %d\n",i);
		 break;
	 }
	}

	if(isprime ==1){
		printf("%d\n",i);
	}
	}

	return 0;
}
