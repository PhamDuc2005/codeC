#include <stdio.h>

void Nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap Phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void Xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("\n%d", a[i]);
	}
}
int TongMang(int a[], int n){
	int Sum = 0;
	for(int i = 0; i < n; i++){
		Sum += a[i];
	}
	return Sum;
}
int Maximum(int a[], int n){
	int Max = 0;
	for(int i = 0; i < n; i++){
		if(Max < a[i]){
			Max = a[i];
		}
	}
	return Max;
}
int Maximum2(int a[], int n){
	int Max = Maximum(a, n);
	int Max2;
	for(int i = 0; i < n; i++){
		if(a[i] != Max){
			Max2 = a[i];
		}
	}
	for(int i = 0; i < n; i++){
		if(Max2 < a[i] && a[i] != Max){
			Max2 = a[i];
		}
	}
	return Max2;
}
int Minimum(int a[], int n){
	int Min = Maximum(a, n);
	for(int i = 0; i < n; i++){
		if(a[i] < Min){
			Min = a[i];
		}
	}
	return Min;
}
 Minimum2(int a[], int n){
	int Min = Minimum(a, n);
	int Min2;
	for(int i = 0; i < n; i++){
		if(a[i] != Min){
			Min2 = a[i];
		}
	}
	for(int i = 0; i < n; i++){
		if(Min2 > a[i] && a[i] != Min){
			Min2 = a[i];
		}
	}
	return Min2;
}
int main(){
	int a[100], n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	Nhap(a, n);
	Xuat(a, n);
	printf("\nTong day la: %d", TongMang(a, n));
	printf("\nSo lon nhat trong day la: %d", Maximum(a, n));
	printf("\nSo lon thu 2 trong day la: %d", Maximum2(a, n));
	printf("\nSo be nhat trong day la: %d", Minimum(a, n));
	printf("\nSo be thu 2 trong day la: %d", Minimum2(a, n));
	return 0;
}
