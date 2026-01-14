// Prime Number
// divisble by its self or 1
#include<iostream>
using namespace std;
int main(){

int num ;
cout<<"Enter Number :";
cin>>num;
bool isPrime = 1; // asume value is prime

for(int i=2;i<num-1;i++){
    if(num%i==0){
        isPrime = 0; // not a prime
        break;
    }
}

if(isPrime==true){
    cout<<"Prime";
}else{
    cout<<"Not a Prime";
}




    return 0;
}