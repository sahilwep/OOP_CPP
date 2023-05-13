# Classes and Objects : 

## Class :

* `Class` is  a `user-define` `datatype` that contains `data-members` and `members-function`, which can be accessed and used by creating `instance` of that `class`.

```cpp
#include <bits/stdc++.h>
using namespace std;

// creating class
class Abc
{
private:
    int id; 
public:
    void set(){
        cout << "Enter your id : ";
        cin >> id;
    }
    void display(){
        cout << "your id is : " << id ;
    }
};

int main(void)
{
    Abc obj;
    obj.set();
    obj.display();
    return 0;
}
```

### Defining members function :

* we can define function inside the class.

```cpp
#include <bits/stdc++.h>
using namespace std;


class Abc
{
private:
    int id; 
public:
    // member function 
    void set(){
        cout << "Enter your id : ";
        cin >> id;
    }
    // member function 
    void display(){
        cout << "your id is : " << id ;
    }
};

int main(void)
{
    Abc obj;
    obj.set();
    obj.display();
    return 0;
}
```
#### Nesting of members function :

* If one member function is called inside the other member function of the same class it is called nesting of a member function.

```cpp
#include <bits/stdc++.h>
using namespace std;


class Abc
{
private:
    int id; 
    void set(){
        cout << "Enter your id : ";
        cin >> id;
    }
public:
    void display(){
        set(); // here nested function working...
        cout << "your id is : " << id ;
    }
};

int main(void)
{
    Abc obj;
    obj.display();
    return 0;
}

```

#### Private members function : 

```cpp
#include <bits/stdc++.h>
using namespace std;


class Abc
{
private:
    int id;
    // private member function 
    void set(){
        cout << "Enter your id : ";
        cin >> id;
    }
public:
    void display(){
        set();
        cout << "your id is : " << id ;
    }
};

int main(void)
{
    Abc obj;
    obj.display();
    return 0;
}
```
## Objects :

* * `Object` is entity that has some `properties` and `behavior`, Object is an `instance` of class.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Abc
{
    int id; 
private:
public:
    void set(){
        cout << "Enter your id : ";
        cin >> id;
    }
    void display(){
        set();
        cout << "your id is : " << id ;
    }
};

int main(void)
{
    // creating an object
    Abc obj;
    obj.display();
    return 0;
}

```

## Array within class :
* We can create array within class.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Abc
{
private:
    int id;
    string name;
    int marks[3]; // array within class
    void set()
    {
        cout << "Enter your id : ";
        cin >> id;
        cout << "Enter your Name : ";
        cin >> name;
        for (int i = 0; i < 3; i++){
            cout << endl << i << "  Subject marks :  " ;
            cin >> marks[i];
        }
    }

public:
    void display()
    {
        set();

        cout << endl << "your id is : " << id;
        cout << endl << "your Name is : " << name;
        for (int i = 0; i < 3; i++){
            cout << endl << "You got " << marks[i] << " in " << i << " Subject. " ;
        }
    }
};

int main(void)
{
    Abc obj;
    obj.display();
    return 0;
}

```

## Memory Allocation : 

* Memory allocation is depend upon the data members and members function of class, when we create an object the memory is allocated.

* There are two parts of memory where an object can be stored.
  * HEAP
  * STACK 

* When we create an object the memory is allocated depending on the size of class.

### Size of any class
* size of any class depends upon his data members.

```cpp
#include<iostream>
using namespace std;

class Abc{
private:
    int x;  // int takes 4 bytes
public:
    void hello(){
        cout << "Hello";
    }
};

int main(){
    cout << sizeof(Abc);

    return 0;
}
```
* Here size is `4 bytes`

### Size of an empty class
* Size of an empty class is `1 bytes`.

```cpp
#include<iostream>
using namespace std;

class Abc{
};


int main(){
    cout << sizeof(Abc);

    return 0;
}
```

### Size of an object
* Size of an object is depend upon the class data members.
```cpp
#include<iostream>
using namespace std;

class Abc{
private:
    int x; // int takes 4 bytes

public:
    void hello(){
        cout << "Hello";
    }
};


int main(){
    Abc obj;
    cout << sizeof(obj);

    return 0;
}
```

* Here size is `4 bytes`

### Simple C++ program with class :

* Here is simple program with class.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Abc
{
private:
    int id;
    string name;
    void set()
    {
        cout << "Enter your id : ";
        cin >> id;
        cout << "Enter your Name : ";
        cin >> name;
    }

public:
    void display()
    {
        set();
        cout << endl << "your id is : " << id;
        cout << endl << "your Name is : " << name;
    }
};

int main(void)
{
    Abc obj;
    obj.display();
    return 0;
}
```

## Access Specifiers : 

* Access Specifiers are used to implement data hiding. 
* It used when we want to access the data-members and members function outside the class or while creating derived class.
* There are 3 types of access specifiers :
  * Public 
  * Private 
  * Protected
### Public 
* In public all data members are available to everyone.

```cpp
class Abc{
public:
    int x;
    int y;

};
int main(){
    Abc obj;
    obj.x = 10;
    obj.y = 20;
}
```

### Private 
* In private data members are accessed only by the members function inside the class.


```cpp
class Abc{
private:
    int x = 10;
public:
    void details(){
        cout << " x is : " << x; 
    }

};
int main(){
    Abc obj;
    obj.details();
}
```
### Protected
* In protected, it acts like private , but the only difference is data members are accessed by any subclass (derived class).

```cpp
#include<iostream>
using namespace std;

class Abc{
protected:
    int x = 10;

};

class Xyz : protected Abc{
public:
    void details(){
        cout << " x is : " << x; 
    }
};

int main(){
    Xyz obj;
    obj.details();
}
```

## function Definition inside & Outside class :

* When defining function inside the class there no extra things required, we define the function as normally we define any function.
* When defining function outside the class we use `::` scope resolution operator to mention the class name then we can define the function outside the class.

```cpp
#include <bits/stdc++.h>
using namespace std;

class Abc
{
private:
    int id;
    string name;
//  function definition inside the class
    void set()
    {
        cout << "Enter your id : ";
        cin >> id;
        cout << "Enter your Name : ";
        cin >> name;
    }
public:
    void display();

};
//  function definition outside the class
void Abc::display()
{
    set();
    cout << endl << "your id is : " << id;
    cout << endl << "your Name is : " << name;
}

int main(void)
{
    Abc obj;
    obj.display();
    return 0;
}
```


***