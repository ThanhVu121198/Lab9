// tim so nguyen to tiep theo cua n
#include<stdio.h>
#include<math.h>
int snt(int n){
	int cantren=0,count=0;
	int snt;
	for(int i=n+1;;i++){
		snt=1;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				snt=0;
				break;
			}
		}
		if(snt){
			count=1;
			cantren=i;
			break;
		}
	}
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("so nguyen to tiep theo cua n la: %d",snt(n));
	
}
