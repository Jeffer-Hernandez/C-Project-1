#include <iostream>
#include <ctime>

using namespace std;

// Jeffer Hernandez - 15007776
// CSC 231 -0500

// CSC231 Discrete Structure and Applications
// Programming Assignment
// Counting the Number of Days between January 1, 1900 to today (whenever the program is run)
// Using Virtual Studio that is installed on the Virtual Machine, write a program that computes and displays
// the number of days that have elapsed between January 1, 1900 and today (the day the program is run).



class Elapsed_Days
{
    private:
        long elapsed_days;
    public:
        Elapsed_Days();
        ~Elapsed_Days();
        bool is_year_valid(long year);
        bool is_month_valid(long month);
        bool is_leap_year(long year);
        long return_days_in_month(long year, long month);
        long return_days_in_year(long year);
        void set_elapsed_days(long elapsed_days);
        long get_elapsed_days();
        void compute_elapsed_days();
        void display_elapsed_days();
};
// constructor to determine the number of elapsed days
Elapsed_Days::Elapsed_Days()
{
    elapsed_days = 0; // set elapsed_days to 0
    compute_elapsed_days(); // calculate the number of days elapsed
}

// destructor that deletes the created object
Elapsed_Days::~Elapsed_Days(){}

// function that returns true if year is valid i.e year >= 1900 else return false
bool Elapsed_Days:: is_year_valid(long year)
{
    return (year >= 1900);
}

// function that returns true if month is valid i.e month is between [1,12] else return false
bool Elapsed_Days:: is_month_valid(long month)
{
    return(month>=1 && month <=12);
}

// function that returns true if year is a leap year else return false
bool Elapsed_Days:: is_leap_year(long year)
{
    return (year%400 == 0 || (year%4 == 0 && year%100 != 0));
}

// function to return number of days for the month in year
long Elapsed_Days:: return_days_in_month(long year, long month)
{
    int daysInMonth = 0;
    // validate year and month is valid
    if(is_year_valid(year) && is_month_valid(month))
    {
        // return number of days based on month
        switch(month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                daysInMonth =  31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                daysInMonth = 30;
                break;
            case 2: // February, check if year is leap or not
                if(is_leap_year(year))
                    daysInMonth = 29;
                else
                daysInMonth = 28;
                
        }
    }
    
    return daysInMonth;
}

// function to return the number of days in year
long Elapsed_Days:: return_days_in_year(long year)
{
    int daysInYear = 0;
    // validate year
    if(is_year_valid(year))
    {
        // check if year is leap or not
        if(is_leap_year(year))
            daysInYear =  366;
        else
        daysInYear = 365;
    }
    
    return daysInYear;
}

// function to set the number of elapsed days
void Elapsed_Days:: set_elapsed_days(long elapsed_days)
{
    this->elapsed_days = elapsed_days;
}

// function to return the number of elapsed days
long Elapsed_Days:: get_elapsed_days()
{
    return elapsed_days;
}

// function to compute the number of elapsed days between Jan 1, 1900 and the day the program is run
void Elapsed_Days:: compute_elapsed_days()
{
    // get the current date and time
    time_t curtime = time(NULL);
    tm* curtime_ptr = localtime(&curtime);
    // extract the current day, month and year
    long year = curtime_ptr->tm_year+1900; // tm_year - year since 1900
    long month = curtime_ptr->tm_mon+1; // month of the year from0 to 11
    long day = curtime_ptr->tm_mday; // day of the month from 1 to 31
    
    // loop to add number of days passed from year 1900 to 1 year previous to current year
    for (long y = 1900; y < year; y++)
    {
        elapsed_days += return_days_in_year(y);
    }
    
    // loop to add number of days passed in current year from month 1 to 1 month previous to current month
    for (long m = 1; m < month; m++)
    {
        elapsed_days += return_days_in_month(year, m);
    }
    
    // add number of days passed in this month (including current day)
    elapsed_days += day;
}

// displays the number of days elapsed
void Elapsed_Days:: display_elapsed_days()
{
    cout<< "The number of days elapsed since Jan 1, 1900 is "<< elapsed_days<< endl;
}

int main()
{
    // create a new Elapsed_Day object
    Elapsed_Days days;
    // display the number of days passed
    days.display_elapsed_days();
    return 0;
}









