#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year you want to check = ";
    cin>>year;
    if (year%4==0){
        cout<<"It's a leap year";
    }    
    else{
        cout<<"It's not a Leap year";
    }

return 0;
}