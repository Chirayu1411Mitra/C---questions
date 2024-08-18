#include<iostream>
using namespace std;
int main(){
    int birth_month;
    int birth_year;
    int Current_month;
    int Current_year;
    int age_months;
    int age_years;

    cout<<"Enter your birth year ="; 
    cin>>birth_year;
    cout<<"Enter your birth month =";
    cin>>birth_month;
    cout<<"Enter your current year =";
    cin>>Current_year;
    cout<<"Enter your current month =";
    cin>>Current_month;

    age_years= (Current_year-birth_year)-1;
    age_months=(12-birth_month)+Current_month;
    cout<<"Your age is "<<age_years<<" years and "<<age_months<<" months"; 
}