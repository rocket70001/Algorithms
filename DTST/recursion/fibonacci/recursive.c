#include<stdio.h>

void pibo(unsigned long long a, unsigned long long b, unsigned long long one, unsigned long long limit) {
	if(one == limit) {
		return ;
	}
	else if(one <= 2) {
		printf("1 ");
		pibo(a, b, one + 1, limit);
	}
	else if(one > 2) {
		unsigned long long tmp = b;
		b = a + b;
		a = tmp;
		printf("%llu ", b);
		pibo(tmp, b, one + 1, limit);
	}
}

int main(void) {
    unsigned long long a = 1;
    unsigned long long b = 1;
    unsigned long long limit;

    printf("차수를 입력하세요: ");
    scanf("%llu", &limit);
	pibo(a, b, 1, limit);

    return 0;
}
