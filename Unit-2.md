# Operators & Control Structure 

## Operators in CPP :
* Operators are special symbol that operate on a value to perform specific mathematical or logical computations. 
* An operators operates on operands :
  * `a + b` here `+` is the addition operator, `a` and `b` are the operands that are being added.
* Operators can be classified into 6 types:
  * Arithmetic Operators
    * Unary Operator
    * Binary Operator
  * Relational Operators
  * Logical Operators
  * Bitwise Operators
  * Assignment Operators
  * Ternary or Conditional Operators

### Arithmetic Operators
* Arithmetic Operators are used to perform arithmetic or metathetical operations on the operands.
* They are of Two types:
  * Unary
  * Binary

#### Unary Operator

* Unary works single operands.

|Operator | Uses|
|-------|---------|
| `++` |Increment operator, Increase value by 1 |
| `--` |Decrement operator, Decrease value by 1 |

* `++a` or `a++` both increment value but their is slight difference, `++a` is pre increment, it will increment the value by 1 and then process the operation &  `a++` is post increment, it will process the operation and then increment it by 1.
* Same concept for decrement goes with `--a` & `a--`

```cpp
int main(void){

    int a = 5;
    int x;
    // pre increment
    x = ++a;
    // post increment
    // x = a++;

    cout << x;
    return 0;
}
```

#### Binary Operator

* Binary works with two operands.
 

|Operators |Uses|
|----|---|
| `+` |add two operands|
| `-` |sub second operand from the first operand |
| `*` |multiply two operands|
| `/` |divide numerator by denominator|
| `%` |Remainder of Division|


### Relational Operators

| Operators | Uses |
|-----|-----|
| `==` |Equal :  Check two operands are equal or not|
| `!=` | Not Equal : Check two operands are not equal |
| `> ` | Check left operand is grater than right operand | 
| `< ` | Check right operand is grater than left operand | 
| `<=` | Check right operand is grater and equal than left operand |
| `>=` | Check left operand is grater and equal than right operand |


### Logical Operators

| Operators | Uses |
|-----|-----|
| `&&` | Logical and : Check both side true then result is true |  
|  `|| ` | Logical OR : If one side  is true then result is true |
| `!` | Logical Not : If the value is true then it makes it false | 


### Bitwise Operators

| Operators | Uses |
|-----|-----|
| `& `|  Bitwise AND : satisfied both side true for resultant to be true |
| `| `| Bitwise OR : satisfied one side true for resultant to be true | 
| `^ `| Bitwise Exclusive OR (XOR): both side true or false to be true else, if one side true and other side false then the result be false |
| `<<` |Left shift : shift bit to the left side |
| `>>` |Right shift : shift bit to the right side |


### Assignments Operators

| Operators | Uses |
|-----|-----|
| `=` | a = 5 , assigning the value |
| `+=` | a+=b , a = a + b |
| `-=` | a-=b , a = a - b | 
| `*=` | a*=b , a = a * b | 
| `/=` | a/=b , a = a / b | 
| `%=` | a%=b , a = a % b | 



### Ternary or Conditional Operators

* Conditional Operators are also known as ternary operators & it is used to evaluated conditions.
  * exp1 ? exp2 : exp3
  * if exp1 is true ? then execute exp2 : else execute exp3
  * eg.     `(a > b) ? cout << "greater" : cout << "not greater" ;`


## Scope Resolution Operator :
* Scope is special type of operator which is use for :
  * Access a global variable when there is a local variable with same name.
  * To define a function outside a class.
  * To access a class's static variables.
  * In case of multiple inheritance
  * For namespace
  * Refer to a class inside another class. 


### Access a global variable when there is a local variable with same name.

```cpp
#include<iostream>
using namespace std;
 
int x; // Global x
 
int main(){
int x = 10; // Local x
cout << "Value of global x is " << ::x;
cout << "\nValue of local x is " << x;
return 0;
}
```
###  To define a function outside a class.

```cpp
#include <iostream>
using namespace std;
 
class A {
public:
    // Only declaration
    void fun();
};
 
// Definition outside class using ::
void A::fun() {
     cout << "fun() called";
    }
 
int main()
{
    A a;
    a.fun();
    return 0;
}
```

###  To access a class's static variables.

```cpp
#include<iostream>
using namespace std;
 
class Test
{
    static int x;
public:
    static int y;
 
    // Local parameter 'x' hides class member
    // 'x', but we can access it using ::
    void func(int x)
    {
    // We can access class's static variable
    // even if there is a local variable
    cout << "Value of static x is " << Test::x;
 
    cout << "\nValue of local x is " << x;
    }
};
 
// In C++, static members must be explicitly defined
// like this
int Test::x = 1;
int Test::y = 2;
 
int main()
{
    Test obj;
    int x = 3 ;
    obj.func(x);
 
    cout << "\nTest::y = " << Test::y;
 
    return 0;
}
```


###  In case of multiple inheritance

```cpp
#include<iostream>
using namespace std;

class A
{
protected:
	int x;
public:
	A() { x = 10; }
};

class B
{
protected:
	int x;
public:
	B() { x = 20; }
};

class C: public A, public B
{
public:
void fun()
{
	cout << "A's x is " << A::x;
	cout << "\nB's x is " << B::x;
}
};

int main()
{
	C c;
	c.fun();
	return 0;
}
```

###  For namespace

```cpp
#include<iostream>

int main(void){

    std::cout<<"use of scope resolution operator.";
    return 0;
}
```

###  Refer to a class inside another class.

```cpp
#include <iostream>
using namespace std;

class outside {
public:
	int x;
	class inside {
	public:
		int x;
		static int y;
		int foo();
	};
};
int outside::inside::y = 5;

int main()
{
	outside A; 
	outside::inside B;
}

```

## Member De-referencing Operators :

* De-referencing is the method where we are using a pointer to access the elements whose address is being stored.
* In simple words de-referencing is the method by which we access the value of the variable whose address is store in the pointer variable.
* We use `*` operator to get the value of the variable from its address.
 

![Member de-referencing](https://media.geeksforgeeks.org/wp-content/uploads/20221210164842/PointersinC.png)

> Syntax of pointer variable.

```plain
datatype *var_name;
```

> Example : 
```cpp
int main(void)
{
    int a = 5;
    int *ptr;
    // referencing
    ptr = &a;

    cout << "De-referencing" << *ptr;
    
    return 0;
}
```

## Type Casting :

* Type casing is a process by which we use convert one datatype into another datatype.
* Typecasting can be done implicitly by compiler or explicitly by user.

### Implicit Typecasting :
* Implicit Typecasting is done by compiler.
* All datatype of variable are upgraded to the datatype of variable with largest data type.
* It is possible to lose the information during the implicit conversion(when sign implicit converted to unsigned) the sign can be lost.
  
```plain
bool -> char -> short int -> int -> 

unsigned int -> long -> unsigned -> 

long long -> float -> double -> long double
```

> Example :


```cpp
#include <iostream>
using namespace std;

int main()
{
	int x = 10; // integer x
	char y = 'a'; // character c

	// y implicitly converted to int. ASCII
	// value of 'a' is 97
	x = x + y;

	// x is implicitly converted to float
	float z = x + 1.0;

	cout << "x = " << x << endl
		<< "y = " << y << endl
		<< "z = " << z << endl;

	return 0;
}
```



### Explicit Typecasting :
* Explicit Typecasting is done by user itself.
* This can be done by explicitly defining the required type in front the expression in parenthesis `()` , this can also considered as forceful casting. 

> Syntax :

``(type) expression``

> Example :

```cpp
int main(void)
{
    float a = 5.7;
    int x = 10;
    x = x + (int)a;
    cout << x;
    return 0;
}
```

## main function :
* Every program in C/CPP has one main function, we can say main function is the first function which is executed when program runs.
* Inside `main()` function we write our code logic, we call other function & function inside the class from the main function.

```cpp
int main(void){
    // logic...
    // logic...
}
```

## Function Prototyping :
* Function prototyping is a deceleration of function that serves following purposes:
  * It tells the return type of the data that the function will return.
  * It tells the number of arguments passed to the function.
  * It tells the datatype of each passed arguments.
  * It also tells the order which the arguments are passed.   

> Example :

```cpp
// function
int main(void){

    hello();
    return 0;
}

// function 
void hello(){
    cout <<"Hello world";
}
```

## handling Pointers :

* Pointers are special type of variable that used to store memory address of another variables & it's pointing to that address value.

```cpp
int main(void)
{
    // normal variable
    int x  = 10;
    // pointer variable
    int *ptr;
    // store address of normal variable
    ptr = &x;

    cout << endl << "value store in ptr : " << ptr;
    cout << endl << "Address of  x : " << &x;
    cout << endl << "de-referencing ptr : " << *ptr;
    return 0;
}
```

![Pointers](https://media.geeksforgeeks.org/wp-content/uploads/20221210164842/PointersinC.png)


## C Structures & Limitations :

* Structure is a `user-define` datatype which we use in `C` , it has many limitations like :
  * `Data hiding`
  * Function can't be define inside the `struct`
  * There is no concept of `inheritance`.
  * Structure are slower because it requires storage space for all data.
  * Cannot have concept of `static members`.
  * Don't have `access specifiers`.
  * Cannot have `constructor` inside the structure.
  * Structure are limited to variable only, we can't define function. 

## Decision Making Controls :

* Control Statements are used to control the flow of program.
* Selection Structure : If , else if , Switch.

### If
* If the condition is true then statement is executes else it skip.

```cpp
a = 10; 
b = 20;
if (a <  b) {
    cout << "a is grater than b ";
}
```

#### Nested Statements
* Nested means statement under statement.

```cpp
if(a>100){
    if(b<60){
        if(c<40){
            cout << "this statement is executes.";
        }
    }
}
```

### If & else
* Suppose we need the code that execute if condition is false also, then we use if else ladder.

```cpp
a = 10; 
b = 20;
if (a > b){
    cout << "a is grater than b ";
}
else {
    cout << "a is less than b ";
}
```

### else if
* Suppose we want to put multiple if condition then we use the else-if statements.
* Note : we need at-least 1 if statement in the else if ladder.
* we can use else statement at last if we want.



```cpp
a = 10; 
b = 20;
if (a>b){
    cout << "a is grater than b ";
}
else if (a<b){
    cout << "a is less than b ";
}
else if (a = b){
    cout << "a is equal to b ";
}
```


### Ternary Condition 
* Suppose if we want to write the if else in one line then we use the ternary condition .

```cpp
(grade > 33)? cout << "pass" : cout << "fail";
```

### Switch Statement
* Switch statement is used to compare the cases.
* This Control statement allows us to make decision with numbers choices.
* default will execute if all the statement is false.
* every case has break statement on it.
* default no need for break statement.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    int day;
    cout << "Enter the day : ";
    cin >> day;

    switch (day)
    {
    case 1 :
        cout << "Monday";
        break;
    
    case 2 :
        cout << "Tuesday";
        break;
    
    case 3 :
        cout << "Wednesday";
        break;
    
    case 4 :
        cout << "Thursday";
        break;
    
    case 5 :
        cout << "Friday";
        break;
    
    case 6 :
        cout << "Saturday";
        break;

    case 7 :
        cout << "Sunday";
        break;
    
    default:
        cout << "Error input";
        break;
    }

    return 0;
}
```

#### Rules for switch statement
* Case label must be unique.
* Case label must end with : colon.
* Case label must have constant expression.
* Case label must have integer character type.
* Case label should not be floating point.
* Default can be placed anywhere in the statement.
* Multiple case cannot use same expression.
* Relation operator is not allowed in switch.
* Nesting of switch is allowed.
* Variable are not allowed in switch case label.


```cpp
int count; // variable.
Switch(pt){
    case count: // variable is used.
    ...
    break;
    case 1<8: // Relation operator is used.
    ...
    break;
    case 2.5: // float is used.
    ...
    break;
    case 3: // Same expression is used.
    ...
    break;
    case 3: // Same expression is used.
    ...
    break;
}
```


## Iterative Controls & Jumping Controls :

### Iterative Controls :

* Looping statements are used to executes statements in loop until the condition is satisfies.
* For explaining all those iteration , i will write a code that print no's from `n to 1`.

#### While 
* entry control loop : control of the loop is at the first.
* while loop is execute if the condition is true.

```cpp
int main(void)
{
    int input;
    cout << "Enter the no : ";
    cin >> input;
    while(input != 0){
        cout << endl << input;
        input--;
    }

    return 0;
}
```


#### for
* entry control loop : control of the loop is at the first.
* For loop is executes if the condition is satisfies.
* For loop contain 3 parts.

```cpp
for(initialization ; condition ; increment/decrement ){
    statements...
    ...
}
```

```cpp
int main(void)
{
    int input;
    cout << "Enter the no : ";
    cin >> input;

    for(int i = input; i != 0 ; i-- ){
        cout << endl << i;
        
    }
    return 0;
}
```


#### do-while
* Exit control loop : control of the loop is at the last.
* Do while is special type of loop which at-least  first executes the statement of code then check the condition and then loop according to the condition.
  
```cpp
int main(void)
{
    int input;
    cout << "Enter the no : ";
    cin >> input;

    do{
        cout << endl << input;
        input--;
    } while (input != 0);

    return 0;
}
```

### Jumping Controls :
* Jumping statement are used to jump the flow of execution from one line to another.

#### Break 
* Break statement is used to exit from the code statement.
* Break statement is allows programmer to terminate the loop.
* Break statement mainly used for 
  * loops
  * switch & case
  * if else (not mostly used)

```cpp
int main(void){
    statements
    if (condition){
        statements;
        break;
    }
    statements;
    return 0;
}
```

### Continue
* Continue statement only used inside the loops.
* Continue not exit the execution, it just skip that following condition.

```C
int main(void){

    for(int x = 10; x > 0; x--){
        if(n % 2 == 1){
            continue;
        }
        cout << n ;
    }
    return 0;
}
```

### return
* Return statement are used inside the function to return the output or data to another function where it was called.
* Return generally exit the function.

```C
return(expression)
```
> example
```cpp
int main(void){
    int a = 2 ;
    cout << "square is :" << sqr(a);
    return 0;
}

int sqr(int x){
    return x*x; // return the square result
}
```

### Goto
* Goto is used to transfer the control from one place to another unconditionally.

```C
identifier: // identifier
    ...
    ...
    ...
    goto identifier; // go to identifier
```
>example

```C
x1: 
    ...
    ...
    goto x1;
```