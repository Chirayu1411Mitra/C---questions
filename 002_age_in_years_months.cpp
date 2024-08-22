#include<iostream>
using namespace std;
void inputs(int &birth_month,int &birth_year,int &Current_month,int &Current_year,int &age_months,int &age_years){
 
    cout<<"Enter your birth year ="; 
    cin>>birth_year;
    cout<<"Enter your birth month =";
    cin>>birth_month;
    cout<<"Enter your current year =";
    cin>>Current_year;
    cout<<"Enter your current month =";
    cin>>Current_month;
}
void calculate_age(int birth_month,int birth_year,int Current_month,int Current_year,int &age_months,int &age_years){
     age_years= (Current_year-birth_year)-1;
    age_months=(12-birth_month)+Current_month;
}
void days(int &days1, int age_years){
    days1= age_years*365;

    
}
void print_age(int age_months, int days1, int age_years){
    cout<<"Your age is"<< days1<< "ans years is "<< age_years; 
}
int main(){
    int birth_month;
    int birth_year;
    int Current_month;
    int Current_year;
    int age_months;
    int age_years;
    int days1;

  inputs(birth_month, birth_year, Current_month, Current_year, age_months, age_years);
  calculate_age(birth_month, birth_year, Current_month, Current_year, age_months, age_years);
  days(age_years, days1);
  print_age(age_months, days1, age_years);
  return 0;
}