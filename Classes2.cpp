//Class with Private Members
//Program to demonstrate the class DayOfYear.
#include <iostream>
using namespace std;

class DayOfYear
{
public:
      int myVar;
    void output( );

    void set(int new_month, int new_day);
    //Precondition: new_month and new_day form a possible date.
    //Postcondition: The date is reset according to the arguments.

    int get_month( );
    //Returns the month, 1 for January, 2 for February, etc.

    int get_day( );
    //Returns the day of the month
    private:  //private variables not accessible directly in main
    void check_date( );  //checks the date
    int month;
    int day;
};

int main( )
{
    DayOfYear today, birthday; //making two objects of DayOfYear class
    //setting today object's month and day
    today.set(11,23);
    cout << "Today's date is ";
    today.output( );    //calling output to display today object's month and day

    //setting birthday object's month and day
    birthday.set(3, 21);  //try setting these values same as one passed for today.
                            //also try passing invalid values here and then run code
    cout << "Birthday date is ";
    birthday.output( );  //calling output to display birthday object's month and day

    if (today.get_month() == birthday.get_month() //if condition to check if today object's month/day
       && today.get_day() == birthday.get_day() ) //equals birthday object's month/day
        cout << "Happy Birthday!\n";    //if matched it's your birthday
    else
        cout << "It's not your birthday\n";  //if dates don't match it's not your birthday
    return 0;
}
//function definitions

void DayOfYear::output()
 {
  //displays the set month and day

    cout << "month = " << month
         << ", day = " << day << endl;

}

void DayOfYear::set(int new_month, int new_day) //setting
{
    month = new_month; //sets private variable month equal to argument new_month
    day = new_day;  //sets private variable day equal to argument new_day
    check_date(); //calling check_date to see if the month and date entered are valid
}

void DayOfYear::check_date( )
{
  //checking to see if month and date values are valid
    if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
    {
        cout << "Illegal date. Aborting program.\n";
    }
}int DayOfYear::get_month( )
{
    return month;    //retuns the private variable month
}

int DayOfYear::get_day( )
{
    return day;    //returns the private variable day
}

/*First we make a class named DayOfYear and declare the public and private variables.
Public variables include:
Variable myVar
The functions output, set, get_month, get_day
Private variables include:
Variables month, day
Fucntions check_date*/
