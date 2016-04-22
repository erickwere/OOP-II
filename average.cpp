#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
int total, gradeCounter, grade, average;
total = 0;
gradeCounter= 1;
while ( gradeCounter<= 10 )
{
cout<< "Enter grade: ";
cin>> grade;
total = total + grade;
gradeCounter= gradeCounter+ 1;
}
average = total / 10;
cout<< "Class average is " << average << endl;
return 0;
}