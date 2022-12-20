#include<iostream>

using namespace std;

void fibonacci(int n){
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    for (int i = 0; i < n; i++) 
    {
        cout<<arr[i]<<"\t";
    }
    
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    fibonacci(n);
    return 0;
}