// 217. Find Factorial of a Number

#include<iostream>
using namespace std;
int main(){
int num ;
cout<<"Enter Number :";
cin>>num;


int fact = 1;
for(int i=1;i<=num;i++){
    fact = fact*i;
}

cout<<"Factorial : "<<fact;

    return 0;
}