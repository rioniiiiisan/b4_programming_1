#include <stdio.h>
#include "../include/func.h"

int main(){
	int sum = 0;
	int n;
	printf("Input value of n : ");
	scanf("%d",&n);
	printf("sum = %d\n",func(n));
	return 0;
}

