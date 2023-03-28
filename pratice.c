#include<stdio.h>
int asum(int figure1, int figure);
int asum(int figure1, int figure) {
	int asum;
	asum = figure1 + figure;
	return asum;
}
int bsum(int figure1, int figure);
int bsum(int figure1, int figure) {
	int bsum;
	bsum = figure1 - figure;
	return bsum;
}

int csum(int figure1, int figure);
int csum(int figure1, int figure) {
	int csum;
	csum = figure1 * figure;
	return csum;
}

int dsum(int figure1, int figure);
int dsum(int figure1, int figure) {
	int dsum;
	dsum = figure1 / figure;
	return dsum;
}

int esum(int figure1, int figure);
int esum(int figure1, int figure) {
	int esum;
	esum = figure1 % figure;
	return esum;
}
void main() {
	int figure, figure1, sum,sum1,sum2,sum3,sum4;
	printf("请输入第一个数：");
	scanf_s("%d", &figure);
	printf("请输入第二个数：");
	scanf_s("%d", &figure1);
	sum = asum(figure, figure1);
	sum1 = bsum(figure, figure1);
	sum2= csum(figure, figure1);
	sum3 = dsum(figure, figure1);
	sum4 = esum(figure, figure1);
	printf("%d + %d = %d\n", figure, figure1, sum );
	printf("%d - %d = %d\n", figure, figure1, sum1 );
	printf("%d * %d = %d\n", figure, figure1, sum2 );
	printf("%d / %d = %d\n", figure, figure1, sum3 );
	printf("%d 求余 %d = %d", figure, figure1, sum4 );

}




