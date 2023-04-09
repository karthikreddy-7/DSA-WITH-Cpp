#include <iostream>
using namespace std;

int maximum(int arr[], int x){
    int max1=arr[0];
    for (int i=0;i<x;i++){
        if (arr[i]>max1){
            max1=arr[i];
        }
    }
    return max1;
}

int sum(int arr[], int x){
    int sum1=0;
    for (int i=0;i<x;i++){
        sum1=sum1+arr[i];
    }
    return sum1;
}

void square(int arr[], int arr1[], int x){
    for (int i=0;i<x;i++){
        arr1[i]=arr[i]*arr[i];
    }
}

int main(){
    cout<<"enter the length of the array: ";
    int x;
    cin>>x;
    int arr[x];
    for (int i=0;i<x;i++){
        cout<<"enter the "<<i<<" index value: ";
        cin>>arr[i];
    }
    cout<<"ARRAY OPERATIONS: \n 1.LARGEST ELEMENT IN THE ARRAY \n 2.SUM OF ALL THE ELEMENTS IN THE ARRAY \n 3.SQUARE OF THE ELEMENTS IN THE ARRAY";
    cout<<"\n enter the operation number : ";
    int op;
    cin>>op;
    if (op==1){
        int max1=maximum(arr,x);
        cout<<"\n the largest element in the array is : "<<max1;
    }
    else if (op==2){
        int sum1=sum(arr,x);
        cout<<"the sum of all the elements in the array is: "<<sum1;
    }
    else if (op==3){
        int arr1[x];
        square(arr,arr1,x);
        cout<<"the square of the elements in the array are:";
        for (int i=0;i<x;i++){
            cout<<arr1[i]<<" ";
        }
    }
    else{
        cout<<"enter the valid operation number !!";
    }
}
