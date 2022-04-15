#include <stdio.h>
#include "../include/func.h"

int main(){
	int sum = 0;
	int n,m;

	//(1)
	printf("(1)Input integer of n : ");
	scanf("%d",&n);
	printf("\\sum_{k=1}^{n} k^2 = %d\n",func1(n));
	//(2)
	printf("(2)Input integer of n : ");
	scanf("%d",&n);
	printf("\\product_{k=1}^{n} 1/k^2 = %lf\n",func2(n));
	//(3)
	printf("(3)Input integer of n : ");
	scanf("%d",&n);
	printf("n! = %d\n",func3(n));
	//(4)
	printf("(4)Input integer of n(n>=m) : ");
	scanf("%d",&n);
	printf("   Input integer pf m(n>=m) : ");
	scanf("%d",&m);
	printf("nCm = %d\n",func4(n,m));

	return 0;
}

