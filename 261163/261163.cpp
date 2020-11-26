#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct input
{
	int num[3],sum;
}a1, a2;
void three() {
	for (int x = 0; x < 3; x++) {
		printf("input numA %d : ", x + 1);
		scanf("%d", &a1.num[x]);
		for(int y = 0 ; y<a1.num[x];y++){
			printf(".");
		}
		printf("\n");
		a1.sum += a1.num[x];
	}
	for (int x = 0; x < 3; x++) {
		printf("input numB %d : ", x + 1);
		scanf("%d", &a2.num[x]);
		for (int y = 0; y < a2.num[x]; y++) {
			printf(".");		
		}
		printf("\n");
		a2.sum += a2.num[x];
	}
	printf("%d %d\n", a1.sum, a2.sum);
}
 
int main() {
	three();
	if (a1.sum > a2.sum) {
		printf("Sum A win Sum B = %d", a1.sum- a2.sum);
	}
	if (a2.sum > a1.sum) {
		printf("Sum B win Sum A = %d", a2.sum-a1.sum);
	}
	if (a2.sum == a1.sum) {
		printf("Sum A Sum B is Draw = %d", a2.sum);
	}
	return 0;
}