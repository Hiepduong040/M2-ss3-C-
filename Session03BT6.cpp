#include<stdio.h>
int main(){
	int age,year=2023,tuoi;
	printf("Nhap vao nam sinh cua ban: ");
	scanf("%d",&age);
	tuoi=year-age;
	printf("Tuoi cua ban la:%d\n",tuoi);
	(tuoi % 2 == 0) ? printf("Tuoi la:%s\n","chan") : printf("Tuoi la:%s\n","le"); 
}
