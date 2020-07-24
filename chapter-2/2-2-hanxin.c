#include<stdio.h>
int main() {
	int a, b, c;
	int n = 10;
	scanf("%d%d%d", &a, &b, &c);
	while(n <= 100) {
		if (n%3 == a && n%5 == b && n%7 == c){
			printf("%d\n", n);
			return 0;
		}
		n++;
	}
	printf("No answer\n");
	return 0;
}
