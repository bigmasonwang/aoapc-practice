#include<stdio.h>
int main() {
	int a, b, c, num;
	for(a = 1; a < 10; a++) {
		for(b = 0; b < 10; b++) {
			for(c = 0; c < 10; c++) {
				num = 100*a + 10*b + c;
				if (a*a*a + b*b*b + c*c*c == num) {
					printf("%d\n",num);
				}
			}
		}
	}
	return 0;
}
