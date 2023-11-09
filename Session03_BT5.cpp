#include<stdio.h>
int main(){
	int number,sum=0,inverse=0;
	printf("Nhap vao so nguyen co 4 chu so: ");
	scanf("%d", &number);
	sum=(number%10)+((number/10)%10)+((number/100)%10)+(number/1000);
	inverse=(number%10)*1000+((number/10)%10)*100+((number/100)%10)*10+(number/1000);
	printf("Tong 4 chu so:%d\n",sum);
	printf("So nghich dao:%d\n",inverse); 
}

