#include <iostream>
using namespace std;

double & GetWeeklyHours()
{
    double h = 46.50;
    double &hours = h;

    return hours;
}
//---------------------------------------------------------------------------
double * GetSalary()
{
    double salary = 26.48;
    double *HourlySalary = &salary;

    return HourlySalary;
}
//---------------------------------------------------------------------------
int main()
{
    double hour  = GetWeeklyHours();
    double salary = *GetSalary();

    cout << "Weekly Hours:  " << hour << endl;
    cout << "Hourly Salary: " << salary << endl;

    double WeeklySalary = hour * salary;

    cout << "Weekly Salary: " << WeeklySalary << endl;

    return 0;
}
