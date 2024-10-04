### DAY 5
# following are multiline comments
'''
print("hii \n bye") 
'''
"""
print("hii")
"""
# print("  \"xyz\"  ") escape sequence character - \" , \'
'''print("Hey iam a \"good boy\"\n and this is viewer is also a good girl")
print('Hey iam a \"good boy\"\n and this is viewer is also a good girl')
print('Hey iam a \'good boy\'\n and this is viewer is also a good girl')
print("Hey iam a \'good boy\'\n and this is viewer is also a good girl")
print("Hey iam a \'good boy\"\n and this is viewer is also a good girl")
print("hey",6,7,sep="!")
print("hey",6,7,end="null\n")'''

### DAY 6
#In python,everything is object
# variables
'''a = 123456789
print(a)
b = "Anushka"
print(b)

#datatype
a = complex(8,2)
b = True
c = "Anushka"
d = None
e = 23344.73563
print("the datatype of a is", type(a))
print("the datatype of b is", type(b))
print("the datatype of c is", type(c))
print("the datatype of d is", type(d))
print("the datatype of e is",type(e))

#Mutable(change)
list1 = [8,2.3,[-4,5],["apple"],["banana"]]
print(list1)

#Immutable(can't change)
tuple1 = (("parrot","sparrow"),("Lion","Tiger"))
print(tuple1)

dict1 = {"name":"sakshi","age":20,"canVote":True}
print(dict1)'''

### DAY 7
'''a = 10
b = 20
print("a+b is",a+b) #add
print("a-b is",a-b) #subtract
print("a*b is",a*b) #multiply
print("a/b is",a/b) #divide
print("a%b is",a%b) #modulus
print("a**b is",a**b) #exponential
print("a//b is",a//b) #floor division
'''

### DAY 9
#explicit typecasting
# #program1
# '''a = "1"
# b = "2"
# print(a + b)
# print(int(a + b))
# print(int(a) + int(b))
# #program2
# string="15"
# number=7
# string_number = int(string) #throws an error if the string is not a valid integer
# sum = number + string_number
# print("The Sum of both is number is:",sum)

# #implicit typecasting
# c = 1.9
# d = 8
# print(c+d)
# print(type(c))
# print(type(d))'''

### DAY 10
#user input
'''a = input("Enter your name :")
print("My name is",a)
x = input("Enter first number")
y = input("Enter second number")
print(x+y) #will get string addition
print(int(x)+int(y))
print(float(x)+float(y))'''

### DAY 11
#name = "anushka"
#friend = "varshika"
#apple = '''he said,
#You can do it '''
'''apple = "he said,\"you can do it"
print("Hello," + name)
print(apple)
print('He said"I want to eat an apple".')
print(name[0])
print(name[1])
print(name[-1])
print(name[-2])
#print(name[8]) #throws an error
for character in name:
  print(character)'''

### DAY 12
'''name = "Anushka" 
print(name[0:2])
print(len(name))

fruit = "Mango"
len1 = len(fruit)
print("Mango is a",len1,"letter word")
print(fruit[0:4]) 
print(fruit[:4])
print(fruit[0:-3])
print(fruit[0:len(fruit)-3])
print(fruit[-1:-3]) #print(fruit[4:2])
#len(fruit)-1=5-1=4
#len(fruit)-3=5-3=2 
print(fruit[-3:-1]) #print(fruit[2:4])'''

### DAY 13
# strings are immutable
'''a = "hii!!!"
print(len(a)) 
print(a.upper()) #uppercase
print(a.lower()) #lowercase
print(a.rstrip("!")) #rstrip
print(a.replace("hii","python")) #replace
blogHeading = "introducing tO jS"
print(blogHeading.capitalize()) #capitalize
#center
str1="Welcome to the Console!!!"
print(str1.center(50))
print(len(str1))
print(len(str1.center(50)))
#count
b = "TEMPERATURE"
print(b.count("T")) # for t its 0
#endswith
print(str1.endswith("!!!")) 
print(str1.endswith("to",4,10)) 
#find #index-throws error if word/letter is absent
str2 = "He's name is Dan.He is an honest man"
print(str2.find("is"))
print(str2.find("ishhh"))
#print(str2.find("ishhh")) #throws an error
str3 = "hello33"
print(str3.isalnum()) #isalnum - a-z,A-Z,0-9 = true
str4 = "hello"
print(str4.isalpha()) #isalpha - a-z,A-Z
str5 = "hello world"
print(str5.islower()) #islower
str6="We Wish You a Merry christmas"
print(str6.isprintable()) #isprintable     #true but in case of \n - false
space="   "
print(space.isspace()) #isspace
str= "World Health Organization"
print(str.istitle()) #istitle
#startswith()
#swapcase() #upper to lower / lower to upper
#title()'''

### DAY 14
#Conditional Operators - >,<,>=,<=,==,!=
'''a = int(input("Enter your age:"))
print("Your age is:",a)
print(a>18)
print(a<=18)
print(a!=18)
print(a==18)

if(a>=18):
  print("Yes")
  print("You can drive")
else:
  print("No")
  print("You cannot drive")
print("Thankyou")

applePrice = 210
budget = 200
if(budget - applePrice>50):
   print("Alexa, add 1kg Apples to the cart")
else:
  print("Alexa, do not add Apples to the cart")

num = int(input("Enter the value of num: "))
if(num<0):
   print("Number is negative")
elif(num==0):
   print("Number is zero") #~elseif
else:
  print("Numer is positive")'''

#nested-elif
'''num=int(input("Enter number:"))
if(num<0):
 print("Number is negative")
elif(num>0):
  if(num<10):
    print("Number is between 1-10")
  elif(num>=10 and num<100):           # using & may cause u trouble
    print("Number is between 11-100")
  else :
    print("Number is greater than 100")
else:
    print("Number is zero")'''

### DAY 15
'''import time
timestamp=time.strftime('%H:%M:%S')
print(timestamp)
timestamp = time.strftime('%H')
print(timestamp)
timestamp = time.strftime('%M')
print(timestamp)
timestamp = time.strftime('%S')
print(timestamp)
'''
### DAY 16
#match case -python 3.10
'''x = input("Enter your name:")
match x :
case anushka:
print("She completed her ssc & hsc & She is currently in FY Btech & pursuing computer engineering")
case samarth:
print("He has completed ssc & he is currently in 11th science")
case swarangi:
print("She has appeared her 10th boards")
case adiraj:
print("He is in 6th std")
print shaurya:
print("He is in 6th std")
case_:
print("Ur are not among murade & borhade familiy's current gen")'''

### DAY 17
#for loops
'''name = 'anushka'
for i in name:
   print(i)
   if (i=="u"):
     print("This is something special!")

 colors=["Red","Green","Blue","Yellow"]
 for color in colors:
   print(color)
   for i in color:
     print(i)'''
#range function
'''for k in range(1,9): #1-8
   print(k) #ans = 1-8
   print(k+1) #ans = 1-9
for k in range(9): #0-8
  print(k) #ans = 0-8
  print(k+1) #ans = 1-9
for k in range(1,2001):
  print(k)'''
#range(start,stop,step)
'''for k in range(1,12,3):
  print(k)
for k in range(1,12,2):
  print(k)'''

### DAY 18
'''for i in range(5):
  print(i)

#while loop
#the below program is similar to do while loop but do while loops do not exist in python
i = int(input("Enter the number:"))
print(i)
while (i<100):
  i = int(input("Enter the number:"))
  print(i)
  i=i+1

count=7
while(count>0):
  print(count)
  count=count-1 #if u use + instead of - loop will be infinite
else:
  print("iam inside else")'''

### DAY 19
# number=int(input("Enter the number for which you want a\n multiplication table\n"))
# for i in range(15):
#   #if(i+1==10):
#    #continue
#   print(number,"X",i+1,"=",number*(i+1))

#   if(i+1==10):
#    break

# x = int(input("Enter How many times you want to print sorry"))
# for x in range(1,x+1,1):
#   print(x)
#   print("Sorry")
# print(":(")

# i=0
# while (1): #1-True
#   print(i+1)
#   print("AMAZING")
#   i = i+1
#   if(i%100==0):
#    break

### DAY 20
'''a = 9
b = 8
print("gmean1 is", (a*b)/(a+b))
if(a>b):
  print("First number is greater")
elif(a<b):
  print("Second number is greater")
else:
  print("They are equal")
c = 8
d = 7
print("gmean2 is",(c*d)/(c+d))
if(c>d):
  print("First number is greater")
elif(c<d):
  print("Second number is greater")
else:
  print("They are equal")'''
'''def calculateGmean(a,b):
  mean = (a*b)/(a+b)
  print("Gmean is",mean)
  
def isGreater(a,b): 
   if(a>b):
    print("First number is greater")
   elif(a<b):
    print("Second number is greater")
   else:
      print("They are equal")

# def isLesser(a,b):
#  pass

a=9
b=8
isGreater(a,b)
calculateGmean(a,b)

c=8
d=7
isGreater(c,d)
calculateGmean(c,d)'''

### DAY 21
# Function Arguments in Python
# Default Arguments
# Keyword Arguments
# Variable Arguments
# Required Arguments

#default
'''def name(fname,mname="Ajit",lname="Murade"):
  print("Hello,",fname,mname,lname)
name("Anushka")'''

#keyword
'''def name(fname,mname,lname):
 print("Hello",fname,mname,lname)
name(mname="Ajit",lname="Murade",fname="Anushka")'''

#Required
'''def name(fname,mname,lname):
  print("Hello",fname,mname,lname)
name("Anushka","Ajit","Murade")'''

#Variables:
#Tuple:
'''def average(*numbers):
 print(type(numbers))
 sum = 0
 for i in numbers:
   sum = sum+i
 print("Average is :",sum/len(numbers))
average(5,6,7,2)'''
#  return 7
#  return sum/len(numbers)    #return statement
# c=average(5,6,7,2)          #calling function
# print(c)

#Dictionary
'''def name(**name):
  print(type(name))
  print("Hello",name["fname"],
name["mname"], name["lname"])
name(mname="Ajit",lname="Murade",fname="Anushka")'''

### DAYS 22
#tuple & strings can't be changed (immutable)
#list can be changed (mutable)
'''marks = [3,7,6,"anushka", True]
print(marks)
print(type(marks))
print(marks[4])
print(marks[-3])  #convert into positive index i.e. [5-3]
print(marks[len(marks)-3])
print(marks[2])
print(marks[:])        #0:len(marks)
print(marks[1:])       #1:len(marks)
print(marks[1:-1])     #1:4 #slicing
if "anushka" in marks:
#if 7 in marks:
  print("Yes")
else:
  print("No")'''

'''marks=[3,7,6,"anushka",True,6,7,2,32,345,23]
print(marks)
print(marks[1:8])
print(marks[1:8:2])''' #here 2 is jump index
#list comprehension
'''lst=[ i*i for i in range (10)] 
print(lst)
lst=[ i*i for i in range (10) if i%2==0]
print(lst)'''

#DAY 23
#List Methods
'''l=[11,45,1,2,4,6,1]
print(l)
# l.sort() #ascending order
# l.sort(reverse=True) #descending order
# l.reverse() #descending order
# print(l.index(1)) #returns the value which is at that index
# print(l.count(1)) #occurence of 1 is__times
# m=l.copy()
# m[0]=0
# l.append(7)  #adds a no. at the end
# l.insert(1,899) #insert a number at that index
# m=[900,1000,1100]
# k=l+m
# print(k)
# l.extend(m)
print(l)'''

# DAY 24
'''tup = (1,) #if u want single no. use comma after that no. otherwise it will show class int
#here indexing,slicing,jump index,  is similar to list
print(type(tup))
t=[1,2,3,4,5]
t[0]=9 #list can be changed
print(type(t),t)
t=(1,9,11,19,)
#t[0]=9 #tuple can't be changed
print(type(t),t)'''

#DAY 25
#operations on tuple
#tuple-> list-> make changes using list methods -> changed list -> tuple
#However,we can directly concatenate 2 tuples
'''countries=("Spain","Italy","India","England","Germany")
temp=list(countries)
print(temp)
temp.append("Russia") #add item
temp.pop(3)           #remove item
temp[2]="Finland"     #change item
countries=tuple(temp)
print(countries)'''
#tuple methods
'''tuple1=(0,1,2,3,2,3,1,3,2,3)
#res=tuple1.count(3) print(res)
#res=tuple1.index(3) print(res)
#res=tuple1.index(3,4,8) print(res)#(no.,start,end)
#res=len(tuple1) print(res)'''

#DAY 26
#EXERCISE 2
#current time in US as we are running program on replit
'''import time
hour=int(time.strftime('%H'))
hour=int(input("Enter Hour:"))
print(hour)
if(hour>=0 and hour<12):
  print("Good Morning Sir!")
elif(hour>=12 and hour<17):
  print("Good Afternoon Sir!")
elif(hour>=17 and hour>0):
  print("Good Night Sir!")'''

#DAY 28
#f-stings
'''letter="Hey my name is {1} and Iam from {0}"
#letter="Hey my name is {} and Iam from {}"
country="India"
name="Anushka"
#print(letter.format(name,country))
print(letter.format(country,name)) #0,1
print(f"Hey my name is {name} and Iam from {country}") #fstrings new method
print(f"{2*30}")
print(f"{{2*30}}")
'''

#DAY 29
# #Doc-strings '''agstafavsg'''
# def square(n):
#   #print(n) this will make doc string none
#   '''Takes in a number n, returns the square of n'''
#   print(n**2)
# square(5)
# print(square.__doc__)
# #PEP 8 = Python Enhancement Proposal
# # import this will give you - the zen of python

#DAY 30
#FACTORIAL
'''def factorial(n):
  if(n==0 or n==1 ):
    return 1
  else:
     return n*factorial(n-1)
n=int(input("Enter a number:"))
f=factorial(n)
print("factorial=",f)


#FIBONACCI
def fib(n):
  if(n==1 or n==0):
    return 1
  else:
     return fib(n-2)+fib(n-1)
n=int(input("Enter a number:"))
f=fib(n)
print("fibonacci series:")
for n in range(0,n-1,1):
  print(fib(n))'''


#DAY 32
#sets
#order is not maintained , and not repeated
'''s={2,4,2,6}
print(type(s))
info={"carla",19,False,5.9,19}
print(info)
#anushka={} #dictionary
anushka=set()
print(type(anushka))
for value in info:
  print(value)'''


#DAY 32
'''s1={1,2,5,6}
s2={3,6,7}
print(s1.union(s2))
s1.update(s2) #elements of s2 are added in s1
print(s1,s2)

cities1={"Tokyo","Madrid","Berlin","Delhi"}
cities2={"Tokyo","Seoul","Kabul","Madrid"}
#item = cities1.pop()
#print(item)
print(cities1.isdisjoint(cities2)) 
print(cities1.issuperset(cities2))   #Bc=A
cities3=cities1.union(cities2) 
print(cities3) 
cities4=cities1.intersection(cities2) 
print(cities4) 
print(cities4.issubset(cities1))
cities1.add("Helsinki") 
cities1.remove("Tokyo") 
cities1.discard("Tokyo")
print(cities1)
cities1.intersection_update(cities2)
print(cities1)
cities1.clear()
print(cities1)
del cities1'''

#DAY 33 
'''dic={
  25:"Anushka",
  16:"Swarangi",
  31:"Samarth",
}
print(dic[31])
info={'name':'Anushka','age':18,'eligible':True}
#print(info['name2']) #throw error
print(info.get('name2'))
print(info.keys())
print(info.values())

print(info.items())
for key,value in info.items():
 print(f"The value corresponding to the key {key} is {value}")
 
for key in info.keys():
  print(info[key])
  print(f"The value corresponding to the key {key} is {info[key]}")'''

# DAY 34
'''ep={122:45,123:89,567:69,670:69}
ep2={222:67,566:90}
# ep.update(ep2)
# ep.clear()
# ep.pop(122)
# ep.popitem() #removes last item
# del ep #will throw error for print(ep)
# del ep["122"] #will throw error
# del ep[122]
print(ep)
empt={}
print(empt)'''

# DAY 35
#for else loop / while else loop
#beacause of break else won't be executed
#else if executed only after successful execution of for
'''for i in range(5):
  print(i)
else:
  print("Sorry no i")
  
for i in range(5):
  print(i)
  if i==4:
    break
else:
  print("Sorry no i")

i=0
while i<7:
  print(i)
  i=i+1
  if i==4:
     break
else:
    print("Sorry no i")

for i in []:
  print(i)
else:
  print("Sorry no i")'''

# DAY 36
#exception handling
'''a=input("Enter the number:")
print(f"Multiplication table of {a} is:")
try:
  for i in range(1,11):
     print(f"{int(a)} X {i}={int(a)*i}")
except Exception as e:
  print(e)
  print("INVALID INPUT")

print("End of Program")'''

'''try:
  num=int(input("Enter an integer:"))
  print(f"number={num}")
  a=[6,3]
  print(a[num])
except ValueError:
  print("Number entered is not an integer.")
except IndexError:
  print("Index Error")'''

# DAY 37
#finally keyword
'''try:
  l=[1,5,6,7]
  i=int(input("Enter the index:"))
  print(l[i])
except:
  print("Some error occurred")
finally:
  print("Iam always executed")'''

'''def func1():
  try:
    l=[1,5,6,7]
    i=int(input("Enter the index:"))
    print(l[i])
    return 1
  
  except:
    print("Some error occurred")
    return 0
# finally:
#   print("Iam always executed")
  print("Iam always executed") #not executed that's why we use 
  
x=func1()
print(x)'''

# DAY 38
# raising custom error
'''a=int(input("Enter any value between 5 and 9:"))
if(a<5 or a>9):
  raise ValueError("Value ahould be between 5 and 9")'''

# DAY 39
#KAUN BANEGA CROREPATI
#sample version
'''
questions=[
  [
    "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
  "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
  "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
    "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
    "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
    "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
    "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
    "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
    "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
    "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
  [
    "Which language was used to create fb?","Python","French","Javascript","Php","None",4
  ],
]

levels=[1000,2000,3000,4000,5000,10000,20000,40000,80000,160000,320000]
money=0
i=0
for i in range(0,len(questions)):
  question=questions[i]
  print(f"Question for Rs.{levels[i]}")
  print(f"a. {question[1]}  b. {question[2]}")
  print(f"c. {question[3]}  d. {question[4]}")
  reply=int(input("Enter your answer(1-4)"))
  if(reply==question[-1]):
    print(f"Correct answer,you have won Rs. {levels[i]}")
    if(i==4):
      money=10000
    elif(i==9):
      money=320000
  else:
    print("Wrong answer!")
    break
'''

# DAY 41
#SHORT HAND IF ELSE - don't use always as it reduces readability of code
'''a=330
b=3303
print("A") if a>b else  print("=") if a==b else print("B")
#print(9) if a>b else ""
c=9 if a>b else 0
print(c)'''
#SYNTAX
'''result = value_if_true if condition else value_if_false
print(result)
#equivalent to-
if condition:
  result=value_if_true
else:
  result=value_if_false
print(result)'''

# DAY 42
# enumerate function
'''marks=[12,56,32,98,12,45,1,4]
# index=0
# for mark in marks:
#   print(mark)
#   if(index==3):
#     print("Anushka,awesome!")
#   index+=1

# for index,mark in enumerate(marks):
#   print(mark)
#   if(index==3):
#     print("Anushka,awesome!")
 
for index,mark in enumerate(marks,start=1): #here marks start from 1 and index is not considered
  print(mark)
  if(index==1):
    print("Anushka,awesome!")'''


# DAY 43
# virtual environment


#  DAY 44
#import
# import pandas 
# pandas.read_csv()
'''import math
print(math.floor(3.142))
result=math.sqrt(9)
print(result) #output:3.0'''

'''from math import sqrt,pi
result=sqrt(9)*pi
print(result) #output: 3.0'''

'''from math import sqrt as s
result=s(9)
print(result) '''

'''from math import pi,sqrt as s
result=s(9)*pi
print(result) '''

'''import math as m
result=m.sqrt(9)
print(result)
print(m.pi)'''

'''from math import * #not recommended
result = sqrt(9)
print(result) #Output: 3.0
print(pi) #Output: 3.1415'''

'''import math
print(dir(math))
print(math.nan,type(math.nan))'''

#make a file named : anu.py
# def welcome():
#   print("Hey you are welcome my friend!")
#   anu="A good girl"

##from anu import * #will import everything
# or
#from anu import welcome, anu
#welcome()
#print(anu)

#import anu as a
#a.welcome()
#print(a.anu)

# DAY 45
# if __name__=="__main__":

#file name : anu.py
#def welcome():
#   print("Hey you are welcome from anushka")
#print(__name__)
#if __name__=="__main__":
#   welcome()

#import anu
#anu.welcome()

# DAY 46
# os module

# DAY 47
#secret coding language
#modify the solution given below
'''st=input("Enter message:")
words=st.split(" ")
coding=input("1 for coding or 0 for decoding")
coding= True if (coding=="1") else False
print(coding)
if(coding):
  nwords=[]
  for word in words:
    if(len(word)>=3):
      r1="dsf"
      r2="jkr"
      stnew=r1+word[:1]+word[0]+r2
      nwords.append(stnew)
    else:
      nwords.append(word[::-1])
  print(" ".join(nwords))
 
else:
  nwords=[]'''
      
# DAY 48
# local and global variable
'''x=4
print(x)

def hello():
  x=5
  print(f"The local x is {x}")
  print("Hello Anushka")
print(f"The global x is {x}")
hello()
print(f"The global x is {x}")'''

'''x=10 #global variable
def my_function():
  global x
  x=4
  y=5 #local variable
  print(y)
  
my_function()
print(x)
#print(y) # this will cause an error because y is a local variable and is not accessible outside of the function'''

# DAY 49
#FILE IO
# read(r),write(w),append(a),create(x),text(t),binary(b) 
# rt,rb,

# READING A FILE
'''f=open('myfile.txt','rb') #r is default mode even if you don't specify
#print(f)
text=f.read()
print(text)
f.close()'''
# WRTING A FILE
'''f=open('myfile2.txt','w')
f.write('Hello,world!')
f.close()'''
'''f=open('myfile2.txt','a')
f.write('Hello,world!')
f.close()'''

'''with open('myfile2.txt','a') as f:
  f.write("Hey I am inside with")'''
  
# DAY 50
#read(),readlines()
'''f=open('myfile.txt','r')
while True:
  line = f.readlines()
  if not line:
    break
  print(line)'''

'''f=open('myfile.txt','r')
while True:
  line = f.readlines()
  print(line)
  if not line:
    print(line,type(line))
    break'''

'''f=open('myfile.txt','r')
while True:
  line = f.readline() #try readlines()
  if not line:
    break
  print(line)'''


'''f=open('myfile3.txt','r')
i=0
while True:
  i+=1
  line = f.readline() 
  if not line:
    break
  m1=int(line.split(",")[0]) #without typecasting this acts as string
  m2=int(line.split(",")[1])
  m3=int(line.split(",")[2])
  print(f"Marks of student {i} in maths is: {m1}")
  print(f"Marks of students {i} in EG is: {m2}")
  print(f"Marks of students {i} in CP is: {m3}")'''
  
'''f=open('myfile2.txt','w')
lines=['line1\n','line2\n','line3\n']
f.writelines(lines)
f.close()'''

# DAY 51
#seek(),tell()
'''with open('file.txt','r') as f:
  print(type(f))
#move to the 10th byte in the file
  f.seek(10)
  print(f.tell())
#Read the next 5 bytes
  data =f.read(5)
  print(data)'''

'''with open('sample.txt','w') as f:
  f.write('Hello World!')
  f.truncate(5) #limit your file till 5th character
with open('sample.txt','r') as f:
  print(f.read())'''

# DAY 52
# lambda function - use when u want things to get done in single line
# function can also be passed as an arguement
'''# def double(x):
#   return x*2
double=lambda x: x*2
print(double(5))
# cube=lambda x: x*x*x
# print(cube(3))
avg=lambda x,y,z : (x+y+z)/3
print(avg(3,5,6))
def appl(fx,value): #fx-function
  return 6 + fx(value) 
#print(appl(cube,5)) #it requires definition of cube
print(appl(lambda x:x*x*x,5)) #anonymous func-doesnot requires definition of cube it just needs the logic'''

# DAY 53
#map,filter,reduce - can't be used with list
'''# def cube(x):
#   return x*x*x
l=[1,2,3,4,5,6]
# newl=[]
# for item in l:
#   newl.append(cube(item))
#newl=list(map(cube,l)) #alternative for above 3 lines
newl=list(map(lambda x: x*x*x,l)) #alternative for line 1,2,previous one
print(newl)
#FILTER
def filter_function(a):
  return a>3

newnewl=list(filter(filter_function,l))
print(newnewl)'''

'''from functools import reduce
# List of numbers
numbers=[1,2,3,4,5]
#Calculate the sum of the numbers using the reduce function
sum=reduce(lambda x,y:x+y,numbers)
# Print the sum
print(sum)'''

# DAY 54
# is VS ==
'''a=4
b="4"
print(a is b) #F     #exact location of object in memory
print(a==b)   #F     #value

a=3 #constant (immutable) - same memory location provided by python
b=3
print(a is b) #T
print(a==b)   #T

a=[1,2,123]  #list(mutable) - different memory location
b=[1,2,123]
print(a is b) #F
print(a==b)  #T

a="4"  #strings (immutable) - same memory location
b="4"
print(a is b) #T
print(a==b)  #T

a=(1,2)  #tuple (immutable) - same memory location
b=(1,2)
print(a is b) #T
print(a==b)  #T

a=None
b=None
print(a is b)     #T
print(a is None)  #T
print(a==b)       #T'''


# DAY 56
#INTRODUCTION TO OOPS

# DAY 57
# class and objects
# RAILWAY FORM -->class
# ANUSHKA KE INFO WALA RAILWAY FORM -->object
# XYZ KE INFO WALA RAILWAY FORM -->object
'''class person:
  name="Anushka"
  occupation="Software Developer"
  networth=10
  def info(self):
    print(f"{self.name} is a {self.occupation}")

a=person()
a.name="Sathya Nadela"
a.occupation="CEO of Microsoft"
# print(a.name,a.occupation)
a.info()

b=person()
b.name="Sundar Pichai"
b.occupation="CEO of Google"
# print(b.name,b.occupation)
b.info()

c=person()
c.info()'''


# DAY 63
'''import random
def check(comp,user):
  if comp==user:
    return 0
  if (comp==0 and user==1):
    return -1
  if (comp==1 and user==2):
    return -1
  if (comp==2 and user==0):
    return -1
  return 1
comp=random.randint(0,2)
user=int(input("Enter 0 for Snake,1 for Water and 2 for Gun"))
score=check(comp,user)
print("You:",user)
print("Computer:",comp)
if(score==0):
  print("Its a draw")
elif(score==-1):
  print("You lose")
else:
  print("You Won")'''





















