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

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {

//DECLARE
  string seat[5][7] = {
    {"1  ","2  ","3  ","4  ","5  ","6  ","7  "},
    {"8  ","9  ","10 ","11 ","12 ","13 ","14 "},
    {"15 ","16 ","17 ","18 ","19 ","20 ","21 "},
    {"22 ","23 ","24 ","25 ","26 ","27 ","28 "},
    {"29 ","30 ","31 ","32 ","33 ","34 ","35 "}

  };

  int seatnumber;

  for (int i =0; i<5;i++){
    for(int j =0; j<7;j++){
      std::cout<< seat[i][j];
    }
    std::cout<< endl;
  }

  std::cout<<endl;
  //OUTPUT
  std::cout<< "Enter seat number to reserve:";
  //INPUT
  std::cin >> seatnumber;
  string zero = "X  ";
  int row_finder = (seatnumber-1)/7;
  int column_finder = ((seatnumber - (7*row_finder))-1);
   seat[row_finder][column_finder] = zero;
 for (int i =0; i<5;i++){
    for(int j =0; j<7;j++){
      std::cout<< seat[i][j];
    }
    std::cout<< endl;
  }



    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

        // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
  std::cout <<endl;
    _pause();
    return EXIT_SUCCESS;
}
