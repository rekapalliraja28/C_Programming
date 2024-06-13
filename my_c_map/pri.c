#include<stdio.h>

int main ()
{
	int a,b,isprime;
	printf("the 2 to 10 prime numbers\n");

	for(a=2;a<=10;a++){
		
		isprime =1;
//
		for(b=2;b<=a/2;b++){
			if(a%b==0){
				isprime=0;
				printf("not a prime numbers %d\n",a);
				break;
			}
		}

		if(isprime==1){
			printf("the prime number %d\n",a);
		}
	}
	return 0;
}
