# Intro to OOP 

* Object Oriented programming (OOP) is a programming paradigm that organize software design around data, or objects, rather than function and logic.

## Procedural vs OOP

### Procedural:

* Procedural programming define `process by process` execution of program, mean our program execute inside some process, and then that process will call another process. We can say Step-by Step execution of program logic.

* In Procedural Programming we generally use functions, and that function call another function, it happens process by process, or line by line we can say. 
* There is problem of privacy for data and implemented code in Procedural programming. 
* Procedural Programming follow `Top-Down` approach.
* Adding new data and functions is not easy.
* Procedural Programming based on unreal world.
* Procedural Programming uses for designing small and less complex program.
* Examples  : Fortran, ALGOL, Pascal, C etc.

### OOP:

* In OOP we use the concept of `class` and `objects` , Object are real model which has their property that based upon that class type.
* `object` is an entity that 
* We can say class is user-define datatype & Object is a variable of class datatype.
* OOP helps us to achieve the solution of real world problems.
* OOP Provide The functionality of `Access-specifier` that helps to maintain the data security.
* OOP Based on Real world.
* OOP uses for designing large & Complex program.
* OOP uses the concept of Abstraction.
* Examples  : CPP, Java, C#, Python, Ruby, Perl, Rust, Dart etc.

## Basic Concept of OOP:

* The OOP is based on the concept of `Class` & `object`.


```cpp
class Bike{
    // data members
    // members functions
    // Code logic
    ...
    ...
};

int main(void){
    Bike X; // 1st Object of name X
    Bike Y; // 2nd Object of name Y

    return 0;
}
```
### Class : 
* `Class` is  a `user-define` `datatype` that contains `data-members` and `members-function`, which can be accessed and used by creating `instance` of that `class`.
* We can say that the Class is a `blueprint` representing a `group`  of object that share some common `properties` and `behaviors`.
* Eg. There are many bikes with different brands, but their some of the properties are same that they have 2 wheels, 2 brakes, speed limit, milage range, etc. So here bike is class and brakes, wheels, speed limit, milage etc are their properties.
* We can declare class with keyword `class` with `class_name` and curly-brackets `{}` end with semicolon `;`  like : `{code logic};` 


> Syntax :
```cpp
class Class_Name{
    // code logic
};
```

* When we create class, by default their members are `private`, we need to explicitly make it `public` in order to access it outside the class. 
* These `public`, `private` &  `protected` is `Access Specifier` which is generally use to access the data members and members function outside the class. 

```cpp
class Abc{
    // data members & members function 
private: 
    ...
    ...

public:
    ...
    ...
};
```


### Object :
* `Object` is entity that has some `properties` and `behavior`, Object is an `instance` of class.
* When Class is define there is no memory defined, but when it `instantiated`(i.e. an objet is created) memory is `allocated`.
* Eg. Same example of bike, lets suppose there is a bike of `X` company and there is a bike of `Y` company, they both have share some similarities but they have difference also, so `X` and `Y` we say as Object of that class.
* we can declare `object` with datatype name as `class_name` and `object_name` inside the main function or after the end of class deceleration.

> End of the class definition.
```cpp
class Class_Name{
    // code logic
    ...
    ...
}object1,object2,object3,...;
```

> Inside the main()

```cpp
class Class_name{
    // code logic
};

int main(void){
    Class_Name Object1;
    Class_Name Object2;
    ...
    ...
    return 0;
}
```

*** 

### OPPs Concept are mainly 4:

#### Abstraction:
* Data `abstraction` is one of the most essential  method and important feature of OOP. Data Abstraction mean displaying only essential information and `hiding` the details. 
* Data Abstraction refer providing only `essential` information about the data to outside world, `hiding` the background `details` and `implementation`.
* `Abstraction using Classes ` : When we create an object, we use  `.` operator and access the functions that exist in class, we don't know much about the implementation of that function, we simply use it. that is the example of Abstraction using classes. 
* `Abstraction in Header files ` : When we are doing any maths, we include the `maths.h` in header file that contains various function for performing mathematical operation, example `pow()` that is used for getting the power of any no, we simply use the `pow()` function without knowing the implementation behind the `pow()` , that is the example of Abstraction in header files.
* Consider a real life example of a man driving a car, he only know that pressing the accelerator will move increase speed and pressing the break will stop the car, he does not know the implementation of accelerator and break

> Example : Here a object call `rectangle_area()` function, it gives the area of rectangle. He don't know the implementation of `rectangle_area()` function, that how the area came when he pass the `l` and `W` values.
```cpp
#include<iostream>
using namespace std;

class Abc{

public:
    int rectangle_area(int l,int w){
        return l*w;
    }
};

int main(void){
    Abc object;
    cout << "Area of rectangle is : " << object.rectangle_area(2,3);
    
    return 0;
}
```

#### Polymorphism:
* The word polymorphism mean having multiple form. We can define polymorphism as the ability of message to display in more than one form.
* Example : A person at the same time can have different characteristic. A man at a same time is a father, a brother, a husband, and a employee. So same person precess different behavior in different situation. This is called polymorphism.

* 

> Example : Here object want to add numbers, he will use `sum()` function for adding. he didn't think much about the parameters that he pass, whether it's `2 , 3 , 4 ` parameters, it will add the no till the `4` parameters..

```cpp
#include<iostream>
using namespace std;

class Abc{

public:
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a, int b, int c){
        return a+b+c;
    }
    int sum(int a, int b, int c, int d){
        return a+b+c+d;
    }
};

int main(void){
    Abc object;
    cout << endl << "Sum of two no : " << object.sum(2,2);
    cout << endl << "Sum of three no : " << object.sum(2,2,2);
    cout << endl << "Sum of four no : " << object.sum(2,2,2,2);
    
    return 0;
}
```
* CPP support function overloading and operator overloading.
##### Function Overloading
* Function overloading is feature where two or more function can have same name but different parameters, When function name is overloaded with different jobs it is called function overloading.
* Function overloading is using the single function name to perform different type of task.
* In function overloading we change the signature of the function by changing the parameters and return type, but name are same.

> Example : 

```cpp
add(int a, int b)
add(int a, int b, int c)
add(double a, double b)
add(double a, double b, double c)
```
##### Operator Overloading

* The process of making an operator exhibit differently behavior in different instance is known as operator overloading.  
* In operator overloading we change the functionality of operators.

* Operator overloading is a compile time polymorphism.
* Operator that can be overload:

|Operators |Examples |
|----------|---------|
| Binary Arithmetic | 	+, -, *, /, % |
| Unary Arithmetic |  	+, -, ++, — |
| Assignment  |	=,  +=,*=, /=,-=, %= |
| Bitwise	| & , \| , << , >> , ~ , ^ |
| De-referencing| 	(->) |
| Dynamic memory allocation, De-allocation | 	New, delete | 
| Subscript	| [  ]|
| Function call |  	()| 
| Logical 	| &, \|\|, ! | 
| Relational	>,|  < , = =, <=, >= |


* Operator that cannot be overloaded are as follows:
  * Scope operator `::`
  * `Sizeof()`
  * member selector `.`
  * member pointer selector `*`
  * ternary operator `? :`

> Example 

```cpp
#include <iostream>
using namespace std;

class Abc {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Abc() : value(5) {}

    // Overload ++ when used as prefix
    void operator ++ () {
        value = value + 2;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Abc count1;

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}
```

#### Inheritance:
* The capacity of class to derived the properties and characteristics from another class called inheritance. 
* Inherit defines :
  * `Sub Class ` : The class that inherit properties from another class.
  * `Super Class` : The class whose properties are inherited by a sub class is called base class or super class.
  * `Reusability` : Inheritance support the concept of reusability i.e. when we want to create a new class and there is already a class that include some of the code we want,we can derived our new class from existing class, by doing this we are reusing the fields and methods of the existing class.
  * Example : Dog, cat, cow can be derived class of animal base class.

> Example: We make a object or student class and inherit it from the parent class then, we call the parent class function with object.

```cpp
#include <iostream>
using namespace std;

class Parent{
private:
    int id;
    string name;
public:
    void p_set(){
        cout << "Enter the id : ";
        cin >> id;
        cout << "Enter the name : ";
        cin >> name;
    }
    void p_display(){
        cout << endl << id << "\t" << name << "\t";
    }
};

class Student: public Parent{
    
};

int main() {
    Student obj;
    obj.p_set();
    obj.p_display();
    return 0;
}
```

##### Modes of Inheritance:
* There are 3 modes.
* `Public` : If we derived a subclass from a public base class. Then the public member of the base class will become `Public` in derived class and protected member of base class will become `Protected` in the derived class. 
* `protected` : If we derived a subclass from a protected base class.  Then both public members and protected members will become `Protected` in base class.   
* `Private` : If we derived a subclass from a private base class. Then Both Public members and protected members of base class will become `Private` in base class.

#### Encapsulation:

* Encapsulation is define as the wrapping of data and information in single unit.
* We can say Encapsulation is a process of binding data members and members function in `single unit` called `class`.

> Example :

```cpp
#include <iostream>
using namespace std;

class Xyz{
private:
    int id;
    string name;
public:
    void set(){
        cout << "Enter the id : ";
        cin >> id;
        cout << "Enter the name : ";
        cin >> name;
    }
    void display(){
        cout << endl << id << "\t" << name << "\t";
    }
};

int main() {
    Xyz obj;
    obj.set();
    obj.display();
    return 0;
}
```

***

## OOP Languages :

* OOP Language are used to make Complex Real world program which is used in industries.
* `Java` is the best example of OOP language, although `CPP` also support OOP Programming paradigm but it is not architectural independent as java has.
* CPP is not pure OOP, but its more functional and procedural and support OOP features. 

## Benefits of OOP :
* While programming a complex real world application we can take help of OOPs build our program structural and functional.
* OOPs has tons of benefits which we can online crawl about it.  

## C vs C++ :

* `C` is pure Procedural programming language with many limitation, whereas `CPP` support OOP to overcome the limitation of `C`. 
* We can say `CPP` is improved version of `C`.
* `C` has the concept of `structure` and `union` which helps us during complex programming, but we can't define function inside the `struct` & `union`, also there is no concept of `Access-specifier` , `Abstraction` which will provide the data security.   
### Simple C++ program :

#### Input Output :
* In CPP for `Input` we use `cin`, and for `output` we use `cout`
  * `Insertion operator` : `<<` This is used with cout.
  * `Extraction operator` : `>>` this is used with cin. 

```cpp
#include<bits/stdc++.h>
using namespace std;

class Abc{
private:
    int id;
public:
    void set(){
        cout << endl << "Enter The id : ";
        cin >> id;
    }
    void get(){
        cout << endl << "id is : "<< id ;
    }
};

int main(void){
    Abc obj;
    obj.set();
    obj.get();

    return 0;
}

```

## Compiling & linking :

### Compiling:
* Compiling is a process by which our `source code` converted into executable `binary code`.
* Compiling is based on the `architecture` of system. we need different complier for different types of architecture.

### Linking: 
* Linking is a process in which our compiler include the library code with our source code and compile into a binary executable.
* Example : suppose we use `maths.h` library function `pow()` in our source code to calculate the power, we didn't know the implementation of `pow()` function, but we use it by including the `maths.h` header file into global deceleration section. When our program will compile it will fetch the whole `maths.h` library and link it to our source code, this whole process is know as `linking`. 


## Tokens :
* Token are the smallest unit of program that is meaningful to the compiler. Toke can be :
  * Keywords
  * Identifiers
  * Constants
  * Strings
  * Special Symbols
  * Operators

### Keywords :
* Keywords are predefined or reserved words in a programming language.
* There are total `95` keywords CPP has.

```plain
<!-- C Keywords (32) -->
auto         double      int        struct
break        else        long       switch
case         enum        register   typedef
char         extern      return     union
const        float       short      unsigned
continue     for         signed     void
default      goto        sizeof     volatile
do           if          static     while 

<!-- CPP new keywords (31) -->
asm          bool        catch          class
const_cast   delete      dynamic_cast   explicit 
export       false       friend         inline 
mutable      namespace   new            operator 
private      protected   public         reinterpret_cast
static_cast  template    this           throw
true         try         typeid         typename 
using        virtual     wchar_t 
```


### Identifiers & Constants :
* `Identifiers` : Identifiers are used as a general terminology for naming variable, function and arrays.
* `Constants` : Constant are special type of variable, whose values can't be overwritten once it's declared. 

### Data type : 
* Data type is defining the type of data that variable is using.
* In simple words if user is working with numbers we can say it's `integer` type of data, if user is working with characters or name we sat it's string or character type of data.
* There are various Datatype :
  * `int`
  * `char`
  * `float`
  * `double`
  * `string`
  * ...

### Reference Variable :
* When a variable is declare as reference, it becomes alternative name for an existing variable. A variable can be declare by putting `&` in the deceleration.
> Syntax :
```plain
<!-- Both works -->
datatype &reference_variable_name = variable;
datatype& reference_variable_name = variable;
```

> Example : 
```cpp
#include <bits/stdc++.h>
using namespace std;

int main(void){

    int x = 10;
    // reference variable
    int &ref = x;

    // changing the ref will affect the x
    ref = 20;
    cout << x;

    return 0;
}
```
#### Application of Reference variable
* There are multiple application for references in CPP, few of them are : 
  * Modify the passed parameters
  * Avoiding a Copy of large structures
  * In `For` each loop to modify all objects.
  * For each loop to avoid the copy of objects. 

## Overloading & Overriding

###  Function Overloading (achieved at compile time)
* Function Overloading provides multiple definitions of the function by changing signature. i.e. changing number of parameter, changing datatype of parameter, return type doesn't play any role.

```plain
void sum(int a);
void sum(int a, int b); 
```

###  Function Overriding (achieved at run time)

* It is the redefinition of base class function in its derived class with same signature i.e. return type and parameters. 
* It can only be done in derived class.

```cpp
Class Base{
public: 
        virtual void display(){ 
        cout << "hello"; 
        }
};

Class Child:public Base{
public: 
        void display(){
        cout << "bye";
        }
};
```


***
