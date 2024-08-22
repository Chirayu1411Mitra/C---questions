#include<iostream>
using namespace std;

void inputs(int &birth_month, int &birth_year, int &current_month, int &current_year) {
    cout << "Enter your birth year = "; 
    cin >> birth_year;
    cout << "Enter your birth month = ";
    cin >> birth_month;
    cout << "Enter your current year = ";
    cin >> current_year;
    cout << "Enter your current month = ";
    cin >> current_month;
}

void calculate_age(int birth_month, int birth_year, int current_month, int current_year, int &age_months, int &age_years) {
    if (current_month >= birth_month) {
        age_years = current_year - birth_year;
        age_months = current_month - birth_month;
    } else {
        age_years = current_year - birth_year - 1;
        age_months = 12 + current_month - birth_month;
    }
}

int days_in_month(int month, int year) {
    switch(month) {
        case 4: case 6: case 9: case 11:
            return 30; 
        case 2:

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                return 29;  
            else
                return 28; 
        default:
            return 31;  
    }
}

void calculate_days(int &days1, int birth_month, int birth_year, int current_month, int current_year, int age_months, int age_years) {
    days1 = age_years * 365;  


    for (int i = 0; i < age_months; i++) {
        int month = (birth_month + i) % 12;
        int year = birth_year + (birth_month + i) / 12;
        days1 += days_in_month(month, year);
    }
}

void print_age(int days1, int age_years, int age_months) {
    cout << "Your age is " << age_years << " years and " << age_months << " months." << endl;
    cout << "Equivalent to approximately " << days1 << " days." << endl;
}

int main() {
    int birth_month;
    int birth_year;
    int current_month;
    int current_year;
    int age_months;
    int age_years;
    int days1;

    inputs(birth_month, birth_year, current_month, current_year);
    calculate_age(birth_month, birth_year, current_month, current_year, age_months, age_years);
    calculate_days(days1, birth_month, birth_year, current_month, current_year, age_months, age_years);
    print_age(days1, age_years, age_months);
    
    return 0;
}
