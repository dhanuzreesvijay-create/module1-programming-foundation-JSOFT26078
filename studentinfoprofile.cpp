# include <iostream>
using namespace std;
int main() {
    string name;
    int age;
    double mark;
    cout <<"Name :"; cin >> name;
    cout <<"Age :"; cin >> age;
    cout <<"Marks :"; cin >> mark;
    cout <<"\n ---STUDENT PROFILE---" <<endl;
    cout <<"Name :" <<name <<endl;
    cout <<"Age :" <<age <<endl;
    cout <<"Percentage :" << mark / 5.0 <<endl;
    return 0;
}