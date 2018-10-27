#include<stdio.h>
#include<conio.h>
#include<math.h>
void NhapMang(int array[100], int n){
	for (int i=0; i<n; i++){
	   printf("array[%d]=", i);
	   scanf("%d", &array[i]);
      }
    printf("\n");
}
void InMang(int array[100], int n){
	for (int i=0; i<n; i++){
       printf("array[%d]=%d \n", i,array[i]);
   }
   printf("\n");
}
int TongChan(int mang[100], int n){
   int tong = 0;
   for (int i=0; i<n; i++){
   	   if (mang[i]%2==0) tong = tong + mang[i];
}
    printf("tong mang chan la %d \n", tong);
   return tong;
}

int TimMax(int mang[100], int n){
	int max=mang[0];
	for (int i=0; i<n; i++){
	   if (max<mang[i]) max = mang[i];
}
    printf("phan tu lon nhat %d \n", max);
    
}
int TongGT(int aray[100], int n){
    int tong = 0;
    for (int i=0; i<n; i++){
    	for (int j=1; j<= n; j++){
	       tong= tong + j;
		   }
		}
	return tong;
	printf("tong gai thua: %d", tong);
       
}
int main(){
	int mang[10];
	int n;
	printf("nhap n");
	scanf("%d", &n);
	NhapMang(mang, n);
	InMang(mang, n);
	TongGT(mang, n);
	
	
}

