#include<stdio.h>
int main(){
	int a;
	int h; 
	scanf("%f %f", &a, &h);
	float score = ((a * h ) / 2) ;
	printf("dien tich hinh tam giac la %.2f",score);
	return 0;
}
