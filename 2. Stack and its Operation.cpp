#include <iostream>
using namespace std;
int main(){
cout<<"Enter the length of the stack: \n";
int l;
cin>>l;
int arr[l];
int top=-1;
cout<<"\n The Stack operations are : \n 1.PUSH \n 2.POP \n 3.DISPLAY 4.EXIT";
int op;
cout<<"\n enter the operation number: ";
cin>>op;
while(op!=4){
    if (op==1){
        if (top>=l-1){
            cout<<"\n Stack overflow condition.";
        }
        else{
        cout<<"\n enter the element you want to push: ";
        int x;
        cin>>x;
        top=top+1;
        arr[top]=x;
        cout<<"\n the element has been pushed.";
        }
    }
    else if (op==2){
        if (top<0){
            cout<<"\n Stack underflow";
        }
        else{
        top=top-1;
        cout<<"\n The pop operation has been succesful.";
        }
    }
    else if (op=3){
        for (int i=top;i>=0;i--){
            cout<<"   "<<arr[i];
            cout<<"\n ----- \n";
        }
    }
    cout<<"\n The Stack operations are : \n 1.PUSH \n 2.POP \n 3.DISPLAY 4.EXIT";
    cout<<"\n Enter the operation number: ";
    cin>>op;
}
cout<<"\n the stack operations are terminated successfully.";
return 0;
}
