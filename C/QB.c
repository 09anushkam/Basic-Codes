// Q.8
/*#include<stdio.h>
int main()
{
  float a,b; //4-VARIABLES
  int n;
  double c;
  printf("Enter the 2 no.s\n");
  scanf("%f%f",&a,&b);
  printf("Enter 1 for addition operation\n Enter 2 for subtraction operation\n
Enter 3 for multiplication operation\n Enter 4 for division operation\n Enter 5
for modulo operation\n"); scanf("%d",&n); switch(n)
  {
      case 1:
      c=a+b;
      printf("Addition  is %f",c);
      break;

      case 2:
      c=a-b;
      printf("Subtraction is %f",c);
      break;

      case 3:
      c=a*b;
      printf("Multiplication is %f",c);
      break;

      case 4:
      c=a/b;
      printf("Division is %f",c);
      break;

      case 5:
      c=(int)a%(int)b;
      printf("Modulo is %f",c);
      break;

      default:
      printf("invalid input");
    }
  return 0;
}*/

// Q.9
/*#include <stdio.h>
int main() {
    int i, j, is_prime; //3-VARIABLES
    // Check each number from 1 to 100
    for (i = 2; i <= 100; i++)
    {
        is_prime = 1; // Assume the number is prime to start
//for{for{if}}{if}}
        // Check if the number is divisible by any number between 2 and i/2
        for (j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0; // The number is not prime
                break;
            }
        }
        // Print the number if it's prime
        if (is_prime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}*/


// Q.10
/*#include <stdio.h>
int main()
{
    int n,i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Even numbers from 1 to %d:\n", n);
    while(i<=n)
    {
    if(i%2==0)
    {
    printf("%d\n",i);
    }
        i++;
    }
    return 0;
}*/


// Q.11
/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number to get it's multiplication table\n");
    scanf("%d",&n);
    for(int i=1;i<=20;i++)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    return 0;
}*/


// Q.12
/*#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &day);

    if (day == 1)
    {
     printf("Sunday\n");
    }
    else if (day == 2)
    {
     printf("Monday\n");
    }
    else if (day == 3)
    {
     printf("Tuesday\n");
    }
    else if (day == 4)
    {
     printf("Wednesday\n");
    }
    else if (day == 5)
    {
     printf("Thursday\n");
    }
    else if (day == 6)
    {
     printf("Friday\n");
    }
    else if (day == 7)
    {
     printf("Saturday\n");
    }
    else
    {
     printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}*/


// Q.14
/*#include<stdio.h>
int main()
{
 int a,b,c;
 printf("\nEnter 1st Number =");
 scanf("%d",&a);
 printf("\nEnter 2nd Number =");
 scanf("%d",&b);
 printf("\nEnter 3rd Number =");
 scanf("%d",&c);
 if (a > b)
 {
 if (a > c)
 printf("%d is the largest number",a);
 else
 printf("%d is the largest number", c);
 }
 else
 {
 if (b > c)
 printf("%d is the largest number", b);
 else
printf("%d is the largest number", c);
 }
 return 0;
}*/


// Q.16
/*#include <stdio.h>

// Function declaration
int sum(int, int);
int main()
{
    int num1, num2, result;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    // Function call
    result = sum(num1, num2);
    printf("The sum is %d\n", result);
    return 0;
}
// Function definition
int sum(int x, int y)
{
    return x + y;
}*/

// Q.17 and 21
// Q 17) a)Function without arguments and without return value
/*#include<stdio.h>
void sum();                           //func declaration
void main()
{
    sum();                           //call func without arguments
}
void sum()
{
      int a,b,sum;
      printf("Enter a and b\n");
      scanf("%d%d",&a,&b);
      sum=a+b;
      printf("Sum=%d",sum);         //func def without return value
}*/

// Q 17) b)Function without arguments and with return value
/*#include<stdio.h>
int sum();                             //func declaration
void main()
{
    int s=sum();                       //call func without arguments
    printf("sum=%d",s);

}
int sum()
{
    int a,b,sum;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return sum;                      //func def with return value
}*/

// Q 21) a)Function with arguments and without a return type
/*#include<stdio.h>
void sum(float,float);          //func declaration
void main()
{
    float a,b;
    printf("Enter a and b\n");
    scanf("%f%f",&a,&b);
    sum(a,b);                 //call func with arguments
}
void sum(float x,float y)
{
    float s=x+y;                    //func def without return value
    printf("sum=%f",s);
}*/

// Q 21) b) Function with argument and with return value
/*#include<stdio.h>
int sum(int,int);
void main()
{
    int x,y,c;
    printf("Enter x & y\n");
    scanf("%d%d",&x,&y);
    c=sum(x,y);             //call func with arguments
    printf("sum=%d",c);
}
int sum(int a,int b)
{
    int s=a+b;
    return s;               //func def with return value
}*/


// Q.18
/*#include <stdio.h>
// Function declaration
int add(int,int);
int main()
{
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    // Function call
    int s = add(a,b);
    printf("The addition is %d\n", s);
    return 0;
}
// Function definition
int add(int x, int y)
{
    return x + y;
}*/


// Q.19
/*#include <stdio.h>
// Function declaration
float calculate_avg(int,int,int,int,int);
void main()
{
    int n1, n2, n3, n4, n5;
    float avg;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    // Function call
    avg = calculate_avg(n1,n2,n3,n4,n5);
    printf("The average is %f\n", avg);
}
// Function definition
float calculate_avg(int n1, int n2, int n3, int n4, int n5)
{
    float sum = n1+n2+n3+n4+n5;
    return sum /5.0;
}*/

// Q.20
/*#include <stdio.h>
// Function declaration
float aoc(float);
void main()
{
    float r, area;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &r);
    // Function call
    area = aoc(r);
    printf("The area of the circle is %f\n", area);
}
// Function definition
float aoc(float q)
{
    float a = 3.14*q*q;
    return (a);
}*/

// Q.23Explain recursion. Give any example and explain the recursion process.
// same as Q.24

// Q.24.Write a program to print factorial of number given by user using recursion. 
//FACTORIAL USING RECURSION  : fact(n)=n*fact(n-1)
/* #include <stdio.h>
 int fact(int );
 int main()
{
    int k;
    printf("Enter a number\n");
    scanf("%d",&k);
    printf("Factorial of %d = %d",k,fact(k));
    return 0;
  }
 int fact(int x)
 {
    if(x==0||x==1)
    {return 1;}
    else
    {return x*fact(x-1);} //RECURSIVE FUNCTION CALLING
 }*/

// Q.25
/*#include <stdio.h>
 void swap(int a,int b);
 int main()
 {
   int x=3,y=4;
   printf("The value of x and y before swap is %d and %d\n",x,y);
  swap(x,y);
  printf("The value of x and y after swap is %d and %d\n",x,y);
   return 0;
 }
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
 }*/

// Q.26
/* #include <stdio.h>
 void swap(int *a,int *b);
 int main()
 {
   int x=3,y=4;
   printf("The value of x and y before swap is %d and %d\n",x,y);
  swap(&x,&y); //will work due to call by reference
  printf("The value of x and y after swap is %d and %d\n",x,y);
   return 0;
 }
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
 }*/

// Q.27
// same as Q.26

// Q.28
//SAME AS Q.25,Q.26

// Q.29
/*#include<stdio.h>
 int sum(int a,int b,int c,int d,int e);
 float avg(int s);
 int main()
 {
   int i,j,k,l,m,s;
   float a;
   printf("Enter the five no.s:\n");
   scanf("%d %d %d %d %d",&i,&j,&k,&l,&m);
   s=sum(i,j,k,l,m);
   printf("The sum=%d\n",s);
   a=avg(s);
   printf("The avg=%f\n",a);
   return 0;
 }
 int sum(int a,int b,int c,int d,int e)
 {
   //int sum = a + b + c + d + e;
   return a+b+c+d+e;
 }
float avg(int sum)
{
    float avg = sum/5.0;
    return avg;
}*/

// Q.30
// FIBONACCI SERIES: fib(n)=fib(n-1)+fib(n-2)
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
    printf("%d ", fibonacci(i));
    }
    return 0;
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {return n;}
    else
    { return fibonacci(n-1) + fibonacci(n-2);}
}*/


// Q.32
/*int arr[5]={1,2,3,4,5};
int arr[]={1,2,3,4,5};
int arr[5]={1,2,3};
int arr[5]; //doubtful
printf("Enter the 5 elements of array\n");
for(int i=0;i<5;i++)
{arr[i]=i+1;}*/


// Q.33
/*#include<stdio.h>
void asc_sort(int a[10]);
void main()
{
 int a[10], i,sum=0;
 for(i=0;i< 10;i++)
 {
 printf("a[%d]=",i);
 scanf("%d", &a[i]);
 sum=sum+a[i];
 }
 printf("SUM=%d\n",sum);
 asc_sort(a);
 printf("AFTER SORTING:\n");
 for(i=0;i< 10;i++)
 {
 printf("%d\t", a[i]);
 }
 }
void asc_sort(int a[10])
{
 int i, j, temp;
 for(i=0;i< 10-1;i++)
 {
 for(j=i+1;j< 10;j++)
 {
 if(a[i]>a[j])
 {
 temp = a[i];
 a[i] = a[j];
 a[j] = temp;
 }
 }
 }
}*/


// Q.34
/*#include<stdio.h>
void asc_sort(int a[], int n);
void main()
{
 int a[100], i, n,sum=0;
 printf("Enter n:\n");
 scanf("%d", &n);
 for(i=0;i< n;i++)
 {
 printf("a[%d]=",i);
 scanf("%d", &a[i]);
 sum=sum+a[i];
 }
 printf("SUM=%d\n",sum);
 asc_sort(a,n);
 printf("Array in ascending order is:\n");
 for(i=0;i< n;i++)
 {
 printf("%d\t", a[i]);
 }
 }
void asc_sort(int a[100], int n)
{
 int i, j, temp;
 for(i=0;i< n;i++)
 {
 for(j=0;j< n;j++)
 {
 if(a[j]>a[j+1])
 {
 temp = a[j];
 a[j] = a[j+1];
 a[j+1] = temp;
 }
 }
 }
}*/


// Q.35
/*#include <stdio.h>
void sumArrays(int arr1[5], int arr2[5]) //logic and print statement
{
    int sum[5];
    for (int i = 0; i < 5; i++)
    {
        sum[i] = arr1[i] + arr2[i];
    }
    printf("Sum of arrays: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", sum[i]);
    }
}

int main() //taking input
{
    int arr1[5];
    int arr2[5];
    printf("Enter the elements of array 1:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of array 2:\n");
     for(int i=0;i<5;i++)
    {
        scanf("%d",&arr2[i]);
    }
    sumArrays(arr1, arr2);
    return 0;
}*/

// Q.36
/*#include <stdio.h>
int sumd(int matrix[50][50])
{
 int sum=0;
for(int i=0;i<3;++i)
{
for(int j=0;j<3;++j)
{
sum += matrix[i][j];
}
}
return sum;
}

int main()
{
int matrix[50][50];
printf("Enter Matrix Elements:\n");
for(int i=0;i<3;++i)
{
for(int j=0;j<3;++j)
{
scanf("\n%d", &matrix[i][j]);
}
}
sumd(matrix);
printf("Matrix sum:\n");
for(int i=0;i<3;++i)
{
for(int j=0;j<3;++j)
{
printf(" %d\t",matrix[i][j]);
}
printf("\n");
}
return 0;
}*/

// Q.37
/*#include <stdio.h>
int sumd(int n,int matrix[50][50])
{
 int sum=0;
for(int i=0;i<n;++i)
{
for(int j=0;j<n;++j)
{
sum += matrix[i][j];
}
}
return sum;
}

int main()
{
int n, matrix[50][50];
printf("Enter Order of Matrix: ");
scanf("%d", &n);
printf("Enter Matrix Elements:\n");
for(int i=0;i<n;++i)
{
for(int j=0;j<n;++j)
{
scanf("\n%d", &matrix[i][j]);
}
}
sumd(n, matrix);
printf("SUM OF MATRICES\n");
for(int i=0;i<n;++i)
{
for(int j=0;j<n;++j)
{
printf(" %d\t",matrix[i][j]);
}
printf("\n");
}
}*/

// Q.39
/*#include <stdio.h>
int countVowels(char* str)
{
    int count = 0,i=0;
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] ==
'o' || str[i] == 'u')
            {
            count++;
            }
        i++;
    }
    return count;
}
int main()
{
    char str[] = "LETSLEARNC";
    countVowels(str);
    printf("Number of vowels: %d",countVowels(str));
    return 0;
}*/


// Q.40
/*#include <stdio.h>
#include <string.h>
int main() 
{
    char firstName[50];
    char middleName[50];
    char lastName[50];
    char fullName[150];
    printf("Enter first name: \n");
    scanf("%s", firstName);
    printf("Enter middle name: \n");
    scanf("%s", middleName);
    printf("Enter last name: \n");
    scanf("%s", lastName);

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, middleName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Full name: %s", fullName);
    return 0;
}*/


// Q.41
// strcmp()
/*#include <stdio.h>
 #include <string.h>
 int main()
 {
     char str1[] = "apple";
     char str2[] = "banana";
     int result = strcmp(str1, str2);
     printf("The difference in the ascii values of the 1st character of the 2 strings is %d\n",result);
     if (result == 0)
     {
         printf("Thus,the strings are equal.\n");
     }
     else if (result < 0)
     {
         printf("Thus,String 1 is lexicographically less than String 2.\n");
     }
     else
     {
         printf("Thus,String 1 is lexicographically greater than String 2.\n");
     }
     return 0;
 }*/


// strrev()
 /*#include <stdio.h>
 #include <string.h>
 int main()
 {
     char str[] = "Hello World";
     printf("Original string: %s\n", str);
     strrev(str);
     printf("Reversed string: %s\n", str);
     return 0;
 }*/


// Q.42
/*#include <stdio.h>
int gcd(int x, int y);
int main()
{
 int num1, num2, hcf, lcm;
 printf("Enter two integer Values:\n");
 scanf("%d %d", &num1, &num2);
 hcf = gcd(num1, num2);
 printf("GCD: %d", hcf);
 printf("\nLCM: %d", (num1 * num2) / hcf);
 return 0;
}

int gcd(int x, int y)
{
 if (y == 0)
 {
 return x;
 }
 else
 {
 return gcd(y, x % y); //calls itself
 }
}*/


// Q.43
/*#include <stdio.h>
#include <string.h>
void main()
{
 char string[25], reverse_string[25] = {'\0'};
 int i, length = 0, flag = 0;
 fflush(stdin);
 printf("Enter a string: \n");
 gets(string);
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


// Q.44
/*#include <stdio.h>
// Function to find the length of a string
int stringLength( char* str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
// Function to copy one string into another string
void stringCopy(char* dest, char* src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
int main()
{
    char source[100];
    char destination[100];
    printf("Enter a string: ");
    scanf("%s", source);
    // Finding the length of the string
    int length = stringLength(source);
    printf("Length of the string: %d\n", length);
    // Copying the string into another string
    stringCopy(destination, source);
    printf("Copied string: %s\n", destination);
    return 0;
}*/


// Q.45
/*#include <stdio.h>
struct Patient
{
    char firstname[50];
    char surname[50];
    char dob[20];
    char disease[50];
};
int main()
{
    struct Patient p[100];
    int n, i;
    printf("Enter the number of patients: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nPatient %d\n", i + 1);
        printf("Enter first name: ");
        scanf("%s", p[i].firstname);
        printf("Enter surname: ");
        scanf("%s", p[i].surname);
        printf("Enter date of birth (DD-MM-YYYY): ");
        scanf("%s", p[i].dob);
        printf("Enter disease: ");
        scanf("%s", p[i].disease);
    }
  
  printf("\n Lists of patients are:\n");
    for (i = 0; i < n; i++)
    {
            printf("\n\nPatient %d:\n", i + 1);
            printf("Name: %s %s\n", p[i].firstname, p[i].surname);
            printf("Date of Birth: %s\n", p[i].dob);
            printf("Disease: %s\n\n", p[i].disease);
    }
  return 0;
}*/

// Q.47
/*#include <stdio.h>
// Structure to store address details
struct Address {
    char street[50];
    char city[50];
    char state[50];
    char country[50];
};
// Structure to store employee details
struct Employee {
    char name[50];
    int age;
    struct Address a;
};
int main() {
    struct Employee e[10]; int i;
    printf("Enter the details of 10 employees:\n");
    for (i = 0; i < 10; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", e[i].name);
        printf("Enter age: ");
        scanf("%d", &e[i].age);
        printf("Enter street: ");
        scanf("%s", e[i].a.street);
        printf("Enter city: ");
        scanf("%s", e[i].a.city);
        printf("Enter state: ");
        scanf("%s", e[i].a.state);
        printf("Enter country: ");
        scanf("%s", e[i].a.country);
    }
    printf("\nDetails of the employees:\n");
    for (i = 0; i < 10; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name: %s\n", e[i].name);
        printf("Age: %d\n", e[i].age);
        printf("Address: %s, %s, %s, %s\n", e[i].a.street,e[i].a.city,
        e[i].a.state,e[i].a.country);
    }
    return 0;
}*/


// Q.48
/*#include <stdio.h>
struct Player {
    char name[50];
    char team[50];
    float battingAverage;
};
void swap(struct Player *p1, struct Player *p2) {
    struct Player temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void sortPlayers(struct Player p[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (p[j].battingAverage < p[j + 1].battingAverage) {
                swap(&p[j], &p[j + 1]);
            }
        }
    }
}
int main() {
    struct Player p[100];
    int n, i;
    printf("Enter the number of players: ");
    scanf("%d", &n);
  //struct Player p[n];
    for (i = 0; i < n; i++) {
        printf("\nPlayer %d\n", i + 1);
        printf("Enter player name: ");
        scanf("%s", p[i].name);
        printf("Enter team name: ");
        scanf("%s", p[i].team);
        printf("Enter batting average: ");
        scanf("%f", &p[i].battingAverage);
    }
    sortPlayers(p, n);
    printf("\nPlayers sorted in descending order of batting average:\n");
    for (i = 0; i < n;i++) {
        printf("Player %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Team: %s\n", p[i].team);
        printf("Batting Average: %.2f\n", p[i].battingAverage);
        printf("\n");
    }
    return 0;
}*/

// Q.49
/*#include <stdio.h>
// Structure to store student details
struct Student
{
    char name[50];
    int age;
    int grade;
};
int main()
{
    struct Student s[3];
    int i;
    printf("Enter the details of 3 students:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter grade: ");
        scanf("%d", &s[i].grade);
    }
    printf("\nDetails of the students:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Grade: %d\n",s[i].grade);
    }
    return 0;
}*/


// Q.50
/*#include <stdio.h>
struct delivery
{
    char del_date[20];
    int del_number;
    char del_type[50];
};
struct product
{
    float cost;
    int id;
    char type[50];
    struct delivery d; //
};
int main()
{
    struct product p; //
    printf("Enter product cost: ");
    scanf("%f", &p.cost);
    printf("Enter product ID: ");
    scanf("%d", &p.id);
    printf("Enter product type: ");
    scanf("%s", p.type);
  
    printf("\nEnter delivery date: ");
    scanf("%s", p.d.del_date);
    printf("Enter delivery number: ");
    scanf("%d", &p.d.del_number);
    printf("Enter delivery type: ");
    scanf("%s", p.d.del_type);
  
    printf("\nProduct Details:\n");
    printf("Cost: %.2f\n", p.cost);
    printf("ID: %d\n", p.id);
    printf("Type: %s\n", p.type);
    printf("\nDelivery Details:\n");
    printf("Delivery Date: %s\n", p.d.del_date);
    printf("Delivery Number: %d\n", p.d.del_number);
    printf("Delivery Type: %s\n", p.d.del_type);
    return 0;
}*/
