#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int num, temp, sum=0, len=0;
    cout << "Enter Number: ";
    cin >> num;
    temp = num;
    
    while(num){
        len++;
        num /= 10;
    }
    num = temp;
    while(num){
        sum += pow(num%10, len);
        num /= 10;
    }

    if(sum == temp){
        cout << "Given number is a armstrong number.";
    }
    else{
        cout << "Given number is NOT a armstrong number.";
    }

    return 0;
}