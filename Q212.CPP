#include<iostream>
using namespace std;
string evenOrOdd(int num){
    // its a high oprator
    // if(num%2==0){
    //     return "Even";
    // }else{
    //     return "Odd"; 
    // }

    if((num&1) == 0){
        return "Even";
    }else{
        return "Odd"; 
    }
}
int main(){
/*
   Check if a Number is even or not
    I/P : 4
    0/P : Even

    I/P : 7
    0/P : Odd
 */

 int num;
cout<<"Enter Number :";
cin>>num;


cout<<"Number is even or not : "<<num<<" is :"<<evenOrOdd(num);







    return 0;


}