// PROGRAM NO. 2
/*#include <stdio.h>
int main() {
int a,b,c;
 printf("\nEnter Number A=");
 scanf("%d",&a);
 printf("\nEnter Number B=");
 scanf("%d",&b);
 printf("\nEnter Number C=");
 scanf("%d",&c);
 //if(a>b)-{if(a>c) a is largest,else c is largest}
 if (a > b)
 {
 if (a > c)
 printf("%d is the largest number.",a);
 else
 printf("%d is the largest number.", c);
 }
 //else-{if(b>c) b is largest,else c is largest}
 else
 {
 if (b > c)
 printf("%d is the largest number.", b);
 else
 printf("\n%d is the largest number.", c);
 }
 return 0;
}*/

// PROGRAM NO. 4
/*#include<stdio.h>
int main()
{
  int a,b,op;
  float result; //4 variables(a,b,n,ans(float))
do{ printf("\nEnter 1 for Addition");
 printf("\nEnter 2 for Substraction");
 printf("\nEnter 3 for Multiplication");
 printf("\nEnter 4 for Division"); //float
 printf("\nEnter 5 for Modulo"); //float
 printf("\nEnter 6 for Exit\n");
 scanf("\n%d", &op); //operation
 printf("\nEnter values for a and b: ");
 scanf("%d %d",&a,&b); //operand
 switch(op)
 {
 case 1:
 result=a+b;
 printf("addition=%f",result);
 break;
 case 2:
 result=a-b;
 printf("Substraction=%f",result);
 break;
 case 3:
 result=a*b;
printf("Multiplication=%f",result);
 break;
 case 4:
 result=(float)a/b;
 printf("Division=%3f",result);
 break;
 case 5:
 result=a%b;
 printf("Modulus=%3f",result);
 break;
 case 6:
 printf("Exit");
 break;
 default:
 printf("Error! operator is not correct");
 }
  }while(op!=6);
  return 0;
}*/

// PROGRAM NO.5
/*#include<stdio.h>
int main()
{
 int num,i,count=0; //3 variables //count=0;
 printf("\nEnter Any Number =");
 scanf("%d",&num);

 //for-{if},{if,else}

 for(i=1;i<=num;i++)
 {
 if(num%i==0)
 {
 count++;
 }
 }
 if(count==2)
 {
 printf("\nEntered Number is Prime Number");
 }
 else
 printf("\nEntered Number is Not Prime Number");
  return 0;
} */

// PROGRAM NO.6
// PATTERN 1
//*****
//*****
//*****
//*****
//*****
/*#include<stdio.h>
int main()
{
 int i,j,n; //3 variables n,i,j
 printf("\nEnter No. of Rows = ");
 scanf("%d",&n);
  //for(i)-{for(j){printf("*");}}
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++) //j<=n
 {
 printf("*");
 }
 printf("\n");
 }
  return 0;
}*/

// PATTTERN 2
//*
//**
//***
//****
//*****
/*#include<stdio.h>
int main()
{
 int i,j,n;
 printf("\nEnter No. of Rows = ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=i;j++)   //j<=i
 {
 printf("*");
 }
 printf("\n");
 }
}*/

// PATTERN 3
// 1
// 12
// 123
// 1234
// 12345
/*#include<stdio.h>
int main()
{
 int i,j,n;
 printf("\nEnter No. of Rows = ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=i;j++) //j<=i
 {
 printf("%d",j); //printf("%d",j);
 }
 printf("\n");
 }
}*/

// PATTERN 4
// 1
// 23
// 456
// 78910
/*#include<stdio.h>
int main()
{
 int i,j,n,count=1; //4 variables //count=1;
 printf("\nEnter No. of Rows = ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=i;j++)
 {
 printf("%d",count); //printf("%d",count); count++;
 count++;
 }
 printf("\n");
 }
}*/

// PROGRAM NO.7
/*#include<stdio.h>
int main()
{
 int n,c,arm=0,r; //4 variables //arm=0;
 printf("\nEnter Any No. to check = ");
 scanf("%d",&n);
 c=n; //c=n;
  //while(r,n,arm),if(c==arm),else
 while(n>0)
 {
 r=n%10; //r=n%10;
 arm=(r*r*r)+arm; //arm
 n=n/10; //n=n/10;
 }
 if(c==arm) //if(c==arm)
 {
 printf("\nThe Number Is Armstrong");
 }
 else
 printf("\nThe Number Is Not Armstrong");
 return 0;
}*/

// PROGRAM NO.8
// similar to previous one
/*#include<stdio.h>
int main()
{
 int n,rem,b=0,base=1; //4 variables
 printf("\nEnter Any Number To Convert Into Its Binary Equivalent = ");
 scanf("%d",&n);
  //while(rem,b,n,base)
 while(n>0)
 {
 rem=n%2; //Base of Binary no is 2
 b=b+rem*base;
 n=n/2;
 base=base*10; //Base of Decimal no is 10
 }
 printf("\nBinary No. Is = %d",b);
}*/

// PROGRAM NO.9
/*#include<stdio.h>
int main()
{
 int i,j,n,temp; //5 variables
 int x[20];
 printf("Enter Number of Elements = ");
 scanf("%d",&n);
 printf("Enter Numbers in any order =\n");
  //no. of elements,for(entry from user),for{for{if(x[j]>x[j+1])}}
 for(i=0;i<n;i++)
 {
 scanf("%d",&x[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 if(x[j]>x[j+1])
 {
 temp=x[j];
 x[j]=x[j+1];
 x[j+1]=temp;
 }
 }
 }
 printf("Largest Number = %d\n",x[n-1]);
 printf("Second Largest Number = %d",x[n-2]);
}*/

// PROGRAM NO.11
/*#include<stdio.h>
int fact(int);
int main()
{
 int n,r,ncr; //3 v
 printf("Enter a Number\n");
 scanf("%d",&n);
 printf("Enter a Number\n");
 scanf("%d",&r);
 ncr=fact(n)/(fact(r)*fact(n-r)); //logic
 printf("Value of %dC%d=%d\n",n,r,ncr);
}

 int fact(int n)
 {
 int i,f=1; //2 v
 for(i=1;i<=n;i++)
 {
 f=f*i;
 }
 return f;
 }*/

// PROGRAM NO.12
// LCM LOWEST COMMON MULTIPLE
// GCD GREATEST COMMON DIVISOR
/*#include <stdio.h>
int gcd(int x, int y);
int main()
{
 int num1, num2, hcf,lcm; //4 v
 printf("Enter two integer Values:\n");
 scanf("%d %d", &num1, &num2);
 hcf = gcd(num1, num2); //gcd
 printf("GCD: %d", hcf);
 lcm= (num1 * num2) / hcf; //lcm
 printf("\nLCM: %d",lcm);
 return 0;
}
int gcd(int x, int y)
//if,else
{
 if (y == 0)
 {
 return x;
 }
 else
 {
 return gcd(y, x%y); //call
 }
}*/

// PROGRAM NO.13
/*#include <stdio.h>
#include <string.h>
int main()
{
 char string[25], reverse_string[25] = {'\0'};
 int i, length = 0, flag = 0;
 fflush(stdin);
 printf("Enter a string: \n");
 gets(string);
//2c,3int,fflush(stdin),gets(string),
//for,@for,for{if,else},if,else
 for (i = 0; string[i] != '\0'; i++)
 {
 length++;
 }
 for (i = length - 1; i >= 0; i--)
 {
 reverse_string[length - i - 1] = string[i];
 }
 for (i = 0; i < length; i++)
 {
 if (reverse_string[i] == string[i])
 flag = 1;
 else
 flag = 0;
 }
 if (flag == 1)
 printf("%s is a palindrome \n", string);
 else
 printf("%s is not a palindrome \n", string);
}*/

// PROGRAM NO.14
#include <stdio.h>
void asc_sort(int a[100], int n);
int main() {
  int a[100], i, n; // 3v
  printf("Enter n:\n");
  scanf("%d", &n);
  // no.s
  // for{entry a[i]},fcall,for{print the asc order}
  for (i = 0; i < n; i++) {
    printf("a[%d]=", i);
    scanf("%d", &a[i]);
  }
  asc_sort(a, n);
  printf("Array in ascending order is:\n");
  for (i = 0; i < n; i++) {
    printf("%d\t", a[i]);
  }
}

void asc_sort(int a[10], int n) {
  int i, j, temp;
  // for{for{if}}
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

// PROGRAM NO.15
/*#include <stdio.h>
int sumd(int n,int matrix[50][50])
{
 int sum=0;
  //for{for{if}}
for(int i=0;i<n;++i)
{
for(int j=0;j<n;++j)
{
if (i!=j)
{
sum += matrix[i][j];
}
}
}
return sum;
}

int main()
{
int n;
int matrix[50][50];
//no. of elements,for{for{entry}},for{for{print}}
printf("Enter Order of Matrix: ");
scanf("%d", &n);
printf("Enter Matrix Elements:\n");
for(int i = 0; i < n; ++i)
{
for(int j=0;j<n;++j)
{
scanf("\n%d", &matrix[i][j]);
}
}
printf("Display Matrix\n");
for(int i=0;i<n;++i)
{
for(int j=0;j<n;++j)
{
printf(" %d\t",matrix[i][j]);
}
printf("\n");
}
printf("Sum of non-diagonal elements: %d", sumd(n, matrix));
}*/

// PROGRAM NO.16
/*#include<stdio.h>
#include<string.h>
int main()
{
char a[100], b[100], c[100], d[100];
  //4 characters-3 used,1 for storage
printf("Enter the first string =");
gets(a);
printf("Enter the second string =");
gets(b);
strcat(a,b);
strcpy(d,a);
printf("Enter the third string =");
gets(c);
strcat(d,c);
printf("String obtained after concatenation is =%s\n",d);
}*/

// PROGRAM NO.17
/*#include<stdio.h>
void swap(int *, int *);
int main()
{
 int a, b;
 printf("Enter the value for a :");
 scanf("%d",&a);
 printf("Enter the value for b :");
 scanf("%d",&b);
 printf("\nBefore swapping a = %d, b = %d",a,b);
 swap(&a,&b);
 printf("\nAfter swapping a=%d ,b=%d",a,b);
}
void swap (int *a, int *b)
{
int temp;
temp = *a;
*a=*b;
*b=temp;
}*/

// PROGRAM NO.19
#include <stdio.h>
struct cricket {
  char name[80];
  char team[20];
  int bavg;
};
void accept(struct cricket list[], int s);
void display(struct cricket list[], int s);
void bsortDesc(struct cricket list[], int s);
int main() {
  struct cricket data[20];
  int n;
  printf("Number of records you want to enter? : ");
  scanf("%d", &n);
  accept(data, n);
  printf("\nBefore sorting");
  display(data, n);
  bsortDesc(data, n);
  printf("\nAfter sorting");
  display(data, n);
  return 0;
}
void accept(struct cricket list[80], int s) {
  int i;
  for (i = 0; i < s; i++) {
    printf("\n\nEnter data for Record #%d", i + 1);

    printf("\nEnter Name:");
    scanf("%s", list[i].name);

    printf("\nEnter Player team : ");
    scanf("%s", list[i].team);

    printf("\nEnter batting Average : ");
    scanf("%d", &list[i].bavg);
  }
}
void display(struct cricket list[80], int s) {
  int i;
  printf("\nPlayer_name\tteam_Name\tbatting Average\n");
  for (i = 0; i < s; i++) {
    printf("%s  \t\t  %s\t\t  %d \n", list[i].name, list[i].team, list[i].bavg);
  }
}
void bsortDesc(struct cricket list[80], int s) {
  int i, j;
  struct cricket temp; ////

  for (i = 0; i < s - 1; i++) {
    for (j = 0; j < (s - 1 - i); j++) {
      if (list[j].bavg < list[j + 1].bavg) {
        temp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = temp;
      }
    }
  }
}

#include <stdio.h>
int main() {
  int i, j, n, x[50], temp;
  printf("Enter the number of elements: \n");
  scanf("%d", &n);
  printf("Enter the numbers: \n");
  for (i = 0; i < n; i++) {
    scanf("%d", &x[i]);
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (x[j] > x[j + 1]) {
        temp = x[j];
        x[j] = x[j + 1];
        x[j + 1] = temp;
      }
    }
  }
  printf("Largest number is %d\n", x[n - 1]);
  printf("Second largest number is %d\n", x[n - 2]);
  return 0;
}
