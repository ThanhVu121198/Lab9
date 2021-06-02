// tim so thu n cua day fibonaci
#include<stdio.h>
int fibonaci(int n){
	int a1=1,a2=1;
	if(n==1||n==2){
		return 1;
	}
	int i=3,a;
	while(i<=n){
		a=a1+a2;
		a1=a2;
		a2=a;
		i++;
	}
	return a;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("So fibonaci thu %d la: %d",n,fibonaci(n));
}
