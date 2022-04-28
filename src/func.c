#include "../include/func.h"

int func1(int n){
	int sum = 0;
	for(int k = 1; k<=n; k++){
		sum += k*k;
	}
	return sum;
}

double func2(int n){
	double prod = 1;
	for(int k = 1; k<=n; k++){
		prod *= 1.0/(k*k);
	}
	return prod;
}

int func3(int n){
	int fact = 1;
	for(int i = 1; i<= n; i++){
		fact *= i;
	}
	return fact;
}

int func4(int n, int m){
	int nCm;
	//nCm = n!/m!/(n-m)!
	int n_fact = func3(n);
	int m_fact = func3(m);
	int n_minus_m_fact = func3(n-m);
	
	nCm = n_fact/m_fact/n_minus_m_fact;
	return nCm;
}
