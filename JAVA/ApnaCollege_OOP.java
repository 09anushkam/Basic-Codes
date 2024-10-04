//Example 1
/*class Pen{
  String color;
  String type; //ball,gel
  
  public void write(){
    System.out.println("writing something");
  }
  public void printColor(){
    System.out.println(this.color);
  }
}

class Main{
  public static void main(String[] args) {
    Pen celloGripper=new Pen();
    celloGripper.color="blue";
    celloGripper.type="gel";
    //celloGripper.write();
    
    Pen lexi=new Pen();
    lexi.color="black";
    lexi.type="ballpoint";

    celloGripper.printColor();
    lexi.printColor();
  }
}*/

//Name of constructor is same as name of class
//constructors are methods and functions but they don't return anything and none of the return type(eg:int,float,strings,etc.) is applicable on them
//3-Types of constructors:
//1.Non-parameterize constructor:
//2.Parameterize constructor
//3.Copy constructor

//Example 2
/*class Student{
  String name;
  int age;

  public void printInfo(){
    System.out.println(this.name);
    System.out.println(this.age);
  }
  
  Student(){ // manually created non-parametrize constructor
  // System.out.println("constructor called!");
  }
  
  // Student(String name,int age){   //parametrize constructor
  // this.name=name;
  // this.age=age;
  // }
  
  Student(Student s2){ //copy constructor
    this.name=s2.name;
    this.age=s2.age;
  }
}

class Main{
  public static void main(String[] args) {
    Student s1=new Student(); //if not created manually ,it will be automatically created so just use it by using name of the class //non-parametrize constructor
    s1.name="Anushka";
    s1.age=19;
    // Student s1=new Student("Anushka",19); //parametrize constructor call
    Student s2 = new Student(s1); //copy constructor call 
    s1.printInfo();
    s2.printInfo();
  }
}*/

//Destructors - automatic in java

//Polymorphism
//Run time polymorphism- (we'll learn during inheritance)
//Compile time Polymorphism- (we'll learn now) (preferred over run time)

//function overloading
//the function should have either of the thing different from other one 1)return type,2)Different types of parameters,3)No. of arguments

//Example3
/*class Student{
  String name;
  int age;

  public void printInfo(String name){
    System.out.println(name);
  }

  public void printInfo(int age){
    System.out.println(age);
  }
  
  public void printInfo(String name,int age){
    System.out.println(name+" "+age);
  }
}

class Main{
  public static void main(String args[]){
    Student s1=new Student();
    s1.name="Anushka";
    s1.age=19;

    // s1.printInfo(s1.name);
    s1.printInfo(s1.age);
    s1.printInfo(s1.name,s1.age);
  }
}*/

//Inheritance :
//1)Single level inheritance a->b
//2)Multilevel inheritance a->b->c
//3)Hierarchial inheritance    a 
                          // |    |
                          // a1, a2
//4)Hybrid inheritance
//5)Multiple inheritance (not in java)

//Example 4
/*class Shape{     //base/parent class (a)
  public static void area(){
    System.out.println("Displays area: ");
  }
}

class Triangle extends Shape{    //sub/child class (b)/(a1)
  public void area(int b,int h){
    System.out.println(0.5*b*h);
  }
}

class EquilateralTriangle extends Triangle{   //(c)
  // public void area(int b,int h){     //this code is unnecessary
  //   System.out.println(0.5*b*h);
  // }
}

class Circle extends Shape{     //(a2)
  public void area(int r){
    System.out.println(3.14*r*r);
  }
}
class Main{
  public static void main(String args[]){
    Shape.area();
    Triangle t1=new Triangle();
    t1.area(2,4);
    EquilateralTriangle et1=new EquilateralTriangle();
    et1.area(8,8);
    Circle c1=new Circle();
    c1.area(7);
  }
}*/


//Access Modifiers :
//1)public
//2)private
//3)protected
//4)default


//Folder: bank, file:Bank.java

// package bank;

// class Account{
//   public String name; //String name; -> default 
//   protected String email;
//   private String password;
//   // to access private class there is a concept of getters & setters
//   public String getPassword(){ //getters
//     // setPassword(randomPass);
//     return this.password; 
//   }
//   public void setPassword(String pass){ //setters
//   // private void setPassword(String pass){
//     this.password=pass;
//   }
  
// }

// public class Bank{
//   public static void main(String args[]){ //public
//     Account acc1=new Account();
//     acc1.name="Anushka";
//     acc1.email="anushkamurade@gmail.com";
//     // acc1.setPassword("abcd@123");
//     System.out.println(acc1.getPassword());
    
//   }
// }


// import bank;
// class Main{
//   public static void main(String args[]){
//     bank.Account acc1=new bank.Account();
//     acc1.name="customer-1";
//   }
// }

//Abstraction
/*abstract class Animal{
  abstract void walk();
  Animal(){     //Animal constructor //1
    System.out.println("You are creating a new Animal");
  }
  public void eat(){
    System.out.println("Animal eats");
  }
}

class Horse extends Animal{
  Horse(){       //Horse constructor //2
    System.out.println("Created a Horse");
  }
  public void walk(){
    System.out.println("Walks on 4 legs");
  }
}

class Chicken extends Animal{
  public void walk(){
    System.out.println("Walks on 2 legs");
  }
}

class Main{
  public static void main(String args[]){
    Horse horse=new Horse();
    // horse.walk();
    // horse.eat();
    // Animal animal=new Animal();
    // animal.walk(); //throws run time error 
    //throws error as animal is an abstract concept (pure imagination and can't be created actually) and can't be instantiated
  }
}*/

//Interfaces //don't have constructors
/*interface Animal{
  int eyes=2;
  public void walk(); //
}

interface Herbivore{
  
}

class Horse implements Animal,Herbivore{ //multiple inheritance through interface
  public void walk(){
    System.out.println("walks on 4 legs");
  }
}

class Main{
  public static void main(String args[]){
    Horse horse=new Horse();
    horse.walk();
  }
}*/

//static
//property , function , block , nested class



















































































































































