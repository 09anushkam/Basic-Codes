// 1115 bubble sort

//import java.util.HashSet;
// import org.hamcrest.core.SubstringMatcher;

//OUTPUT IN JAVA
/*class Main {
  public static void main(String args[]) {
    //output
    //to get next line character with print use 
    //1) println("__"); 2) print("__\n");
    System.out.println("HELLO");
    System.out.print("HAVE A GREAT DAY");
  }
}*/



/*class Main{
  public static void main(String args[]){
    //type sout then use tab key to get System.out.println("");
   System.out.println("*");
    System.out.println("**");
    System.out.println("***");
    System.out.println("****");
  }
}*/


//VARIABLES IN JAVA
/*class Main{
  public static void main(String args[]){
    String name="Anushka";
    int a = 25;
    int b = 10;
    name = "ANUSHKA";
    int sum =a+b;
    int diff=a-b;
    System.out.println(name);
    System.out.println(a);
    System.out.println(b);
    System.out.println(sum);
    System.out.println(diff);
  }
}*/

//INPUT IN JAVA
/*import java.util.*;
public class Main{
  public static void main(String args[]){
    //input
    Scanner sc = new Scanner(System.in);
    //String name = sc.next();
    String name = sc.nextLine();
    //nextInt();
    //nextFLoat();
    //nextDouble();
    //nextLong();
    System.out.println(name);
  }
}*/

/*import java.util.*;
class Main{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    int sum = a + b;
    System.out.println(sum);
  }
}*/

//IF ELSE IN JAVA
/*import java.util.*;
class Main{
  public static void main(String args[]){
    System.out.println("Enter your age");
    Scanner sc = new Scanner(System.in);
    int age = sc.nextInt();

    if(age>18){
      System.out.println("Adult");
    }
    else{
      System.out.println("Not adult");
    }
    }
}*/

//EVEN ODD USING IF ELSE
/*import java.util.*;
class Main{
  public static void main(String args[]){
    System.out.println("ENTER THE NUMBER");
    Scanner sc = new Scanner(System.in);
    int x  = sc.nextInt();

    if(x%2==0){
      System.out.println("NUMBER IS EVEN");
    }
    else{
      System.out.println("NUMBER IS NOT EVEN");
    }
    }
}*/

// EVEN ODD WITHOUT USING MODULO
/*import java.util.*;
class Main {
  public static void main(String args[]) {
    System.out.println("Enter the number");
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    // m1 - while loop and decrement by 2
    while (a > 1) {
      a = a - 2;
    }
    if (a == 1) {
      System.out.println(a+"->"+"ODD");
    } else {
      System.out.println(a+"->"+"EVEN");
    }
  }
}*/

/*import java.util.*;
class Main {
  public static void main(String args[]) {
    System.out.println("Enter the number");
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    // m2 - for loop and decrement by 2
    for (int i=0;a>1;i+=2) {
      a -= 2;
    }
    if (a == 1) {
      System.out.println(a+"->"+"ODD");
    } else {
      System.out.println(a+"->"+"EVEN");
    }
  }
}*/

/*import java.util.*;
class Main {
  public static void main(String args[]) {
    System.out.println("Enter the number");
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    //m3 - Check the least significant bit
    if ((a & 1) == 0) {
      System.out.println("EVEN");
    } else {
      System.out.println("ODD");
    }
  }
}*/


//IF ELSE-IF
/*import java.util.*;
class Main{
  public static void main(String args[]){
    System.out.println("ENTER A AND B :");
    Scanner sc = new Scanner(System.in);
    int a  = sc.nextInt();
    int b = sc.nextInt();
    if(a<b){
      System.out.println("A is less than B");
    }
    else if(a==b) {
      System.out.println("A is equal to B");
    }
    else{
      System.out.println("A is greater than B");
    }
  }
    }*/


//NESTED IF-ELSE
/*import java.util.*;
class Main{
  public static void main(String args[]){
    System.out.println("ENTER A AND B :");
    Scanner sc = new Scanner(System.in);
    int a  = sc.nextInt();
    int b = sc.nextInt();
    if(a==b){
      System.out.println("A is equal to B");
    }
    else{
      if(a>b){
      System.out.println("A is greater than B");
      }
      else{
        System.out.println("A is less than B");
      }
    }
  }
    }*/

//SWITCH CASE IN JAVA
/*import java.util.*;
class Main{
  public static void main(String args[]){
System.out.println("Enter 1 for Hello\nEnter 2 for Namaste\nEnter 3 for Bonjour");
Scanner sc = new Scanner(System.in);
int button = sc.nextInt();

    switch(button){
      case 1: System.out.println("Hello");
        break;
      case 2: System.out.println("Namaste");
        break;
      case 3: System.out.println("Bonjour");
        break;
      default: System.out.println("Invalid Input");
    }
  }
}*/



/*import java.util.*;
class Main{
  public static void main(String args[]){
System.out.println("Enter the two numbers");
Scanner sc = new Scanner(System.in);
int a = sc.nextInt();
int b = sc.nextInt();
System.out.println("Enter 1 for sum\nEnter 2 for difference\nEnter 3 for product\nEnter 4 for qoutient\n Enter 5 for modulo");
int x = sc.nextInt();
    switch(x){
      case 1: System.out.println(a+b);
        break;
      case 2: System.out.println(a-b);
        break;
      case 3: System.out.println(a*b);
        break;
      case 4: System.out.println(a/b);
        break;
      case 5: System.out.println(a%b);
        break;
      default: System.out.println("Invalid Input");
    }
  }
}*/

//FOR LOOP
/*class Main{
  public static void main(String args[]){
    for(int i=0;i<11;i++){
      //System.out.println(i);
      System.out.print(i+" ");
    }
  }
}*/

//DO LOOP
/*class Main{
  public static void main(String args[]){
    int i=0;
    while(i<11){
      //System.out.println(i);
      System.out.print(i+" ");
      i++;
    }
  }
}*/

//DO WHILE LOOP
/*class Main{
  public static void main(String args[]){
    int i=0;
    do{
      //System.out.println(i);
      System.out.print(i+" ");
      i++;
    } while(i<11);
  }
}*/


/*class Main{
  public static void main(String args[]){
    int i=12;
    while(i<11){
      System.out.println("Apna college");
    }
    
    do{
      System.out.println("Apna college");
    } while(i<11);
  }
}*/

//SUM OF N NATURAL NUMBERS
/*import java.util.*;
class Main{
  public static void main(String args[]){
    int sum=0;
    System.out.println("Enter a natural number");
    Scanner sc = new Scanner(System.in);
    int n=sc.nextInt();
    for(int i=0;i<=n;i++)
      {
        sum+=i;
      }
    System.out.println("Sum of n natural numbers="+sum);
  }
}*/


//MULTIPLICATION TABLE
/*import java.util.*;
class Main{
  public static void main(String args[]){
    System.out.println("Enter a number");
    Scanner sc = new Scanner(System.in);
    int n=sc.nextInt();
    for(int i=1;i<11;i++)
      {
        System.out.println(n+"X"+i+'='+n*i);
      }
  }
}*/




//PATTERN 1)
//*****
//*****
//*****
//*****
/*class Main{
  public static void main(String args[]){
  int n=4;
  int m=5;
    for(int i=1;i<=n;i++)
      {
        for(int j=1;j<=m;j++)
          {
          System.out.print("*");
          }
          System.out.println();
      }
  }
}*/

//PATTERN 2)
//*****
//*   *
//*   *
//*****
/*class Main{
  public static void main(String args[]){
    int n=4;
    int m=5;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        if(i==1||j==1||i==n||j==m){
          System.out.print("*");
        }
        else{
          System.out.print(" ");
        }
      }System.out.println();
    }
  }
}*/

//PATTERN 3)
//*
//**
//***
//****
/*class Main{
  public static void main(String args[]){
    int n = 4;
      for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        System.out.print("*");
      }System.out.println();
      }
  }
}*/

//PATTERN 4)
//****
//***
//**
//*
/*class Main{
  public static void main(String args[]){
    int n =4;
      for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++){
        System.out.print("*");
      }System.out.println();
      }
  }
}*/
//OR
/*class Main{
  public static void main(String args[]){
    int n =4;
      for(int i=n;i>=1;i--){
      for(int j=1;j<=i;j++){
        System.out.print("*");
      }System.out.println();
      }
  }
}*/

//PATTERN 5)
//   *
//  **
// ***
//****
/*class Main{
  public static void main(String args[]){
    int n =4;
    //outer loop -> rows
      for(int i=1;i<=n;i++){
        //inner loop ->spaces
        for(int j=1;j<=n-i;j++){
          System.out.print(" ");
        }
        //inner loop -> stars
        for(int j=1;j<=i;j++){
        System.out.print("*");
        }
        System.out.println();
      }
  }
}*/

//PATERN 6)
//1
//12
//123
//1234
//12345
/*class Main{
  public static void main(String args[]){
    int n=5;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        System.out.print(j); 
        //j->1\n12\n123\n1234\n12345
        //i->1\n22\n333\n4444\n55555
      }System.out.println();
    }
  }
}*/

//PATERN 7)
//12345
//1234
//123
//12
//1
/*class Main{
  public static void main(String args[]){
    int n=5;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i+1;j++){
      // for(int j=i;j<=n;j++){ //prints wrong output
        System.out.print(j); 
      }System.out.println();
    }
  }
}*/

//PATTERN 8)FLOYD'S TRIANGLE
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
/*class Main{
  public static void main(String args[]){
    int n=5;
    int number=1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        System.out.print(number+" ");
        number++;
      }System.out.println();
    }
  }
}*/

//PATTERN 9)
//1
//01
//101
//0101
//10101
/*class Main{
  public static void main(String args[]){
    int n=5;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        int sum = i+j; //imp
       if(sum%2==0){
         System.out.print("1 ");
       }
        else{
          System.out.print("0 ");
        }
      }System.out.println();
    }
  }
}*/


//PATTERN 10)
//*      *
//**    **
//***  ***
//********
//********
//***  ***
//**    **
//*      *
/*class Main{
  public static void main(String args[]){
    int n = 5 ;
    //upper half
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        //1st part
        System.out.print("*");
      }
      //spaces
      int spaces = 2*(n-i);
      for(int j=1;j<=spaces;j++){
        System.out.print(" ");
      }

      //2nd part
      for(int j=1;j<=i;j++){
        System.out.print("*");
      }
      System.out.println();
    }

    //lower half
    for(int i=n;i>=1;i--){    //changes
      for(int j=1;j<=i;j++){
        //1st part
        System.out.print("*");
      }
      //spaces
      int spaces = 2*(n-i);
      for(int j=1;j<=spaces;j++){
        System.out.print(" ");
      }

      //2nd part
      for(int j=1;j<=i;j++){
        System.out.print("*");
      }
      System.out.println();
    }
  }
}*/

//PATTERN 11)
//    *****
//   *****
//  *****
// *****
//*****
/*class Main{
  public static void main(String args[]){
    int n=5;
    for(int i=1;i<=n;i++){
      //spaces
      for(int j=1;j<=n-i;j++){
        System.out.print(" ");
        }
      //stars
      for(int j=1;j<=n;j++){
        System.out.print("*");
      }
      System.out.println();
      }
    }
  }*/


//PATTERN 12)
//    1
//   2 2
//  3 3 3
// 4 4 4 4
//5 5 5 5 5
/*class Main{
  public static void main(String args[]){
    int n=5;
    for(int i=1;i<=n;i++){
      // starting spaces
      for(int j=1;j<=n-i;j++){
        System.out.print(" ");
      }
      for(int j=1;j<=i;j++){
        System.out.print(i+" ");
      }
      System.out.println();
    }
  }
}*/

//PATTERN 13) 
// HARD!!!!!!!!!!!!!!!!!
// palindromic pyramid
//    1
//   212
//  32123 
// 4321234
//543212345
/*class Main{
  public static void main(String args[]){
   int n=5; 
    for(int i=1;i<=n;i++){
      //spaces
      for(int j=1;j<=n-i;j++){
        System.out.print(" ");
      }
      //1st half eg 21,321,4321
      for(int j=i;j>=1;j--){
        System.out.print(j);
      }
      //2nd half eg 2,23,234
      for(int j=2;j<=i;j++){
        System.out.print(j);
      }
      System.out.println();
    }
  }
}*/

//PATTERN 14)
//   *
//  ***
// *****
//*******
//*******
// *****
//  ***
//   *
/*class Main{
  public static void main(String args[]){
    int n=4;
    //upper half
    for(int i=1;i<=n;i++){
      //spaces
      for(int j=1;j<=n-i;j++){
        System.out.print(" ");
      }
      //stars
      for(int j=1;j<=2*i-1;j++){
        System.out.print("*");
      }
      System.out.println();
    }
    
    //lower half
    for(int i=n;i>=1;i--){
      //spaces
      for(int j=1;j<=n-i;j++){
        System.out.print(" ");
      }
      //stars
      for(int j=1;j<=2*i-1;j++){
        System.out.print("*");
      }
      System.out.println();
    }
  }
}*/


//FUNCTIONS
/*class Main{
  public static void main(String args[]){
    returnType functionName(type arg1,type arg 2){
      //returnType-> datatype that we want in return
      //operations
    }
  }
}*/

/*import java.util.*;
class Main{
  //declare
  public static void printName(String name){
    System.out.println("Name : "+name);
    return;
  }
  public static void main(String args[]){
    System.out.println("Enter your name");
    Scanner sc = new Scanner(System.in);
    String name = sc.next();
    printName(name); //call
  }
}*/


//SUM OF 2 NUMBERS USING FUNCTION
/*import java.util.*;
class Main{
  public static int calculateSum(int a,int b){
    return a+b;
  }
  public static void main(String args[]){
    System.out.println("Enter the two numbers");
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    System.out.println("SUM="+calculateSum(a,b));
  }
}*/

//PRODUCT OF 2 NUMBERS USING FUNCTION
/*import java.util.*;
class Main{
  public static int calculateProduct(int a,int b){
    return a*b;
  }
  public static void main(String args[]){
    System.out.println("Enter the two numbers");
    Scanner sc = new Scanner(System.in);
    int a = sc.nextInt();
    int b = sc.nextInt();
    System.out.println("PRODUCT="+calculateProduct(a,b));
  }
}*/

//FACTORIAL
//INCREMENT
/*import java.util.*;
class Main{
  public static void main(String args[]){
    System.out.println("Enter the number");
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    int fact=1;
     for(int i=1;i<=x;i++){
     if(x==0||x==1){
       fact =1;
     }
     else if(x<0){
     System.out.println("INVALID NUMBER");
     }
     else{
     fact = fact*i;
     }
   }
     System.out.println("FACTORIAL="+fact);
  }
}*/


//DECREMENT
/*import java.util.*;
class Main{
  public static void main(String args[]){
    System.out.println("Enter the number");
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    int fact=1;
   for(int i=x;i>0;i--){
     if(x==0||x==1){
      fact= 1;
     }
     else if(x>0){
      fact= fact*i;
     }
   }
    if(x>0){
     System.out.println("FACTORIAL="+fact);
   }else{
     System.out.println("INVALID NUMBER");
   }
  }
}*/


//FACTORIAL USING FUNCTIONS
/*import java.util.*;
class Main{
  public static int fact(int n){
    if(n==1||n==0){
      return 1;
    }
    else if(n<0){
    System.out.println("INVALID NUMBER");
      return 0;
    }
    else {
      return n*fact(n-1);
    }
  }
  public static void main(String args[]){
    System.out.println("Enter the number");
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    System.out.println("FACTORIAL="+fact(x));
  }
}*/

// ARRAYS
//import java.util.*;
/*class Main{
  public static void main(String args[]){
    //int[] marks={94,91,94};
    //int marks[]={94,91,94};
    //int[] marks=new int[3];
    int marks[]=new int[3];
    
    marks[0]=94; //s.studies
    marks[1]=91; //marathi
    marks[2]=94; //science
   // Scanner sc = new Scanner(System.in);
   // int n = sc.nextInt();
   // System.out.println(marks[0]);
   //  System.out.println(marks[1]);
   //  System.out.println(marks[2]);
for(int i=0;i<3;i++){
  System.out.println(marks[i]);  
    }
  }
}*/


//LINEAR SEARCH IN 1D ARRAY
/*import java.util.*;
class Main{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int size = sc.nextInt();
    int numbers[] = new int[size];
    
    for(int i=0;i<size;i++){
     numbers[i]=sc.nextInt();
    }
    System.out.print("X is: ");
    int x =sc.nextInt();
    for(int i=0;i<numbers.length;i++){
      if(numbers[i]==x){
      System.out.println("X is found at index: "+i);
      }
    }
  }
}*/

//LINEAR SEARCH IN 2D ARRAY
/*import java.util.*;
class Main{
public static void main(String args[]){
  Scanner sc = new Scanner(System.in);
  int rows = sc.nextInt();
  int cols = sc.nextInt();
  int numbers[][]=new int[rows][cols];

  //input
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      numbers[i][j]=sc.nextInt();
    }
  }
  //output
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      System.out.print(numbers[i][j]+" ");
    }
    System.out.println();
  }
  
  int x = sc.nextInt();
  //searching x in the matrix
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      if(numbers[i][j]==x){
      System.out.print("X is found at locations ("+i+","+j+") ");
      }
    }
  }
  
 } 
}*/


// STRINGS
/*import java.util.*;
class Main{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    String name = sc.nextLine();
    System.out.println("Your name is "+name);
  }
}*/


/*class Main{
  public static void main(String args[]){
   //concatenate
    String firstName = "Anushka";
    String lastName = "Murade";
    String fullName = firstName +"@"+ lastName;
    System.out.print("Your name is "+fullName);
    //Anushka@Murade
     System.out.println(fullName.length());
    //charAt
     for(int i=0;i<fullName.length();i++){
       System.out.print(fullName.charAt(i));
     }
    
  }
}*/


/*class Main{
public static void main(String args[]){
  //compare
  String name1="Anushka";
  String name2="Murade";

  if(name1.compareTo(name2)==0){
    System.out.println("String are equal");
  } else{
  System.out.println("Strings are not equal");
  }

  //sometimes fails
   if(name1==name2){
    System.out.println("String are equal");
  } else{
  System.out.println("Strings are not equal");
  }

  //fails
   if(new String("ABC")==new String("ABC")){
    System.out.println("String are equal");
  } else{
  System.out.println("Strings are not equal");
  }
  
 }
}*/


/*class Main{
public static void main(String args[]){
  String sentence="TonyStark";
  //Substring(beg index,end index);
  //String name = sentence.substring(4,sentence.length());
  String name = sentence.substring(4);
  System.out.println(name);
 }
}*/

//STRINGS ARE IMMUTABLE

//STRING BUILDER
/*class Main{
public static void main(String args[]){
  StringBuilder sb=new StringBuilder("Tony");
  System.out.println(sb);
  //charAt 
  System.out.println(sb.charAt(0)); //O:T
  //setCharAt 
  sb.setCharAt(0,'P');
  System.out.println(sb); //O:Pony
  //insert
  sb.insert(0,'S');
  System.out.println(sb); //O:SPony
  sb.insert(2,'n');
  System.out.println(sb); //O:SPnony
  //delete (start,end) here end is exclusive
  sb.delete(2,3);
  System.out.println(sb); //O:SPony
  sb.delete(2,4);
  System.out.println(sb); //O:SPy
 }
}*/

/*class Main{
public static void main(String args[]){
  StringBuilder sb=new StringBuilder("h");
  sb.append("e"); //str=str+"e"; //for strings
  sb.append("l"); //str=str+"l";
  sb.append("l"); //str=str+"l";
  sb.append("o"); //str=str+"o";
  System.out.println(sb);
 }
}*/

//reverse of a string
/*class Main{
public static void main(String args[]){
  StringBuilder sb=new StringBuilder("hello");

  for (int i=0;i<sb.length()/2;i++){
    int front = i;
    int back = sb.length()-1-i; //5-1-0=>4

    char frontChar = sb.charAt(front);
    char backChar = sb.charAt(back);
    // setCharAt(index,character at that index)
    sb.setCharAt(front, backChar);
    sb.setCharAt(back,frontChar);
  }
  System.out.println(sb);
 }
}*/

/*class Main{
public static void main(String args[]){
  int a=10;
  int b=0;
  b=a++; //a=11,b=10
  // b=++a; //a=11,b=11
  // b=a--; //a=9,b=10
  // b=--a; //a=9,b=9
  System.out.println(a);
  System.out.println(b);
 }
}*/


//10th video of java part 1
//Bit Manipulation
//Get bit
//Set bit
//Clear bit
//Update bit

//get bit
/*class Main{
  public static void main(String args[]){
    //position is counted from right side and counting starts from 0
    int n=5; //0101 
    int pos=2; //0010  //Output:1
    // int pos=3; //Output:0
    int bitMask=1<<pos; //0100 left shifting of pos by 1 bit
    if((bitMask & n)==0){ //0100
      System.out.println("bit was zero");
    } else{
      System.out.println("bit was one");
    }
  }
}*/

//set bit
/*class Main{
  public static void main(String args[]){
    int n=5; //0101
    int pos=1; //0001  //Output:7
    int bitMask=1<<pos; //0010
    int newNumber=bitMask|n; //0111
    System.out.println(newNumber);
  }
}*/

//clear bit
/*class Main{
  public static void main(String args[]){
    int n=5; //0101
    int pos=2; //0010
    int bitMask=1<<pos; //0100
    int notBitMask=~(bitMask); //1011
    int newNumber=notBitMask & n; //0001
    System.out.println(newNumber);
  }
}*/

//Update bit
//for 0-clear operation
//for 1-set operation
/*import java.util.*;
class Main{
  public static void main(String args[]){
    Scanner sc = new Scanner(System.in);
    int oper = sc.nextInt();
    //oper=1:set,oper=0:clear
    int n=5; //0101
    int pos=1; //0001
    int bitMask=1<<pos; //0010
    if(oper == 1){
    //set
    int newNumber=bitMask|n; 
    System.out.println(newNumber); //7
    } else{
    //clear
    int newBitMask = ~(bitMask); //1101
    int newNumber = newBitMask & n; //1101 & 0101 = 0101 
    System.out.println(newNumber); //5
    }
  }
}*/

//9th video lec of java part 1
//Sorting in java
//bubble
//Selection
//Insertion

//BUBBLE SORTING
class Main{
  public static void printArrays(int arr[]){
    for(int i=0;i<arr.length;i++){
      System.out.print(arr[i]+" ");
    }
    System.out.println();
  }
    public static void main(String args[]){
    int arr[]={7,8,3,1,2};
    //Time complexity = 0(n^2)
    //bubble sort
    for(int i=0;i<arr.length-1;i++){ //n-1
      for(int j=0;j<arr.length-i-1;j++){
        if(arr[j]>arr[j+1]){
          //swap
          int temp = arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;          
        }
      }
    }
    printArrays(arr);
  }
}

//SELECTION SORTING
/*class Main{
  public static void printArrays(int arr[]){
    for(int i=0;i<arr.length;i++){
      System.out.print(arr[i]+" ");
    }
    System.out.println();
  }

  
  public static void main(String args[]){
    int arr[]={7,8,3,1,2};

    //Time complexity = 0(n^2)
    //selection sort
    for(int i=0;i<arr.length-1;i++){ 
      int smallest=i;
      for(int j=i+1;j<arr.length;j++){
        if(arr[smallest]>arr[j]){
          smallest=j;
        }
      }
      //swap
      int temp=arr[smallest];
      arr[smallest]=arr[i];
      arr[i]=temp;
    }
    printArrays(arr);
  }
}*/


/*class Main{
  public static void printArrays(int arr[]){
    for(int i=0;i<arr.length;i++){
      System.out.print(arr[i]+" ");
    }
    System.out.println();
  }

  
  public static void main(String args[]){
    int arr[]={7,8,3,1,2};

    //Time complexity = 0(n^2)
    //Insertion sort
    for(int i=0;i<arr.length;i++){ //unsorted array
      int current=arr[i];
      int j=i-1;  //last index of sorted part
      while( j>=0 && current<arr[j]){ 
        arr[j+1]=arr[j];
        j--;
      }
      //placement
      arr[j+1]=current;
    }
    printArrays(arr);
  }
}*/

//RECURSION
//5 to 1
/*class Main{
  public static void printNumb(int n){
    if(n==0){  //base case
      return ;
    }
    System.out.println(n); //print
    printNumb(n-1); //recursive case
  }
  
  public static void main(String args[]){
    int n=5;
    printNumb(n); //n=5
  }
}*/

//1 to 5
/*class Main{
  public static void printNumb(int n){
    if(n==6){  //base case
      return ;
    }
    System.out.println(n); //print
    printNumb(n+1); //recursive case
  }
  
  public static void main(String args[]){
    int n=1;
    printNumb(n); //n=1
  }
}*/

//sum of n
/*class Main{
  public static void printSum(int i,int n,int sum){
    if(i==n){
      sum+=i;
      System.out.println(sum);
      return;
    }
    sum+=i;
    printSum(i+1,n,sum); //recursive case
    System.out.println(i); //4 3 2 1
  }
  
  public static void main(String args[]){
    printSum(1,5,0); //n=1
  }
}*/

//FACTORIAL
/*import java.util.*;
class Main{
  public static int calcfactorial(int n){
    if(n==1||n==0){
      return 1;
    } else{
    return n*calcfactorial(n-1);
    }
  }
  public static void main(String args[]){
    System.out.println("Enter the number:");
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    System.out.println("Factorial="+calcfactorial(n));
  }
}*/

//Fibonacci series
/*import java.util.*;
class Main{
  public static int Fib(int n){
    if(n==1||n==0){
      return 1;
    } else{
    return Fib(n-1)+Fib(n-2);
    }
  }
  public static void main(String args[]){
    System.out.println("Enter the number:");
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    for(int i=0;i<n;i++){
    System.out.println(Fib(i));
    }
  }
}*/

//Method 2
/*class Main{
  public static void Fib(int a,int b,int n){
    if(n==0){
      return;
    }
   int c=a+b;
    System.out.println(c);
    Fib(b,c,n-1); //for 2nd step and so on
  }
  public static void main(String args[]){
    int a=0,b=1;
    System.out.println(a);
    System.out.println(b);
    int n=7;
    Fib(a,b,n-2);  //for 1st step
  }
}*/

//stack height is n
/*class Main{
  public static int calcPower(int x,int n){
    if(n==0){ //base case 1
      return 1;
    }
    if(x==0){ //base case 2
      return 0;
    }
   return x*calcPower(x,n-1); //for 2nd step and so on
  }
  public static void main(String args[]){
    int x=2,n=5;
    int answer=calcPower(x,n); //for 1st step
    System.out.println(answer);
  }
}*/

//Here, stack height is log(base=2)(n)
/*class Main{
  public static int calcPower(int x,int n){
    if(n==0){ //base case 1
      return 1;
    }
    if(x==0){ //base case 2
      return 0;
    }
    //if n is even
    if(n%2==0){
    return calcPower(x,n/2)*calcPower(x,n/2); //for 2nd step and so on 
    }
    else{ // n is odd
     return calcPower(x,n/2)*calcPower(x,n/2)*x; //for 2nd step and so on 
    }
  }
  public static void main(String args[]){
    int x=2,n=5;
    int answer=calcPower(x,n); //for 1st step
    System.out.println(answer);
  }
}*/

// INTERMEDIATE LEVEL PROBLEMS ON RECURSION
// Recursion in one shot 9 Best Problems

//Unclear
//Q.1. Tower of Hanoi
// Time complexity - O(2^n)
/*class Main{
  public static void towerOfHanoi(int n,String src,String helper,String dest){
    if(n==1){
      System.out.println("transfer disk "+n+" from "+src+" to "+dest);
      return;
    }
    towerOfHanoi(n-1, src, dest, helper);
    System.out.println("transfer disk "+n+" from "+src+" to "+dest);
    towerOfHanoi(n-1,helper, src, dest);
  }
  public static void main(String args[]){
    int n=3;
    towerOfHanoi(n, "S", "H", "D");
  }
}*/

//Q.2. Print a string in reverse
// Time complexity - O(n) , n=length of string
/*class Main{
  public static void printRev(String str,int idx){
    if(idx==0){
      System.out.println(str.charAt(idx));
      return;
    }
    System.out.print(str.charAt(idx));
    printRev(str, idx-1);
  }
  public static void main(String args[]){
    String str="abcd";
    printRev(str, str.length()-1);
  }
}*/

// Q.3. Find the 1st and last occurance of an element in string
//Time complexity - O(n)
/*class Main{
  public static int first = -1;
  public static int last = -1;
  public static void findOccurance(String str,int idx,char element){
    if(idx==str.length()){
      System.out.println(first);
      System.out.println(last);
      return;
    }
    char currChar=str.charAt(idx);
    if(currChar==element){
      if(first==-1){
        first=idx;
      } else{
        last=idx;
      }
    }
    findOccurance(str, idx+1, element);
  }
  public static void main(String args[]){
    String str="abaacdaefaah";
    findOccurance(str, 0, 'a');
  }
}*/

//Q.4. Check if an array is sorted(Strictly increasing)
//Time complexity-O(n)
/*class Main{
  public static boolean isSorted(int arr[],int idx){
    if(idx==arr.length-1){
      return true;
    }
  if (arr[idx]<arr[idx+1]){ //>=
    //array is sorted till now //unsorted
    return isSorted(arr, idx+1);
   } else{
    return false;
   }
    //return isSorted(arr,idx+1);
  }
  public static void main(String args[]){
    int arr[]={1,2,3,3,5}; //false
    // int arr[]={1,2,3,4,5}; //true
    System.out.println(isSorted(arr,0));
  }
}*/

//Q.5. Move all 'x' to the end of the string
//Time complexity- O(n+count)= O(2n)= O(n) , n=length of string
/*class Main{
public static void moveAllX(String str,int idx,int count,String newString){
  if(idx==str.length()){
    for(int i=0;i<count;i++){
      newString+='x';
    }System.out.println(newString);
    return;
  }
  char currChar=str.charAt(idx);
  if(currChar=='x'){
    count++;
    moveAllX(str, idx+1, count, newString);
  } else{
    newString+=currChar;  //abcd 
    moveAllX(str, idx+1, count, newString);
  }
 }
  public static void main(String args[]){
    String str="axbcxxd";
    moveAllX(str, 0, 0, "");
  }
}*/

//Q.6. Remove duplicates in a string
//Time complexity - O(n)
/*class Main{
  public static boolen[] map= new boolean[26];
  public static void removeDuplicates(String str,int idx,String newString){
    if(idx==str.length()){
      System.out.println(newString);
      return;
    }
    char currChar=str.charAt(idx);
    if(map[currChar-'a']==true){ //true
      removeDuplicates(str, idx+1,newString);
    }else{  //false
      newString+=currChar;
      map[currChar-'a']=true; //
      removeDuplicates(str, idx+1, newString);
    }
  }
  public static void main(String args[]){
   String str="abbccda";
    removeDuplicates(str, 0, "");
  }
}*/

//Q.7. Print all the subsequences of a string(VERY IMP CODE)
//Time complexity-O(2^(n+1)-1)=O(2^n)
/*class Main{
  public static void subsequences(String str,int idx,String newString){
    if(idx==str.length()){
      System.out.println(newString);
      return;
    }
    char currChar=str.charAt(idx);
    //to be
    subsequences(str, idx+1, newString+currChar);
    //or not to be
    subsequences(str, idx+1, newString);
  }
  public static void main(String args[]){
    String str="abc";
    subsequences(str, 0, "");
  }
}*/


//Q.8. Print all the unique subsequences of a string
//Time complexity---
/*import java.util.HashSet;
class Main{
  public static void subsequences(String str,int idx,String newString,HashSet<String>set){
    if(idx==str.length()){
      if(set.contains(newString)){
        return;
      }else{
        System.out.println(newString);
        set.add(newString);
        return;        
      }
    }
    char currChar=str.charAt(idx);
    //to be
    subsequences(str, idx+1, newString+currChar,set);
    //or not to be
    subsequences(str, idx+1, newString,set);
  }
  public static void main(String args[]){
    String str="aaa";
    HashSet<String>set=new HashSet<>();
    subsequences(str, 0, "",set);
  }
}*/

//Q.9. Print Keypad Combination
//Time Complexity-O(4^n)
/*class Main{
  public static String[] keypad={".","abc","def","ghi","jkl","mno","pqr","stu","vwx","yz"};
    public static void printCombo(String str,int idx,String combination){
      if(idx==str.length()){
        System.out.println(combination);
        return;
      }
      char currChar=str.charAt(idx);
      String mapping = keypad[currChar-'0'];

      for(int i=0;i<mapping.length();i++){
        printCombo(str, idx+1, combination+mapping.charAt(i));
      }  
    }
  
  public static void main(String args[]){
    String str="23";
    printCombo(str, 0, "");
  }
}*/

//ADVANCED RECURSION PROBLEMS
//Q.1.Print all permutations of a string "abc"
//Logic unclear
//Time complexity-O(n!)
/*class Main{
  public static void printPerm(String str,String permutation){
    if(str.length()==0){
      System.out.println(permutation);
      return;
    }
    for(int i=0; i<str.length();i++){
      char currChar=str.charAt(i);    //b
      String newStr=str.substring(0,i)+str.substring(i+1);  //a+c
      printPerm(newStr,permutation+currChar); //acb
    }
  }
  public static void main(String args[]){
    String str="abc";
    printPerm(str,"");
  }
}*/

//Q.2.Count total paths in a maze to move from (0,0) to (n,m)
//Time complexity-very high.Thus,we use dynamic programming approach for this
/*class Main{
  public static int countPaths(int i,int j,int n,int m){
    if(i==n||j==m){
      return 0;
    }
    if(i==n-1&&j==m-1){
      return 1;
    }
    //move downwards
    int downPaths=countPaths(i+1,j,n,m);
    //move right
    int rightPaths=countPaths(i, j+1, n, m);
    return downPaths+rightPaths;
  }
  
  public static void main(String args[]){
    int n=3,m=3;
    int totalPaths=countPaths(0, 0, n, m);
    System.out.println(totalPaths);
  }
}*/

//Q.3.Place Tiles of size 1*m in a floor of size n*m
//Time complexity-very high.Thus,we use dynamic programming approach for this
/*class Main{
  public static int placeTiles(int n,int m){
    if(n==m){
      return 2;
    }
    if(n<m){
      return 1;
    }
    //vertically
    int vertPlacements=placeTiles(n-m, m);
    //horizontally
    int horPlacements=placeTiles(n-1, m);
    return vertPlacements + horPlacements;
  }
  public static void main(String args[]){
    int n=4,m=2;
    System.out.println(placeTiles(n,m));
  }
}*/

//Q.4.Find the number of ways in which you can invite n people to your party,single or in pairs
//
/*class Main{
  public static int callGuests(int n){
    if(n<=1){
      return 1;
    }
    //single
    int ways1=callGuests(n-1);
    //pair
    int ways2=(n-1)*callGuests(n-2);
    return ways1+ways2;
  }
  public static void main(String args[]){
    int n=4;
    System.out.println(callGuests(n));
  }
}*/

//Q.5.Print all the subsets of a set of first n natural numbers
//Time Complexity-O(2^n)
/*import java.util.*;
class Main{
  public static void printSubset(ArrayList<Integer>subset){
    for(int i=0;i<subset.size();i++){
   System.out.print(subset.get(i)+" "); 
    }
    System.out.println();
  }
  public static void findSubsets(int n,ArrayList<Integer>subset){
    if(n==0){
      printSubset(subset);
      return;
    }
    //add hoga
    subset.add(n);
    findSubsets(n-1, subset);
    //add nahi hoga
    subset.remove(subset.size()-1);
    findSubsets(n-1, subset);
  }
  public static void main(String args[]){
    int n=3;
    ArrayList<Integer>subset=new ArrayList<>();
    findSubsets(n, subset);
  }
}*/

//Backtracking


//Sudoku Solver


//Merge sort


//Quick sort




















