#include <stdio.h>

double factorial_rec(int n) {
	if (n <= 1)return(1);
	else return(n * factorial_rec(n - 1));

}
double factorial_iter(int n) {
	int i;
	double result_iter = 1.0;
	for (i = 1; i <= n; i++)
		result_iter = result_iter * i;
	return(result_iter);
}
int main(void)
{
	int n = 20;
	double result_rec = factorial_rec(n);
	printf("%f\n", result_rec);
	double result_iter = factorial_iter(n);
	printf("%f", result_iter);
	return 0;
}