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
class Payslip {
 private:
  /* Properties */
  string Name;  // input from user
  bool Paygrade;
  int Basicsalary;  // input from user
  int Overtimehrs;  // input from user
  float Overtimepay;
  float Grosspay;
  float Netpay;
  float Withholdingtax;
  double taxrate;

 public:
/* Methods */
  // Sets inputs

void SetInput(string name, int basicsalary, int overtimehrs) {
  Name = name;
  Basicsalary = basicsalary;
  Overtimehrs = overtimehrs;
}

// deteminePayGradeAndTaxRate
  void deteminePayGradeAndTaxRate() {
    // Pay grade = Basic salary  % 10000 if 5000 = B else A

    // Determines pay grade
    std::string s;
    if (Basicsalary % 10000 == 5000) {
    bool Paygrade = true;
      s = "B";
    } else {
      Paygrade = false;
      s = "A";
    }
    // Determines tax rate
    // Use a switch statement
    int ho = Basicsalary / 10000;
    switch (ho) {
      case 1:
      taxrate = 0.1;
      break;
      case 2:
      taxrate = 0.15;
      break;
      case 3:
      taxrate = 0.2;
      break;
      case 4:
      taxrate = 0.25;
      break;
      case 5:
      taxrate = 0.3;
      break;
      default:
      taxrate = 0.3;
      break;
    }
}

// computePay
  void computePay() {
    Overtimepay = Overtimehrs * (Basicsalary * 0.01);
    Grosspay = Basicsalary + Overtimepay;
    Withholdingtax = Grosspay * taxrate;
    Netpay = Grosspay - Withholdingtax - 800;
  }

// Output
void GetOutput() {
    // set locale for number separator
    std::locale loc("");
    std::cout.imbue(loc);
    cout << "" << endl;
    cout << "**************************" << endl;
    cout << "**************************" << endl;
    cout << "****-----OUTPUT-----******" << endl;
    cout << "Name           :" << Name << endl;
    cout << "Basic Salary   :" << "Php " << Basicsalary << endl;
    std:: string Paystr = Paygrade ? "A" : "B";
    cout << "Paygrade       :" << Paystr << endl;
    cout << "No.of OT Hours :" << Overtimehrs << endl;
    cout << "OT Pay         :" << "Php " << Overtimepay << endl;
    cout << "Gross Pay      :" << "Php " << Grosspay << endl;
    cout << "Withholding Tax:" << "Php " << Withholdingtax << endl;
    cout << "Net Pay        :" <<  "Php " << Netpay << endl;
    cout << "" << endl;
    }
};

int main() {
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************

  // set vars
  string name;
  int basicsalary;
  int overtimehrs;

  Payslip j;
  cout << "Name        :";
  cin >> name;
  do {
  cout << "Basicsalary :";
  cin >> basicsalary;
  cout << "Overtimehrs :";
  cin >> overtimehrs;
  }while (basicsalary < 10000 || overtimehrs < 1);

  j.SetInput(name, basicsalary, overtimehrs);
  j.deteminePayGradeAndTaxRate();
  j.computePay();
  j.GetOutput();

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
