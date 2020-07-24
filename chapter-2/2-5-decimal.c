#include<stdio.h>
int main() {
	int a, b, c, count=0;
	while(scanf("%d%d%d", &a, &b, &c) && (a!=0 || b!=0 || c!=0)){
		printf("Case %d: %.*f\n", ++count, c, (double)a/b);
		// 注意 * 占位符
		// 如果要输出小数点后20位以上需要手动操作:
		// a*10^c / b; 再将小数点左移c位
	}

}
