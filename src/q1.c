#include <stdio.h>
#include "../include/func.h"

int main(){
	int sum = 0;
	int n;
	printf("Input integer of n : ");
	scanf("%d",&n);
	printf("\\sum_{k=1}^{n} k^2 = %d\n",func(n));
	return 0;
}

