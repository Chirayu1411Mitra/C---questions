#include<iostream>
using namespace std;
void inputs(int &birth_month,int &birth_year,int &Current_month,int &Current_year,int &age_months,int &age_years, int birth_date, int current_date){
 
    cout<<"Enter your birth year ="; 
    cin>>birth_year;
    cout<<"Enter your birth month =";
    cin>>birth_month;
    cout<<"Enter your birth month =";
    cin>>birth_date;
    cout<<"Enter your current year =";
    cin>>Current_year;
    cout<<"Enter your current month =";
    cin>>Current_month;
    cout<<"Enter your birth month =";
    cin>>current_date;
}


void print_age(int age_months,int age_years){
    cout<<"Your age is "<<age_years<<" years and "<<age_months<<" months"; 
}
int main(){
    int birth_month;
    int birth_year;
    int Current_month;
    int Current_year;

   

  return 0;
}