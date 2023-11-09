#include<stdio.h>
int main(){
	float math,literature,english;
	printf("Nhap diem toan,van,anh: ");
	scanf("%f %f %f",&math,&literature,&english);
	float sum=math+literature+english;
	float average=(math+literature+english)/3;
	printf("Diem tong là: %.2f diem trung binh:%.2f\n",sum,average);
}
