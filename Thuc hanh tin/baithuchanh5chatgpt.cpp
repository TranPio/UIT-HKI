#include<stdio.h>
int main()
{
  int a[100], n, i;
  float sum=0; //Tính tổng các phần tử
  printf("Nhap so luong phan tu cua mang: ");
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
      printf("Nhap phan tu thu %d: ",i+1);
      scanf("%d",&a[i]);
      sum+=a[i];
  }
  printf("Tong cac phan tu trong mang la: %0.2f\n",sum);
  //Tim so lan xuat hien phan tu x 
  int x;
  printf("Nhap phan tu can tim x: ");
  scanf("%d", &x);
  int count=0;
  for(i=0;i<n;i++)
  {
      if(a[i]==x)
      count++;
  }
  printf("So lan xuat hien cua %d la: %d\n", x, count);
  //Xuat cac phan tu chan nho hon 20 
  printf("Cac phan tu chan nho hon 20 la: ");
  for(i=0;i<n;i++)
  {
      if(a[i]<20 && a[i]%2==0)
      printf("%d\t",a[i]);
  }
  printf("\n");
  //Tim vi tri phan tu nho nhat
  int min=a[0],vt=0;
  for(i=1;i<n;i++)
  {
      if(a[i]<min)
      {
          min=a[i];
          vt=i;
      }
  }
  printf("Vi tri phan tu nho nhat la: %d\n",vt+1);
  //Xuat ra day dao nguoc
  printf("Day dao nguoc cua mang la: ");
  for(i=n-1;i>=0;i--)
  printf("%d\t",a[i]);
  printf("\n");
  return 0;
}
