/******************************************************************************
# Author:            Ari Pollack and Xavier Braker
# Lab:               Discussion 5
# Date:              May 11, 2025
# Description:       This program will calculate the sum, average, minimum, and
                     maximum of a dataset.
# Input:             num (int)
# Output:            sum (int), min (int), max (int), average (double)
# Sources:           Discussion 5 specifications, zyBooks reference
#*****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   // Declare variables for input, output, and calculations
   int num = 0;
   int numEntries = 0;
   int sum = 0;
   int min = 0;
   int max = 0;
   double average = 0.00;

   // Set floating point precision to 2 decimal places for output
   cout << fixed << setprecision(2);

   // Print a welcome message
   cout << "Welcome to the Number Factory! We'll take your numbers and \
process them for you. We can calculate the sum, average, minimum, and maximum \
of your inputs." << endl << endl;

   // Prompt for input
   cout << "Enter as many positive integers as you’d like (a negative number \
will end the process): ";
   do
   {
      cin >> num;
      if (num >= 0) {
         // Update accumulators
         numEntries += 1;
         sum += num;
         // Update minimum and maximum values
         if (numEntries == 1) {
            min = num;
         }
         else if (num < min) {
            min = num;
         }
         if (num > max) {
            max = num;
         }
      }
   } while (num >= 0);
   // Calculate average
   average = static_cast<double>(sum) / static_cast<double>(numEntries);
   cout << endl;

   // Print the results with proper formatting
   // Line 1/5
   cout << setw(69) << setfill('_') << "" << setfill(' ') << endl;
   // Line 2/5
   cout << "|~~~~\\___/~~~~|~~~~\\_______/~~~~|~~~~\\_______/~~~~|~~~~\
\\_______/~~~~|" << endl;
   // Line 3/5
   cout << "|    |SUM|    |    |AVERAGE|    |    |MINIMUM|    |    \
|MAXIMUM|    |" << endl;
   // Line 4/5
   cout << setfill('-');
   cout << "|";
   cout << setw(13) << sum;
   cout << "|";
   cout << setw(17) << average;
   cout << "|";
   cout << setw(17) << min;
   cout << "|";
   cout << setw(17) << max;
   cout << "|";
   cout << setfill(' ');
   cout << endl;
   // Line 5/5
   cout << "|_____________|_________________|_________________|\
_________________|" << endl << endl;

   // Print a goodbye message
   cout << "Thank you for visiting the number factory!" << endl;

   return 0;
}