#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    }

int main(){

    // int arr[5];
    // float brr[56];

    // int arr[10];
    // int arr[5] = {1,2,3,4,5};
    // int arr[5] ={1,2,3};
    // int arr[5] = {0};
    // int arr[5] = {1};

    //int arr[] ={10,20,30,40};
  
    // printArray(arr,8);

    // int arr[5];
    // cout<<"Size of Array : "<<sizeof(arr)<<endl;
    //   cout<<"Size of int : "<<sizeof(int)<<endl;
    //       cout<<"Elements of Array : "<<sizeof(arr)/sizeof(int);

//     int arr[5];
//     int i=0;
//    cout<<"Enter input for indexes :";
   
//     for(int i=0; i<5;i++){
//          cout<<"Enter input for indexes :";
//         cin>>arr[i];
        
//     }
//     cout<<endl;
    
//     for(int i=0; i<5;i++){
//         cout<<arr[i]<<" ";
//     }
    

// int brr[5] ={10,20,30,40};
// for(int x:brr){
//     cout<<x<<" ";
// }



    char arr[10];
    int i=0;
   
    for(int i=0; i<10;i++){
         cout<<"Enter input for indexes :";
        cin>>arr[i];
        
    }
    cout<<endl;
    cout<<"Char Array : ";
    for(int i=0; i<10;i++){
        cout<<arr[i]<<" ";
    }
    


    return 0;
}