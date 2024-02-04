#include <stdio.h>
#include<math.h>


int Gt(int n){
	if(n == 1){
		return 1;
	}
	int gt = n * Gt(n - 1);
	return gt;
}
int CheckSNT(int n){
	if(n < 2){
		return 0;
	}
	for(int i =2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int DemSNT(int n){
	int Dem = 0;
	for(int i = 2; i <= n; i++){
		if(CheckSNT(i) == 1){
			Dem ++;
		}
	}
	return Dem;
}
int UCLN(int a, int b){
	do{
		if(a > b){
			a = a- b;
		}
		if(b > a){
			b = b - a;
		}
	}while(a != b);
	return a;
}
int main(){
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);
	printf("\nGiai thua cua n la: %d", Gt(n));
	printf("\nSo cac so nguyen to tu 1 den n la: %d", DemSNT(n));
	int a, b;
	printf("\nNhap a: ");
	scanf("%d", &a);
	printf("\nNhap b: ");
	scanf("%d", &b);
	printf("\nUCLN cua a va b la: %d", UCLN(a, b));
	return 0;
}
