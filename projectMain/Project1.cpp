#include <iostream>
#include <cmath>
#include <ctime>
#include <iostream>
using namespace std;

// Jeffer Hernandez - 15007776
// CSC 231 -0500

// CSC231 Discrete Structure and Applications
// Programming Assignment
// Counting the Number of Days between January 1, 1900 to today (whenever the program is run)
// Using Virtual Studio that is installed on the Virtual Machine, write a program that computes and displays
// the number of days that have elapsed between January 1, 1900 and today (the day the program is run).

// The program must be designed as follows:
// Within a class named elapsed_days, provide the following functions:

// • bool is_year_valid(long year)
// returns true if year is >= 1900; otherwise false

// • bool is_month_valid(long month)
// returns true if month is between 1 and 12 (inclusive); otherwise false

// • bool is_leap_year(long year)
// returns true if year is a leap year

// • long return_days_in_month(long year, long month)
// returns the number of days for the month month in year year

// • long return days_in_year(year)
// returns the number of days in year

// • void set_elapsed_days(long elapsed_days)
// sets the field value set_elapsed_days

// • long get_elapsed_days()
// returns the field value set_elapsed_days

// • void compute_elapsed days()
// returns the number of days elapsed between January 1, 1900 and the day the program is run

// • void display_elapsed_days()
// displays the number of days elapsed in the form “The number of days elapsed
// since Jan 1, 1900 is xxxx.” Where xxxx is the number of the elapsed days

// • A constructor that determines the number of elapsed days

// • A suitable destructor


// Within a main(…) driver function:
// • Instantiates an instance of elapsed_days
// • Displays the number of elapsed days

class Rectangle {
    int width, height;
  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  return 0;
}




class ElapsedDays {
    long year;
    long month;
    long elapsed_days;

    public:
    bool is_year_valid(long);
    bool is_month_valid(long);
    bool is_leap_year(long);
    long return_days_in_month(long, long);
    long return_days_in_year(long);
    void set_elapsed_days(long);
    long get_elapsed_days();
    void compute_elapsed_days();
    void display_elapsed_days();
}elapsed;

bool ElapsedDays::is_year_valid(long year){
    if (year>=1900){
        true; }
    
    else {
        false; }
    
}

bool ElapsedDays::is_month_valid(long month){
    if (month>=1 && month <= 12){
        true;
    }
    else {
        false;
    }
}

bool ElapsedDays::is_leap_year(long year){
    if (year % 4 == 0){
        true;
    }
    else {
        false;
    }   
}

long ElapsedDays::return_days_in_month(long year, long month){

}

long ElapsedDays::return_days_in_year(long year){
    if (elapsed.is_leap_year(year)? ){
        return 366;
    }
    else {
        return 365;
    }
}

void ElapsedDays::set_elapsed_days(long elapsed_days){
    elapsed_days = elapsed_days;       
}

long ElapsedDays::get_elapsed_days(){
    return elapsed_days;
}

void ElapsedDays::compute_elapsed_days(){
time_t now = time(0);
}

void ElapsedDays::display_elapsed_days(){}
}






int main(){

return 0;
}





// bool is_year_valid(year);

// bool is_month_valid(month);

// bool is_leap_year(year);

// long return_days_in_month(year, month);

// long return_days_in_year(year);

// void set_elapsed_days(elapsed_days);

// long get_elapsed_days();

// void compute_elapsed_days();

// void display_elapsed_days();



