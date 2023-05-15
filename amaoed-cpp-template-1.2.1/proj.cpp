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
    int Age;  // Must be over 18
    int Countguests;  // get form user
    float Countdays;  // get from user
    float Balance;
    float DownPayment;
    float TotalPay;
    double Rate;

 public:
    // Set Input
    void SetInput(string name, int age, int countguests, float countdays) {
        Age = age;
        Name = name;
        Countguests = countguests;
        Countdays = countdays;
    }

    // Determine Rate based on number of guests
    void DetermineRate() {
        int a = Countguests;
        switch (a) {
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
            default:
            Rate = 4500;
            break;
        }
    }

    // Compute the payment
    void ComputePay() {
        TotalPay = Rate * Countdays;
        DownPayment = TotalPay * .40;
        Balance = TotalPay - DownPayment;
    }

    // Output
    void GetOutput() {
        cout << "" << endl;
        cout << "*******************************" << endl;
        cout << "*******************************" << endl;
        cout << "----------OUTPUT---------------" << endl;
        cout << "Customer Name                  :" << Name << endl;
        cout << "Age                            :" << Age << endl;
        cout << "Number of guests               :" << Countguests << endl;
        cout << "Number of days                 :" << Countdays << endl;
        cout << "Total payment                  :" << TotalPay << endl;
        cout << "Down payment                   :" << DownPayment << endl;
        cout << "Balance                        :" << Balance << endl;
    }
};

int main() {
  // ************************** TO DO **************************
  // Place your code logic after this comment line
  // ***********************************************************

    // Set the variables
    string name;
    int age;
    int guestcount;
    int dayscount;

    Reservationslip a;
    cout << "Customer Name                  :";
    getline(cin, name);

    // Make sure age is not less than 17
    cout << "Age                            :";
    cin >> age;

    if (age < 18) {
        cout << "" << endl;
        cout << "ERROR PLESE ENTER A VALID AGE!!!";
        cout << endl;
    } else {
        cout << "Number of guests           :";
        cin >> guestcount;

        cout << "Number of days              :";
        cin >> dayscount;

        a.SetInput(name, age, guestcount, dayscount);
        a.DetermineRate();
        a.ComputePay();
        a.GetOutput();
    }

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
