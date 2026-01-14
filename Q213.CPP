#include<iostream>
using namespace std;
int reverseOfNumber(int num){
    int reverseNUm = 0;
    while (num!=0)
    {
        int lastDigit = num % 10;
        reverseNUm = (reverseNUm*10)+lastDigit;
       num = num/10;
    }
    

return reverseNUm;

}


int main(){
    /*
   Reverse a Number
    I/P : 1234
    0/P : 4321
 */
    int num;
    cout<<"Enter Number :";
    cin>>num;


    cout<<"Reverse Of Number of "<<num<<" is :"<<reverseOfNumber(num);

    return 0;
}