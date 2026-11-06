# include <stdio.h>
# include <math.h>

int main() {
    int a = 1;
    int b = 1;
    int sum = 1;
    long long num =1;

    for (a = 1; a < 21; a++)
    {
        sum =sum*2;
        printf("2^%d = %d\n", a, sum);
    }
    for (b=1;b<11;b++)
    {
        num = pow(b, b);
        printf("%d^%d=%lld\n",b,b,num);
    }
    
    
}