#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects (Functor): Functions wrapped in classes so that they are available as a object.
    int arr[] = {5, 35, 99, 66, 1 ,7};
    // sort(arr, arr+5);  // This will sort first 5 elements. It won't touch 6th element even if it is the smallest.
    // sort(arr, arr+5, greater<int>());  // This will sort in descendi order. 6th element is still untouched.
    sort(arr, arr+6);   // This will sort the whole array.
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    
    return 0;
}