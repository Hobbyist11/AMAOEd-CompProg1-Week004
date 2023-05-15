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

// Make class
class Reservationslip {
 private:
  // Properties
  string Name;  // get from user
  int Age;  //  Must be over 18
  int Countguests;  // get from user
  float Countdays;  // Get from user
  float Overtimepay;
  float Balance;
  float DownPayment;
  float TotalPay;
  double Rate;

 public:
  // Methods

  // Set input
void SetInput(string name, int age, int countguests, float countdays) {
    Age = age;
    Name = name;
    Countguests = countguests;
    Countdays = countdays;
  }

  // Determine paygrade and tax rate
  void determinePayGradeAndTaxRate() {
    // Determine the rate
    int ho = Countguests;
    switch (ho) {
      case 1:
      Rate = 1000;
      break;
      case 2:
      Rate = 1800;
      break;
      case 3:
      Rate = 2700;
      break;
      case 4:
      Rate = 3600;
      break;
      case 5:
      Rate = 4500;
      break;
      default:
      Rate = 4500;
      break;
    }
  }

  // computePay
  void computePay() {
    TotalPay = Rate * Countdays;
    DownPayment = TotalPay * .40;
    Balance = TotalPay - DownPayment;
  }

  // Output
  void GetOutput() {
    cout << "" << endl;
    cout << "****************************" << endl;
    cout << "****************************" << endl;
    cout << "---------OUTPUT-------------" << endl;
    cout << "Customer Name             :" << Name << endl;
    cout << "Age      :" << "Php" << Age << endl;
    cout << "Number of guests         :" <<  Countguests << endl;
    cout << "Number of days  :" << "Php"<< Countdays << endl;
    cout << "Total Payment           :" << TotalPay << endl;
    cout << "Down Payment:" << "Php"<< DownPayment << endl;
    cout << "Balance         :" << "Php"<< Balance << endl;
  }
};


int main() {
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************
  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************

  // Set variables
  string name;
  int age;
  int guestcount;
  int dayscount;

  Reservationslip a;
  cout << "Customer Name              :";
  cin >> name;  // Use getline(cin, name);
  // Make sure it accepts the correct basic salary and paygrade
  cout << "Age       :";
    cin >> age;
    if (age < 17) {
        cout << "ERROR PLEASE ENTER A VALID AGE!!";
        cout << endl;
    } else {
        cout << "Number of guests       :";
            cin >> guestcount;

    cout<< "Number of days             :";
    cin >> dayscount;

  a.SetInput(name, age, guestcount , dayscount);
  a.determinePayGradeAndTaxRate();
  a.computePay();
  a.GetOutput();
    }
  _pause();
  return EXIT_SUCCESS;
}
