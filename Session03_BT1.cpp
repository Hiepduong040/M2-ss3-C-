#include <stdio.h>
int main(){
	float r;
	printf(" Nhap gia tri r: ");
	scanf("%f",&r);
	const float PI = 3.14;
	float chuVi = 2 * PI * r;
	float area = PI * r * r;
	printf("Chu vi hinh tron la: %f\n",chuVi);
	printf("Dien tich hinh tron la: %f\n", area);
}
