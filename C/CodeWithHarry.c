//BASIC PRINTING STATEMENT
// #include <stdio.h>
// int main()
// {
//   printf("Hello,Iam learning C with Harry\n");
//   return 0;
// }

//AREA OF RECTANGLE
// #include<stdio.h>
// int main()
// {
//   float l,b;
//   printf("Enter the length and breadth of the rectangle\n");
//   scanf("%f %f",&l,&b);
//   printf("Area of the rectangle is %f\n",l*b);
//   return 0;
// }

//AREA OF CIRCLE
// #include<stdio.h>
// int main()
// {
//   float r;
//   printf("Enter the radius of the circle\n");
//   scanf("%f",&r);
//   printf("Area of the circle is %f\n",3.14*r*r);
//   return 0;
// }

//AREA OF CYLINDER
// #include<stdio.h>
// int main()
// {
//   float r,h;
//   printf("Enter the radius and height of the cylinder\n");
//   scanf("%f %f",&r,&h);
//   printf("Area of the cylinder is %f\n",3.14*r*r*h);
//   return 0;
// }

//CELCIUS TO FARHENIET
// #include <stdio.h>
// int main()
// {
//   float c;
//   printf("Enter the value in celcius\n");
//   scanf("%f",&c);
//   printf("The value in farheniet is %f\n",c*9/5+32);
//   return 0;
// }

//CALCULATE THE SIMPLE INTEREST
// #include<stdio.h>
// int main()
// {
//   int principal=100,rate=4,years=1;
//   printf("Enter the principal,rate,years\n");
//   scanf("%d %d %d",&principal,&rate,&years);
//   printf("The value of simple interest is %d\n",(principal*rate*years)/100);
//   return 0;
// }

//EXPONENTIAL FUNCTION
// #include <stdio.h>
// #include <math.h>
// int main()
// {
// printf("4^5= %f",pow(4,5)); //here %f must be used for exponential
// return 0;
// }

//SOME TRICKY Qs
// #include <stdio.h>
// int main()
// {
//   int a; int b=a;
//   int v=3^3;
//   char dt='2';
//   printf("%d\n",v);
//   printf("%f\n",3.0/8-2);
//   printf("%c\n",dt);
//   printf("%d\n",a);
//   printf("%d\n",b);
//   return 0;
// }

//DIVISIBILITY BY 97
// #include<stdio.h>
// int main()
// {
// int a;
//   printf("Enter a number\n");
//   scanf("%d",&a);
//   a%97==0?printf("%d is divisible by 97",a):printf("%d is not divisible by 97\n",a);
//   return 0;
// }


//PROGRAM TO CALCULATE THE PERCENTAGE AND RESULT
// #include <stdio.h>
// int main()
// {
//   int pn,mc,em,ed,cp;
//   printf("Enter the marks of PN,MC,EM,ED,CP\n");
//   scanf("%d %d %d %d %d",&pn,&mc,&em,&ed,&cp);
//   float perc=(pn+mc+em+ed+cp)/130.0*100.0;
//   printf("percentage is %f\n",perc);
//   if (perc>=40)
//   {
//     if(pn && mc >= 8 && em && ed && cp>=12)
//     {
//       printf("Pass");
//     }
//     else
//       printf("fail");
//   }
//   else
//   printf("fail");
//   return 0;
// }


// CALCULATE THE INCOME TAX
// #include <stdio.h>
// int main()
// {
//   int income;
//   printf("Enter the income\n");
//   scanf("%d",&income);
//   if(250000<income && income<500000)
//   {
//     printf("Tax is %f",0.05*income);
//   }
//   else if(500000<income && income<1000000)
//   {
//     printf("Tax is %f",0.2*income);
//   }
//   else if(income>1000000)
//   {
//     printf("Tax is %f",0.3*income);
//   }
//   else
//   {
//     printf("No Tax");
//   }
//   return 0;
// }


//CHECK LOWERCASE(IMP)
// #include <stdio.h>
// int main()
// {
//   char ch;
//   printf("Enter the character\n");
//   scanf("%c",&ch);
//   if(ch<=122&&ch>=97)
//   {
//     printf("It is lowercase");
//   }
//   else
//   {
//     printf("It is not lowercase");
//   }
//   return 0;
// }


//LEAP YEAR(IMP)
// #include <stdio.h>
// int main() 
// {
//    int year;
//    printf("Enter a year: ");
//    scanf("%d", &year);

//    if (year % 4 == 0) 
//    {
//       if (year % 100 == 0) 
//       {
//          if (year % 400 == 0)
//             printf("%d is a leap year.\n", year);
//          else
//             printf("%d is not a leap year.\n", year);
//       }
//       else
//          printf("%d is a leap year.\n", year);
//    }
//    else
//       printf("%d is not a leap year.\n", year);
//    return 0;
// }


//GREATEST OF 4 NO.S
// #include <stdio.h>
// int main()
// {
//   int a,b,c,d;
//   printf("Enter the 4 no.s\n");
//   scanf("%d %d %d %d",&a,&b,&c,&d);
//   if(a>b&&a>c&&a>d)
//   {
//     printf("%d is greatest",a);
//   }
//   else if(b>a&&b>c&&b>d)
//   {
//     printf("%d is greatest",b);
//   }
//   else if(c>b&&c>a&&c>d)
//   {
//     printf("%d is greatest",c);
//   }
//   else
//     printf("%d is greatest",d);
//   return 0;
// }


//PRINT N TO 1
// #include<stdio.h>
// int main()
// {
//   int i,n;
//   printf("Enter the number\n");
//   scanf("%d",&n);
//   for(i=n;i>=1;i--)
//     {
//       printf("%d\n",i);
//     }
//   return 0;
// }

//MULTIPLICATION TABLE
// #include<stdio.h>
// int main()
// {
// int n;
//   printf("Enter the no. for which you want a multiplication table\n");
//   scanf("%d",&n);
//   for(int i=1;i<=10;i++)
//   {
//   printf("%d X %d = %d\n",n,i,n*i);
//   }
//   return 0;
// }

//MULTIPLICATION TABLE IN REVERSE ORDER
// #include<stdio.h>
// int main()
// {
// int n;
//   printf("Enter the no. for which you want a multiplication table\n");
//   scanf("%d",&n);
//   for(int i=10;i>=1;i--)
//   {
//   printf("%d X %d = %d\n",n,i,n*i);
//   }
//   return 0;
// }


//SUM OF N NATURAL NO.S using for loop
// #include<stdio.h>
// int main()
// {
//   int i,n,sum=0;
//   printf("Enter a number\n");
//   scanf("%d",&n);
//   for(i=0;i<=n;i++)
//     {
//       sum+=i;
//     }
//   printf("sum = %d\n",sum);
// }


//SUM OF N NATURAL NO.S using while loop
// #include<stdio.h>
// int main()
// {
  //  int i=0,n,sum=0;
  // printf("Enter a number\n");
  // scanf("%d",&n);
//   while(i<n)
//   {
//     i++;
//     sum+=i;
//   }
//   printf("sum = %d\n",sum);
//   return 0;
// }


//SUM OF N NATURAL NO.S using do while loop
// #include <stdio.h>
// int main()
// {
//  int i=0,n,sum=0;
//   printf("Enter a number\n");
//   scanf("%d",&n);
//   do{
//     i++;
//     sum+=i;
//   }
//   while(i<n);
//   printf("sum = %d",sum);
//   return 0;
// }


// Q7 (ERROR) SUM OF ANSWERS OF MULTIPLICATION TABLE 
// #include <stdio.h>
// int main()
// {
//   int sum=0,i,n,j;
//   printf("Enter the no. for which you want a multiplication table\n");
//   scanf("%d",&n);
//   for(i=1;i<=10;i++)
//   {
//   printf("%d X %d = %d\n",n,i,i*n);
//   }
//   for(j=1;j<sum;j*(i*n))
//   {
//   sum+=j;
//   }
//   printf("SUM=%d",sum);
//   return 0;
// }


//FACTORIAL OF N USING FOR LOOP
// note in for loop i<=n can be used as it won't be giving an extra iteration
// #include <stdio.h>
// int main()
// {
//   int i,n,fact=1;
//   printf("Enter the number");
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//     {
//      if(i==0 || i==1)
//      {
//       fact=1;
//      }
//      else
//        {
//         fact*=i;
//        }
//     }
//   printf("factorial = %d",fact);
//   return 0;
// }

//FACTORIAL OF N USING WHILE LOOP
// note in while loop i<n is must otherwise using i<=n you will end up getting one extra iteration
// #include <stdio.h>
// int main()
// {
//   int i=1,n,fact=1;
//   printf("Enter the number\n");
//   scanf("%d",&n);
//   while(i<n)
//     {
//       i++;
// if(i==0||i==1)
// {
//   fact=1;
// }
// else
// {
//       fact*=i;
// }
//     }
//   printf("factorial =%d\n",fact);
//   return 0;
// }


//PRIME NO.S FROM 0 TO 100
// #include <stdio.h>
// int main()
// {
//   int i,j,is_prime;
//   for(i=2;i<100;i++)
//     {
//       is_prime=1;
//       for(j=2;j<=i/2;j++)
//         {
//           if(i%j==0)
//           { is_prime=0;
//             break;
//           }
//         }
//           if(is_prime)
//           {
//             printf("%d  ",i);
//           }
//         }
//   return 0;
// }


//CHECK WHETHER THE GIVEN NO. IS PRIME OR NOT USING FOR LOOP
// #include <stdio.h>
// int main() 
// {
//     int n,i,is_prime = 1;    //assuming prime
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     // 0 and 1 are not prime numbers
//     if (n == 0 || n == 1) 
//     {
//         printf("%d is not a prime number.\n", n);
//     } 
//     else 
//     {
//         for (i = 2; i <= n/2; ++i) 
//         {
//             if (n % i == 0) 
//             {
//                 is_prime = 0;   //it is not prime
//                 break;
//             }
//         }
//         if (is_prime == 1)     //it is prime 
//         {
//             printf("%d is a prime number.\n", n);
//         } 
//         else 
//         {
//             printf("%d is not a prime number.\n", n);
//         }
//     }
//     return 0;
// }
//i,n,is_prime
//if 1&0
//else>(for>if(np),if(p),else (np))


//CHECK WHETHER THE GIVEN NO. IS PRIME OR NOT USING WHILE LOOP
//not for 0,1,4
// #include <stdio.h>
// int main()
// {
//   int i=2,n,is_prime=1;
//   printf("Enter the no.\n");
//   scanf("%d",&n);  
//   while(i<n/2)
//   { i++;
//    if(n%i==0)
//    {
//      is_prime=0;
//      break;
//    }
//   }
//    if(is_prime==1)
//    {
//      printf("%d is prime\n",n);
//    }
//   else
//     {
//       printf("%d is not prime\n",n);
//     }
// return 0;
// }
//i,n,is_prime
//while>if(np),if(p),else(np)



//(ERROR) CHECK WHETHER THE GIVEN NO. IS PRIME OR NOT USING DO WHILE LOOP
// #include <stdio.h>
// int main()
// {
//   int i=2,n,is_prime=1;
//   printf("Enter the no.\n");
//   scanf("%d",&n);
  
//   do
//   { i++;
//    if(n%i==0)
//    {
//      is_prime=0;
//      break;
//    }
//    if(is_prime==1)
//    {
//      printf("%d is prime\n",n);
//    }
//   else
//    {
//       printf("%d is not prime\n",n);
//    }}
//    while(i<=n/2);
  
// return 0;
// }

// //INTERESTING GAME OF GUESSING A NUMBER
// #include<stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main()
// {
//   int number,guess,nguesses=1;
//   srand(time(0));
//   number=rand()%100+1; //generates a random number between 1 and 100
  
//   //printf("The number is %d\n",number);
  
//   // keep running the loop until the number is guessed
//   do{
//     printf("Guess the number between 1 and 100\n");
//     scanf("%d",&guess);
//     if(guess>number)
//     {
//       printf("Lower number please!\n");
//     }
//     else if(guess<number)
//     {
//       printf("Higher number please!\n");
//     }
//     else
//     {
//       printf("You guessed it in %d attempts\n",nguesses);
//     }nguesses++;
//   }while(guess!=number);
//   return 0;
// }


//FUNCTIONS BASICS
// #include<stdio.h>
////FUNCTION DECLARATION
// void GoodMorning();
// void GoodAfternoon();
// void GoodEvening();
// int main()
// {
//  //FUNCTION CALL
//    GoodMorning();
//    GoodAfternoon();
//    GoodEvening();
// }

//// FUNCTION DEFINITION
// void GoodMorning()
// {
//   printf("Good Morning\n");
//   //GoodAfternoon();
// }
// void GoodAfternoon()
// {
//   printf("Good Afternoon\n");
//   //GoodEvening();
// }
// void GoodEvening()
// {
//   printf("Good Evening\n");
// }

//SUM OF 2 NO.S
// #include <stdio.h>
// int sum(int a,int b);
// int main()
// {
//   int c = sum(25,16);
//   printf("Sum = %d",c);
//   return 0;
// }

// int sum(int x,int y)
// {
//   int sum;
//   sum=x+y;
//   //printf("Sum = %d",sum);
//   return sum;
// }

//AREA OF SQ
// #include <stdio.h>
// float area(float);
// int main()
// { 
//   float A;
//   float s;
//   printf("Enter the side of the square\n");
//   scanf("%f",&s);
//   A=s*s;
//   printf("Area=%f\n",A);
//   return 0;
// }

// float area(float k)
// {
//   float X = k*k;
//   return X;
// }


//FACTORIAL USING FUNCTIONS : fact(n)=n*fact(n-1) **(VERY IMP)
// #include <stdio.h>
// int fact(int );
// int main()
// { 
//   int k;
//   printf("Enter a number\n");
//   scanf("%d",&k);
//   fact(k);
//   printf("Factorial of %d = %d",k,fact(k));
//   return 0;
// }
// int fact(int x)
// {
//   if(x==0||x==1)
//   {return 1;}
//   else
//   {return x*fact(x-1);}
// }

//AVERAGE OF 3 NO.S
// #include<stdio.h>
// float avg(int, int, int);
// int main()
// {
//   int a,b,c;
//   printf("Enter the 3 no.s\n");
//   scanf("%d %d %d",&a,&b,&c);
//   float average=avg(a,b,c);
//   printf("The average is %f\n",average);
//   return 0;
// }
// float avg(int x,int y,int z)
// {
//   float sum;
//   sum=x+y+z;
//   return sum/3;
// }

//CELCIUS TO FARHENIET
// #include <stdio.h>
// float ctof(int);
// int main()
// {
// int c;
// printf("Enter the temperature in celcius\n");
// scanf("%d",&c);
// float f=ctof(c);
// printf("The temperature in farheniet is %f\n",f);
// }
// float ctof(int x)
// {
//   float y=1.8*x+32;
//   return y;
// }

//FORCE OF ATTRACTION OF A BODY OF MASS M EXERTED BY EARTH
// #include <stdio.h>
// float W(int);
// int main()
// {
//   int m;
//   printf("Enter the mass of the body in kgs\n");
//   scanf("%d",&m);
//   float weight = W(m);
//   printf("The force of attraction of a body of mass m exerted by earth is %f\n",weight);
// }
// float W(int x)
// { float mg = x*9.8;
//   return mg;
// }



//FIBONACCI SERIES: fib(n)=fib(n-1)+fib(n-2) **(VERY IMP)
/*#include <stdio.h>
int fibonacci(int);
int main() 
{
    int n, i;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    fibonacci(n);
    for (i = 0; i < n; i++) 
    {
    printf("%d ", fibonacci(n));
    }
    return 0;
}
int fibonacci(int n) 
{
    if (n == 0 || n == 1) 
    {return n;}
    else 
    {return fibonacci(n-1) + fibonacci(n-2);}
}*/



//SUM OF N NATURAL NO.S (IMP)
// #include<stdio.h>
// int sum(int);
// int main()
// { 
//   int n,s;
//   printf("Enter the number\n");
//   scanf("%d",&n);
//   s=sum(n);
//   printf("Sum is %d\n",s);
// }
// int sum(int n)
// {
//   int sum=0;
//   for(int i=0;i<=n;i++)
//     {
//       sum+=i;
//     }
//   return sum;
// }


//IMP STAR PATTERN PRINTING  **(VERY IMP)
// #include <stdio.h>
// void printpattern(int);    ;
// int main()
// {
//   int n;
//   printf("Enter the number of rows\n");
//   scanf("%d",&n);
//   printpattern(n);
//   return 0;
// }

// void printpattern(int x)
// {
//   if(x==1)
//   {
//     printf("*\n");
//     return ;
//   }
//   printpattern(x-1);
//   for(int i=0;i<(2*x-1);i++)
//     {
//     printf("*");
//     }
//     printf("\n");
// }




//POINTERS BASICS
/* #include <stdio.h>
 int main()
 {
   int i=8;  int *j=&i;
  printf("The value of i is %d\n",i); //value of i
  printf("The value of i is %d\n",*j); //value at address of i 
  printf("The address of i is %u\n", &i); //address of i
  printf("The address of i is %u\n",j); //value of j
  printf("The address of j is %u\n",&j); //address of j
  printf("The value of i is %u\n",*(&j)); //value at adress of j
  return 0;
 }
*/


//IN CALL BY VALUE AFTER CALLING FUNC IT WONT BE CHANGED
// #include<stdio.h>
// int sum(int a,int b);
// int main()
// {
//   int a=4,b=7;
//   printf("The value of a and b is %d and %d\n",a,b);
//   printf("sum=%d\n",sum(a,b));
//   printf("The value of a and b after function call is %d and %d\n",a,b);
//   return 0;
// }
// int sum(int x,int y)
// {
//   int c;
//   c=x+y;
//   x=3434;
//   y=2323;
//   return c;
// }



//SWAPING EXAMPLE TO UNDERSTND CALL BY VALUE AND CALL BY REFERENCE 
// #include <stdio.h>
// void wrong_swap(int a,int b);
// void swap(int *a,int *b);
// int main()
// {
//   int x=3,y=4;
//   printf("The value of x and y before swap is %d and %d\n",x,y);
//   //wrong_swap(x,y); //will not work due to call by value
//   swap(&x,&y); //will work due to call by reference
//   printf("The value of x and y after swap is %d and %d\n",x,y);
//   return 0;
// }
// void wrong_swap(int a, int b)
// {
//   int temp;
//   temp=a;
//   a=b;
//   b=temp;
// }
// void swap(int *a,int *b)
// {
//   int temp;
//   temp=*a;
//   *a=*b;
//   *b=temp;
// }



//PRINT THE ADDRESS AND VALUE AT THE ADDRESS OF THE VARIABLE 
/* #include <stdio.h>
 int main()
{
   int a=6,*ptr;
   ptr=&a;
   printf("The address of variable a is %u\n",&a); //address of a ~ ptr = &a
   printf("The value of variable a is %d\n",*ptr); //value at address of a
   return 0;
}*/




//THE ADDRESSES OF SAME VARIABLE ARE DIFF WHEN A VARIABLE IS PASSED TO A FUNCTION AND PRINTED ITS ADDRESS 
/*#include <stdio.h>
 void printadd(int a)
 {
   printf("The address of variable a is %u\n",&a); //next
 }
 int main()
 {
   int i=4;
   printf("The value of vaiarble i is %d\n",i);
   printadd(i);
   printf("The address of variable i is %u\n",&i); //first
return 0;
}*/



//CHANGE THE VALUE OF THE VARIABLE TO THE TEN TIMES OF ITS CURRENT VALUE
//CALL BY REFERENCE //VALUE CHANGES BY 10 TIMES
/*#include <stdio.h>
void swap(int *n)
{
  (*n)*=10;
}
 int main()
{
   int num;
   printf("Enter the number\n");
   scanf("%d",&num);
   printf("no. is %d\n",num);
   swap(&num);
   printf("no. is %d\n",num);
 }*/



//CALL BY VALUE // NO CHANGE IN VALUE
/*#include <stdio.h>
void swap(int n)
 {
   (n)*=10;
 }
int main()
 {
   int num;
   printf("Enter the number\n");
   scanf("%d",&num);
   printf("no. is %d\n",num);
   swap(num);
   printf("no. is %d\n",num);
 }
*/




//CALCULATE SUM AND AVERAGE USING POINTERS
/*#include<stdio.h>
 void sum_avg(int a,int b,int c,int d,int e,int *sum,float *avg)
 {
   *sum = a + b + c + d + e;
   *avg = (*sum)/5.0;
 }

 int main()
 {
   int i,j,k,l,m,sum;
   float avg;
   printf("Enter the five no.s:\n");
   scanf("%d %d %d %d %d",&i,&j,&k,&l,&m);
   sum_avg(i,j,k,l,m,&sum,&avg);
   printf("The value of sum=%d\n",sum);
   printf("The value of avg=%f\n",avg);
   return 0;
 }*/




//PRINT THE VALUE OF VARIABLE I USING POINTER TO POINTER
/*#include <stdio.h>
 int main()
 {
   int i = 345;
   int *ptr;
   int **ptr_ptr;
   ptr=&i;
   ptr_ptr=&ptr;
   printf("The value of i is %d",**ptr_ptr);
   return 0;
 }*/




//ARRAYS
/*#include <stdio.h>
 int main()
 {
   int marks[4];
   printf("Enter the value of marks for student 1\n");
   scanf("%d",&marks[0]);
   printf("Enter the value of marks for student 2\n");
   scanf("%d",&marks[1]);
   printf("Enter the value of marks for student 3\n");
   scanf("%d",&marks[2]);
   printf("Enter the value of marks for student 4\n");
   scanf("%d",&marks[3]);

   printf("You have entered %d %d %d and %d\n",marks[0],marks[1],marks[2],marks[3]);
   return 0;
 }
*/




//ARRAY WITH FOR LOOP
/*#include <stdio.h>
 int main()
 {
   int marks[5];
   for(int i=0;i<5;i++)
     {
       printf("Enter the value of marks for student %d:",i+1);
       scanf("%d",&marks[i]);
     }
   for(int i=0;i<5;i++)
     {
       printf("The value of marks for student %d is %d\n",i+1,marks[i]);
     }
 return 0;
 }
*/



//INCREMENT AND DECREMENT IN ADDRESS USING POINTER ARITHMETIC
/* #include<stdio.h>
 int main()
 {
   //increment in int is by 4 bytes
   int i =34;
   int *pt=&i;
   printf("The address of i is %u\n",pt);
   pt+=1; //i.e.pt=pt+1;
   pt++;  
   pt++;
   pt--;
   printf("The address of i is %u\n",pt);
   //increment in char is by 1 byte
   char c =34;
   char *ptr=&c;
   printf("The address of c is %u\n",ptr);
   ptr+=1; 
   ptr++;
   ptr++;
   ptr--;
   printf("The address of c is %u\n",ptr);
   return 0;
  }
*/


  
//
/* #include<stdio.h>
 int main()
 {
   int marks[4];
   int *ptr;
   //ptr=&marks[0];
   ptr=marks;
   for(int i=0;i<4;i++)
   {
     printf("Enter the value of marks for student %d:\n",i+1);
     scanf("%d",ptr);
     ptr++;
   }
   for(int i=0;i<4;i++)
   {
     printf("The value of marks for student %d is %d\n",i+1,marks[i]);  
   }
   return 0;
 }
*/


//@@@@
/*#include <stdio.h>
// void printarray(int *ptr,int n)
// {
//   for(int i=0;i<n;i++)
//     {
//       printf("The value of element %d is %d\n",i+1,*(ptr+i));
//     }
// }

 void printarray(int ptr[],int n)
 {
   for(int i=0;i<n;i++)
     {
       printf("The value of element %d is %d\n",i+1,ptr[i]);
     }
   //ptr[2]=5555;
 }

 int main()
 {
   int arr[]={6,12,18,24,30,36,42};
   printarray(arr,7);
   //printf("%d",arr[2]);
   return 0;
 }*/




//2D ARRAY to take entry of marks of 3 of students for 5 subjects 
/*#include <stdio.h>
 int main()
 {
    int n_students=3;
    int n_subjects=5;
    int marks[3][5];
   
   //nested for loop to take the entries
    for(int i=0;i<n_students;i++)
  {
   for(int j=0;j<n_subjects;j++)
     {
       printf("Enter the marks of student %d in subject %d:\n",i+1,j+1);
       scanf("%d",&marks[i][j]);
     }
 }
//nested for loop to print the result
 for(int i=0;i<n_students;i++)
 {
   for(int j=0;j<n_subjects;j++)
     {
       printf("The marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
     }
 }
  
 return 0;  
 }
*/




//2D ARRAY FOR MATRIX MULTIPLICATION OF 3X3 (ERROR)
// #include<stdio.h>
// int main()
// {
// int a[3][3],b[3][3],c[3][3],i,j,k;
//   printf("Enter the elements of 3x3 matrix 1:\n");
//   for(i=0;i<3;i++)
//   {
//     for(j=0;j<3;j++)
//     {
//       scanf("%d",&a[i][j]);
//     }
//   }
//   printf("Enter the elements of 3x3 matrix 2:\n");
//   for(i=0;i<3;i++)
//   {
//     for(j=0;j<3;j++)
//     {
//       scanf("%d",&b[i][j]);
//     }
//   }
  
//   for(i=0;i<3;i++)
//   {
//     for(j=0;j<3;j++)
//       {
//         c[i][j]=0;
//         for(k=0;k<3;k++)
//           {
//             c[i][j]+=a[j][k]*b[k][j];
//           }
//       }
//   }
//     printf("The product of the two matrices is\n");
//   for(i=0;i<3;i++)
//   {
//     for(j=0;j<3;j++)
//       {
//         printf("%d\t",c[i][j]);
//       }
//     printf("\n");
//   }
// return 0;
//   }



//MULTIPLICATION TABLE
/*#include <stdio.h>
 int main()
 {
   int arr[10];
   int n;
   printf("Enter the no.\n");
   scanf("%d",&n);
printf("The multiplication table of %d is as follows\n",n);

 for(int i=0;i<10;i++)
{arr[i]=n*(i+1);printf("%dX%d=%d\n",n,i+1,arr[i]);}
   
 //for(int i=0;i<10;i++)
  //   {
  //  printf("%dX%d=%d\n",n,i+1,n*(i+1));
  //   }
   return 0;
 }
*/




//REVERSE THE ORDER OF THE ARRAY (HALF SWAPING) (IMP)

/* #include <stdio.h>
 void reverse(int *arr,int n)
 {  // swaping to reverse the array but just reverse the half of the array 
   // swapping 1st with last 2nd with 2nd last and so on..
   int temp; //third variable
   for(int i=0;i<n/2;i++)
   {
     temp=arr[i];       //arr[1]=1 arr[i] 
     arr[i]=arr[n-i-1]; //arr[6]=7 /arr[n-i-1] 
     arr[n-i-1]=temp;
  }  
  }

 int main()
 {
  int arr[ ]={1,2,3,4,5,6,7};
   reverse(arr,7);
  for(int i=0;i<7;i++)
    {
      printf("The value of %d element is : %d\n",i+1,arr[i]);
     }
  return 0;
 }*/




//COUNT NUMBER OF +VE INTEGERS IN AN ARRAY
//  #include <stdio.h>
// int count_positive(int arr[], int size) 
// {
//     int count = 0;
//     for (int i = 0; i < size; i++) 
//     {
//         if (arr[i] > 0) 
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main() 
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//   //This line computes the size of the arr array by dividing the total size of 
//   //the array in bytes by the size of each individual element in bytes.
  
//     int positive_count = count_positive(arr, size);
//   //This line calls the count_positive function with the arr array and its size size, and stores the result in a variable positive_count.
  
//     printf("There are %d positive integers in the array.\n", positive_count);
//     return 0;
// }
 


//MULTIPLICATION TABLE OF any 3 no.s
/*#include <stdio.h>
void Table( int *mult,int num,int n)
{ // 2 for loops
  for(int i=0;i<n;i++)
    {
      mult[i]=num*(i+1);
    }
  for(int i=0;i<n;i++)
    {
      printf("%dX%d=%d\n",num,i+1,mult[i]);
    }
}

  int main()
{ 
  int x,y,z;
  int mult[3][10];
 printf("Enter the 3 multiplication tables you want\n");
 scanf("%d %d %d",&x,&y,&z);
  Table(mult[0],x,10); //location,num,10
  Table(mult[1],y,10);
  Table(mult[2],z,10);
  return 0;
}*/


//Q9
// #include <stdio.h>
// int main()
// {
//   int arr[2][3][4];
//   for(int i=0;i<2;i++)
//     {
//       for(int j=0;j<3;j++)
//         {
//           for(int k=0;k<4;k++)
//             {
//               printf("The address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
//             }
//         }
//     }
//   return 0;
// }



//STRINGS
/*#include <stdio.h>
int main()
{
//char str[]="Anushka";
char str[]={'A','n','u','s','h','k','a','\0'};
char *ptr=str; 
while(*ptr!='\0')
{
   printf("%c",*ptr);
  ptr++;
}
  return 0;
}*/



//print "ANUSHKA" AND 'A','n','u','s','h','k','a','\0' in convinient way using %s
//string %s prints the entire string where as %c prints string by string->'',''
/*#include <stdio.h>
int main()
{
  // char str[]={'A','n','u','s','h','k','a','\0'};
  char *ptr="Anushka";
  printf("%s",ptr); //str
  return 0;
}*/



//TAKING ENTRY FROM USER using %s
/*#include <stdio.h>
int main()
{
char s[34];
printf("Enter your name:");
scanf("%s",s);
  printf("Your name is %s",s);
  return 0;
}*/



//gets() to get the multi-word in the string and and puts() used to print it
/*#include <stdio.h>
#include <string.h>
int main()
{
  char s[7];
  printf("Enter your name:\n");
  gets(s);  
  //scanf("%s",s);<can't print full string thus gets() is used
  puts(s);
  //printf("Your name is %s",s);
  return 0;
}*/



//Declaring a string char *ptr ="anushka"; or char ptr[]="anushka";
/*#include <stdio.h>
int main()
{
  char *ptr = "cake";
  //char ptr[]="cake"; //can't get changed by icecream
  ptr = "icecream";
  printf("%s",ptr);
  return 0;
}*/



//strlen() calculates the length comes from #include<string.h> library
/*#include <stdio.h>
#include<string.h>
int main()
{
  char *st="Anushka";
  int a = strlen(st);
  printf("The length of string %s is %d",st,a);
  return 0;
}*/


//strcpy() - copies one string in another
/*#include <stdio.h>
#include <string.h>
int main()
{
  char *st="Anushka";   //source string
  char st2[45];         //target string
  strcpy(st2,st);       //strcpy(target,source);
  printf("MY NAME IS %s",st2);
  return 0;
}*/


//strcat() - combines 2 strings
/*#include<stdio.h>
#include<string.h>
int main()
{
  char name[45]="ANUSHKA";
  char *surname="_MURADE";
  strcat(name,surname);
  printf("%s",name);
  return 0;
}*/



//strcmp()-compares the strings and gives the difference in the asci values
/*#include <stdio.h>
#include<string.h>
int main()
{
char st1[45]="anu";
  char *st2="ANU";
  int val=strcmp(st1,st2);
  printf("NOW THE val is %d",val);
  return 0; 
}*/


//ADVANCED C PROGRAM //ERROR
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char st1[34];
// char st2[34];
// char c;
// int i=0;

// printf("Enter the value of first string\n");
// scanf("%s",st1);
// printf("Enter the value of second string character by character\n");

// while(c!='\n')
// {
//   fflush(stdin);
//   scanf("%c",&c);
//   st2[i]=c;
//   i++;
// }
// st2[i-1]='\0';
// printf("The value of st1 is %s\n",st1);
// printf("The value of st2 is %s\n",st2);
// printf("strcmp for these strings returns %d",strcmp(st1,st2));
//   return 0;
// }


//STRLEN() random Q
// #include <stdio.h>
// int strlen(char *st)
// {
//  char *ptr=st;
//   int len=0;
//   while(*ptr!='\0')
//     {
//       len++;
//       ptr++;
//     }
//   return len;
// }

// int main()
// {
// char st[]="Anushka";
//   int l=strlen(st);
//   printf("The length of this string is %d",l);
//   return 0;
// }


//SLICING
//breaking the string
/*#include<stdio.h>
void slice(char st[],int m,int n) //string,start,end
{
int i=0;
  while((m+i)<n) //start+0<end
    {
      st[i]=st[i+m]; //0=0+start(upgrade)
      i++;
    }
  st[i]='\0';
}

int main()
{
  char st[]="ANUSHKAMURADE2005";
  slice(st,0,13);
  printf("%s",st);
  return 0;
}*/





//ENCRYPT THE STRING (VERY IMP)
/*#include<stdio.h>
void encrypt(char *c)
{
  char *ptr=c;
  while(*ptr!='\0')
    {
      *ptr=*ptr+1; 
      //Within the loop, each character in the string is encrypted by incrementing its ASCII value by 1. This is done by dereferencing the pointer ptr and incrementing the value it points to using the *ptr = *ptr + 1 statement.
      ptr++; 
      //After encrypting a character, the pointer ptr is incremented to point to the next character in the string.
    }
}

int main()
{
  char c[]="THIS FILE IS ENCRYPTED";
  encrypt(c);
  printf("Encrypted string is : %s",c);
  return 0;
}*/



//DECRYPT THE STRING(VERY IMP)
/*#include<stdio.h>
void decrypt(char *c)
{
  char *ptr=c;
  while(*ptr!='\0')
    {
      *ptr=*ptr-1; 
      //Within the loop, each character in the string is decrypted by decrementing its ASCII value by 1. This is done by dereferencing the pointer ptr and subtracting 1 from the value it points to using the *ptr = *ptr - 1 statement.
      ptr++; 
      //After decrypting a character, the pointer ptr is incremented to point to the next character in the string.
    }
}

int main()
{
  char c[]="UIJT!GJMF!JT!FODSZQUFE";
  decrypt(c);
  printf("decrypted string is : %s",c);
  return 0;
}*/



//OCCURENCE of a given character
/*#include<stdio.h>
int occurence(char st[],char c)
{
  char *ptr=st;
  int count =0;
  while(*ptr!='\0')
    {
      if(*ptr==c)
      {
        count++;
      }
      ptr++;
    }
  return count;
}

int main()
{
   char st[]="ANUSHKA222";
  int count=occurence(st,'2');
  printf("Occurence = %d",count);
  return 0;
}*/




//********************************************
//11:34
//STRUCTURES

/*#include<stdio.h>
#include <string.h>
struct employee 
{
int code;
float salary;
char name[10];
};
int main()
{
  struct employee e1;
  e1.code=100;
  e1.salary=34.454;
  //e1.name="Harry";
  strcpy(e1.name,"abc");
  printf("%d\n",e1.code);
  printf("%.3f\n",e1.salary);
  printf("%s\n",e1.name);
  return 0;
}*/


/*#include <stdio.h>
struct employee
{
int code;
float salary;
char name[];
};
int main()
{
  struct employee e1,e2,e3;
  printf("Enter the value for code of e1\n");
  scanf("%d",&e1.code);
  printf("Enter the value for salary of e1\n");
  scanf("%f",&e1.salary);
printf("Enter the value for name of e1\n");
  scanf("%s",e1.name);

printf("\n");
  
printf("Enter the value for code of e2\n");
  scanf("%d",&e2.code);
printf("Enter the value for salary of e2\n");
  scanf("%f",&e2.salary);
printf("Enter the value for name of e2\n");
  scanf("%s",e2.name);
  
  return 0;
}*/


/*#include <stdio.h>
#include <string.h>
struct employee
{
int code;
float salary;
char name[10];
};
int main()
{
  struct employee facebook[100];
  facebook[0].code=100;
  facebook[0].salary=100.45;
  strcpy(facebook[0].name,"anu");
  facebook[1].code=100;
  facebook[1].salary=100.45;
  strcpy(facebook[1].name,"ok");
  return 0;
}*/


/*#include<stdio.h>
struct employee
{
int code;
float salary;
char name[20];
};
int main()
{
struct employee harry={100,34.23,"Harry"};
printf("Code is %d\n",harry.code);
printf("Salary is %f\n",harry.salary);
printf("Name is %s\n",harry.name);
  return 0;
}*/



/*# include <stdio.h>
#include<string.h>
struct employee
{
int code;
float salary;
char name[20];
};
int main()
{
  struct employee e1;
  struct employee *ptr;

  ptr=&e1;
  //(*ptr).code=101;  //wrong--> *(ptr).code=101;
  ptr->code=101;
  printf("%d\n",e1.code);
  return 0;
}*/



/*#include<stdio.h>
#include<string.h>
struct employee
{
int code;
float salary;
char name[20];
};
void show(struct employee emp)
{
  printf("%d\n",emp.code);
  printf("%f\n",emp.salary);
  printf("%s\n",emp.name);
  emp.code=34;
}
  int main()
{
//declaring e1 and ptr
  struct employee e1;
  struct employee *ptr;

//pointing ptr to e1
  ptr=&e1;
  //(*ptr).code=101;  //wrong--> *(ptr).code=101;
  ptr->code=101;
  ptr->salary=11.01;
  strcpy(ptr->name,"harry");
  show(e1);
  printf("%d\n",e1.code); //no change due to call by value
  return 0;
}*/



//typedef - used to make custom datatype
/*#include<stdio.h>
#include<string.h>
typedef struct employee
{
int code;
float salary;
char name[20];
} emp ;
void show(struct employee emp)
{
  printf("%d\n",emp.code);
  printf("%f\n",emp.salary);
  printf("%s\n",emp.name);
}
  int main()
{
//declaring e1 and ptr
  emp e1;
  emp *ptr;

//pointing ptr to e1
  ptr=&e1;
  //(*ptr).code=101;  //wrong--> *(ptr).code=101;
  ptr->code=101;
  ptr->salary=11.01;
  strcpy(ptr->name,"harry");
  show(e1);
  return 0;
}*/




//Q1
/*#include <stdio.h>

struct vector
{
int x,y;
};

int main()
{
  struct vector v1;
  v1.x=34;
  v1.y=54;
  printf("Vector = %di+%dj\n",v1.x,v1.y);  
  return 0;
}*/


/*#include <stdio.h>
struct vector
{
int x,y;
};
struct vector sumvector(struct vector v1,struct vector v2)
{
  struct vector result;
  result.x=v1.x+v2.x;
  result.y=v1.y+v2.y;
  return result;
}
int main()
{
  struct vector v1,v2,sum;
  v1.x=1;
  v1.y=10;
  printf("X dim is %d and Y dim is %d\n",v1.x,v2.y);
  v2.x=2;
  v2.y=12;
  printf("X dim is %d and Y dim is %d\n",v1.x,v2.y);
  sum=sumvector(v1,v2);
  printf("X dim is %d and Y dim is %d\n",sum.x,sum.y);
  return 0;
}*/


//same program as above using typedef
/*#include <stdio.h>
typedef struct vector
{
int x,y;
} vector;
 vector sumvector(vector v1,vector v2)
{
  vector result;
  result.x=v1.x+v2.x;
  result.y=v1.y+v2.y;
  return result;
}
int main()
{
  vector v1,v2,sum;
  v1.x=1;
  v1.y=2;
  printf("X dim is %d and Y dim is %d\n",v1.x,v2.y);
  v2.x=3;
  v2.y=4;
  printf("X dim is %d and Y dim is %d\n",v1.x,v2.y);
  sum=sumvector(v1,v2);
  printf("X dim is %d and Y dim is %d\n",sum.x,sum.y);
  return 0;
}*/



//Q6
/*#include <stdio.h>
typedef struct complex
{
int real;
int complex;
} comp;
void display(comp c)
{
  printf("The value of real part is %d\n",c.real);
  printf("The value of imaginary part is %d\n",c.complex);
}
int main()
{
comp cnums[5];
for(int i =0;i<5;i++)
    {
      printf("Enter the real value for %d num\n",i+1);
      scanf("%d",&cnums[i].real);
      printf("Enter the complex value for %d num\n",i+1);
      scanf("%d",&cnums[i].complex);
    }
for(int i =0;i<5;i++)
    {
      display(cnums[i]);
    }
  return 0;
}*/


//Q9
/*#include<stdio.h>
typedef struct date
{
  int date;
  int month;
  int year;
} date;
void display(date d)
{
  printf("The date is %d/%d/%d\n",d.date,d.month,d.year);
}
int datecmp(date d1,date d2)
{//Make decision on the basis of year comparison
  if(d1.year<d2.year)
  {return 1;}
  if(d1.year>d2.year)
  {return -1;}
//Make decision on the basis of month comparison
  if(d1.month<d2.month)
  {return 1;}
  if(d1.month>d2.month)
  {return -1;}
//Make decision on the basis of date comparison
  if(d1.date<d2.date)
  {return 1;}
  if(d1.date>d2.date)
  {return -1;}
  return 0;
}
int main()
{
  //date d={16,10,04};
  //display(d);
  date d1={1,1,1};
  date d2={1,1,1};
  display(d1);
  display(d2);
  int a=datecmp(d1,d2);
  printf("Date comparison function returns : %d\n",a);
  return 0;
}
*/



//File I/O - "w","wb","r","rb","a"
/*#include<stdio.h>
int main()
{
  FILE *ptr;
  int num;
  int num2;
  //ptr=fopen("sample2.txt","w");
  ptr=fopen("anu.txt","r");
  fscanf(ptr,"%d",&num);
  fscanf(ptr,"%d",&num2);
  fclose(ptr);
  printf("The value of num is %d\n",num);
  printf("The value of num2 is %d\n",num2);
  //for(num=0;num<10;num++){fscanf(ptr,"%d",&num);
  //printf("The value of num is %d\n",num);}
  return 0;
}*/



//
/*#include<stdio.h>
int main()
{
  FILE *ptr;
  int num;
  int num2;
  ptr=fopen("anu.txt","r");
  if(ptr==NULL)
  {
    printf("This file does not exist\n");
  }
  else
  {
  fscanf(ptr,"%d",&num);
  fscanf(ptr,"%d",&num2);
  fclose(ptr);
  printf("The value of num is %d\n",num);
  printf("The value of num2 is %d\n",num2);
  }
  return 0;
}*/



/*#include<stdio.h>
int main()
{
  FILE*fptr;
  int number=45;
  fptr=fopen("generated.txt","w");
  //fprintf(fptr,"The number is %d\n",number);
  for(number=0;number<20;number++)
    {
      fprintf(fptr,"The number is %d\n",number);
    }
  //fprintf(fptr,"The number is %d\n",number);
  fclose(fptr);
  return 0;
}*/



/*#include<stdio.h>
int main()
{
  FILE *ptr;
  //fgetc demo for reading a file
  ptr=fopen("getcdemo.txt","r");
  //char c=fgetc(ptr);
  //printf("The value of my character is %c\n",c);
printf("The value of my character is %c\n",fgetc(ptr));
printf("The value of my character is %c\n",fgetc(ptr));
printf("The value of my character is %c\n",fgetc(ptr));
printf("The value of my character is %c\n",fgetc(ptr));
printf("The value of my character is %c\n",fgetc(ptr));
  return 0;
}*/



/*#include<stdio.h>
int main()
{
  FILE *ptr;
  ptr=fopen("putcdemo.txt","w");
  putc('c',ptr);
  putc('c',ptr);
  putc('c',ptr);
  fclose(ptr);
  return 0;
}*/


/*#include<stdio.h>
int main()
{
  FILE *ptr;
  char c;
  ptr=fopen("getcdemo.txt","r");
  c=fgetc(ptr);
  while(c!=EOF)
{
  printf("%c",c);
  c=fgetc(ptr);
}
  return 0;
}*/


//Q1
/*#include<stdio.h>
int main()
{
  int a,b,c;
  FILE*ptr;
  ptr=fopen("pr01.txt","r");
  fscanf(ptr,"%d %d %d",&a,&b,&c);
  printf("The values of a b c is %d %d %d",a,b,c);
  return 0;
}*/

//Q2
/*#include<stdio.h>
int main()
{
  FILE *ptr;
  int num;
  printf("Enter the integer you need the table of:\n");
  scanf("%d",&num);
  ptr=fopen("table.txt","w");
  for(int i=1;i<=10;i++)
    {
      fprintf(ptr,"%d X %d = %d\n",num,i,num*i);
    }
  return 0;
}*/



/*#include<stdio.h>
int main()
{
  FILE *ptr1;
  FILE *ptr2;
  char c;
  ptr1=fopen("a.txt","r");
  ptr2=fopen("b.txt","w");
  c=fgetc(ptr1);
  while(c!=EOF)
    {
     fputc(c,ptr2);
      //fputc(c,ptr2);
      c=fgetc(ptr1);
    }
  fclose(ptr1);
  fclose(ptr2);
  return 0;
}*/


//GAME SNAKE WATER GUN
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you ,char comp)
{
  //returns 1 if you win,-1 if you lose and 0 if draw
  if(you==comp)
  {
    return 0;
  }
  if(you=='s' && comp=='w')
  {
    return 1;
  }
  else if(you=='w' && comp=='s')
  {
    return -1;
  }
   if(you=='w' && comp=='g')
  {
    return 1;
  }
  else if(you=='g' && comp=='w')
  {
    return -1;
  }
  if(you=='g' && comp=='s')
  {
    return 1;
  }
  else if(you=='s' && comp=='g')
  {
    return -1;
  }

}
int main()
{
  char you,comp;
  srand(time(0));
  int number=rand()%100+1;
  if(number<33)
  {
    comp='s';
  }
  else if(number>33 && number<66)
  {
    comp='w';
  }
  else
  {
    comp='g';
  }
  printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
  scanf("%c",&you);
  int result=snakewatergun(you,comp);
  printf("You choose %c and computer choose %c\n",you,comp);
  if(result==0)
  {
    printf("GAME DRAW!\n");
  }
  else if(result==1)
  {
    printf("YOU WIN!\n");
  }
  else if(result==-1)
  {
    printf("YOU LOSE!\n");
  }
}*/


//DYNAMIC MEMORY  ALLOCATION
//malloc(n*sizeof(datatype)) memory allocation returns a pointer of type void
//calloc(n,sizeof(datatype)) 
//free(ptr) 
//realloc(ptr,newsize) 
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
   // printf("The size of int on my pc is %d\n",sizeof(int));
   // printf("The size of int on my pc is %d\n",sizeof(float));
   // printf("The size of int on my pc is %d\n",sizeof(char));
  ptr=(int *)malloc(6*sizeof(int));
  for(int i=0;i<6;i++)
  {
    printf("Enter the value of %d element\n",i);
    scanf("%d",&ptr[i]);
  }
  for(int i=0;i<6;i++)
  {
    printf("The value of %d element is %d\n",i,ptr[i]);
  }
  return 0;
}*/


/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  float *ptr;
  ptr=(float *)calloc(6,sizeof(int));
  // for(int i=0;i<6;i++)
  // {
  //   printf("Enter the value of %d element\n",i);
  //   scanf("%f",&ptr[i]);
  // }
  for(int i=0;i<6;i++)
  {
    printf("The value of %d element is %f\n",i,ptr[i]);
  }
  return 0;
}*/



/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  float *ptr;
  int n;
  printf("How many integers do you want to enter\n");
  scanf("%d",&n);
  ptr=(float *)calloc(n,sizeof(int));
  for(int i=0;i<n;i++)
  {
    printf("Enter the value of %d element\n",i+1);
    scanf("%f",&ptr[i]);
  }
  for(int i=0;i<n;i++)
  {
    printf("The value of %d element is %f\n",i+1,ptr[i]);
  }
  return 0;
}*/



/*#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  ptr=(int *)malloc(6*sizeof(int));
  
  for(int i=0;i<6;i++)
  {
    printf("Enter the value of %d element\n",i+1);
    scanf("%d",&ptr[i]);
  }
  //reallocate ptr using realloc()
  ptr=realloc(ptr,10*sizeof(int));
  for(int i=0;i<10;i++)
  {
    printf("Enter the value of %d element\n",i+1);
    scanf("%d",&ptr[i]);
  }
  for(int i=0;i<10;i++)
  {
    printf("The value of %d element is %d\n",i+1,ptr[i]);
  }
  return 0;
}*/



//Q4
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
  ptr=(int *)malloc(5*sizeof(int));
  for(int i=0;i<5;i++)
    {
      printf("Enter the value of %d elements\n",i+1);
      scanf("%d",&ptr[i]);
    }
  ptr=(int *)realloc(ptr,10*sizeof(int));
  for(int i=0;i<10;i++)
    {
    printf("Enter the value of %d element:\n",i+1);
      scanf("%d",&ptr[i]);
    }
  return 0;
}*/


//15:06:00











