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

string palindromeOrNot(int orignal , int revrse){
    if(orignal == revrse){
        return "Yes";
    }else{
        return "No";
    }


}


int main(){
    /*
   Palindrome Number -> left right meaning must me same
    I/P : 1221
    0/P : Yes

    I/P : 1231
    0/P : No
 */
    int num;
    cout<<"Enter Number :";
    cin>>num;


    int reverse = reverseOfNumber(num);
    string orignal = palindromeOrNot(reverse,num);

    cout<<"Palindrome or Not of "<<num<<" : "<<orignal;

    return 0;
}