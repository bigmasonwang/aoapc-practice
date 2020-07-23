#include<stdio.h>
#include<math.h>
int main(){
    //The Math. acos() method returns a numeric value between 0 and π radians for x between -1 and 1.
    const double pi = acos(-1.0);
    int n;
    scanf("%d", &n);
    printf("%f\n", sin(n/180.0*pi));
    printf("%f\n", cos(n/180.0*pi));
}
