#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int sum = 0;
 while ( /* Condition ->*/num!=0)
 {
    int lastDigit = num % 10 ;
    sum = sum + lastDigit ;
    num = num / 10; // <- updation
 }
 return sum;
}
int main(){

/*
    Sum of Digits
    I/P : 12345
    0/P :15
 */
 int num;
cout<<"Enter Number :";
cin>>num;



cout<<"Sum of "<<num<<" is :"<<sumOfDigits(num);



    return 0;
}