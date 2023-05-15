/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include "_pause.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

// parent class
class Person {
 public:
  /* Properties */
  string Name;
  string Address;
  bool Gender;
  int Age;
  string Occupation;
};

// Derived class
class Student: public Person {
 public:
  // Properties
  string Program;
  int Year;
  bool Enrolled;
  // Constructor
  Student(string name, string address, bool gender,
          int age, string occupation) {
    Name = name;
    Address = address;
    Gender = gender;
    Age = age;
    Occupation = occupation;
  }

  // Accessor
  void GetInfo() {
    cout << "Name:" << Name << endl;
    cout << "Address:" << Address << endl;
    cout << "Gender:" << Gender << endl;
    cout << "Age:" << Age << endl;
    cout << "Occupation:" << Occupation << endl;
    cout << "Program:" << Program << endl;
    cout << "Year:" << Year << endl;
    cout << "Enrolled:" << Enrolled << endl;
  }
  // Make a mutator for dog breed,size,registration
  void Set_student(string program, int year, bool enrolled) {
    this->Program = program;
    this->Year = year;
    this->Enrolled = enrolled;
  }
};
int main() {
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************

  Student luke("Luke White", "Manila", 1, 21, "Student");
  luke.Set_student("Computer Science", 2, 1);
  luke.GetInfo();
  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
