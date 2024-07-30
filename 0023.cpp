#include<bits/stdc++.h>
using namespace std;

/*
 * Hint: 
 * Given a day and month, this program calculates the day of the week.
 * Assuming January 1st is a Thursday, as the test case 1 1 yields Thursday.
 */

int main() {
    size_t d, m; // Variables to store day and month input

    // Array storing the cumulative number of days up to the end of each month for a non-leap year.
    size_t mo[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    // Example: mo[1] is 31 (January), mo[2] is 59 (January + February), etc.

    // Array storing the days of the week, starting with Thursday.
    string da[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

    cin >> d >> m; // Read the day and month from input

    // Calculate the day of the week
    // (d-1) to convert day to 0-based index (because arrays start from 0) but the day start from 1
    // mo[m-1] to get cumulative days till the end of the previous month
    // Adding these gives the total days passed since January 1st
    // Using modulo 7 as a number of days in a week to get the day of the week (0=Thursday, 1=Friday, etc.)
    cout << da[((d-1) + mo[m-1]) % 7];
}
