#include<iostream>
#include<limits.h>
using namespace std;

int smallestDigits(int num){
    int smallDigit = INT_MAX;
 while ( /* Condition ->*/num!=0)
 {
    int lastDigit = num % 10 ;
    /* Swap if num is small*/
  // smallDigit = min(lastDigit,smallDigit) ;
  if(smallDigit>lastDigit){
    smallDigit = lastDigit;
  }else if(lastDigit>smallDigit){
    lastDigit = smallDigit;
  }

    num = num / 10; // <- updation
 }
 return smallDigit;
}
int main(){

/*
    Smalest Digits
    I/P : 5892
    0/P :2
 */
 int num;
cout<<"Enter Number :";
cin>>num;


cout<<"Smalest Digits of "<<num<<" is :"<<smallestDigits(num);



    return 0;
}