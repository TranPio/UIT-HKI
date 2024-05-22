#include <stdio.h>
#include <conio.h>
#define MAX 20

int main(){
 int a[MAX], n, i, x, sub = 0, count = 0, min = 9999, pos;
 int *p;  // con tro p
 
 printf("Nhap so phan tu cua mang: ");
 scanf("%d", &n);
 
    p = &a[0];  // cho con tro p tro den phan tu dau tien cua mang a
 printf("Nhap gia tri cho %d phan tu:\n", n);
 for(i = 0; i < n; i++)
 {
  printf("a[%d] = ", i);
  scanf("%d", p+i);
 }
 
 printf("\nCac phan tu co trong mang la:\n");
 for(i = 0; i < n; i++)
 {
  printf("%d\t", *(p+i));
  sub += *(p+i);
 }
 
 // Tinh tong cac phan tu trong mang 
 printf("\nTong gia tri cac phan tu trong mang la: %d\n", sub);
 
 // Sap xep mang giam dan
 for (i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (*(p+i) < *(p+j)){
                int temp = *(p+i);
     *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    } 
    printf("Mang sau khi sap xep giam dan la: ");
    for(int i = 0; i < n; i++) 
  printf("%d\t",*(p+i));
  
 // Dem so lan xuat hien phan tu nhap tu ban phim 
 printf("\nNhap phan tu can dem: ");
 scanf("%d", &x); 
 for(i = 0; i < n; i++)
 {
  if(*(p+i) == x)
   count++;
 }
 
 printf("Gia tri %d xuat hien %d lan trong mang\n", x, count);
 
 // Xuat cac phan tu chan nho hon 20
 printf("Cac phan tu chan nho hon 20 co trong mang la: ");
 for(i = 0; i < n; i++)
 {
  if(*(p+i) % 2 == 0 && *(p+i) < 20)
   printf("%d\t", *(p+i));
 }
 
 // Tim vi tri phan tu nho nhat trong mang
 for(i = 0; i < n; i++)
 {
  if(*(p+i) < min)
  {
   min = *(p+i);
   pos = i;
  }
 }
 
 printf("\nPhan tu nho nhat trong mang la %d, o vi tri thu %d\n", min, pos);
 
 // Xuat ra day dao nguoc
 printf("Day dao nguoc cua mang la: ");
 for(i = n-1; i >= 0; i--)
  printf("%d\t", *(p+i));
 
 return 0;
}