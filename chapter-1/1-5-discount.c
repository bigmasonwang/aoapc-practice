#include<stdio.h>
int main(){
    const double PRICE = 95.0;
    const double PRICEBREAK = 300.0;
    int n;
    double money;
    scanf("%d", &n);
    money = PRICE * n;
    if (money >= PRICEBREAK) {
        money *= 0.85;
    }
    printf("%.2f\n", money);
}
