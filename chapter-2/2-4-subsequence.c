#include<stdio.h>
int main() {
	int n, m, count = 0;
	double sum;
	long long i;
	while(1) {
		scanf("%d%d", &n, &m);
		if (n==0 && m==0){
			break;
		}
		sum = 0.0;
		for(i = n; i <= m; i++) {
			sum += 1.0/(i*i);
			n++;
		}
		printf("Case %d: %.5f", ++count, sum);
	}
	return 0;
}	
