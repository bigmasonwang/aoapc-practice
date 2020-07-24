// 避免重复, 可以创建一个数组a[9], 出现数字的位置值为1, 最后判断数组总和为9
#include<stdio.h>
#include<string.h>
int main() {
	int i, j, k, c, count=0, a[10];
	memset(a, 0, sizeof(a));
	for(i = 123; i <= 329; i++) {
		j = i * 2;
		k = i * 3;
		a[i/100] = a[i/10%10] = a[i%10] = 1; 
		a[j/100] = a[j/10%10] = a[j%10] = 1;
		a[k/100] = a[k/10%10] = a[k%10] = 1;	
		for(c = 0; c < 10; c++) {
			count += a[c];
		}
		if(count == 9) {
			printf("%d %d %d\n", i, j, k);
		}
		count = 0;
		memset(a, 0, sizeof(a));	
	}
	return 0;
}
