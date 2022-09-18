/* It is possible to inherit attributes and methods from one class to another.
To inherit from a class, use the : symbol. */

#include <iostream>
#include <string.h>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

// Double Derived class
class MyGrandChildCLass: public MyChildClass{
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}