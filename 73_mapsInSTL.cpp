#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is a associative array (key-value pairs.)

int main(){

    map<string, int> marks;
    marks["Vaibhav"] = 55;
    marks["Yogesh"] = 95;
    marks["Yash"] = 85;
    marks.insert({{"Ajeeb Insaan" , 65}, {"Aur Ajeeb Insaan", 88}});  // Insert function.
    map<string, int> :: iterator iter = marks.begin();
    for ( iter; iter != marks.end(); iter++)
    {
        // (*iter).first returns the key and (*iter).second returns the value.
        cout<<(*iter).first<<": "<<(*iter).second<<endl;
    }
    
    cout<<"The size is: "<<marks.size()<<endl;  // Return the number of elements in map.
    cout<<"The max size is: "<<marks.max_size()<<endl;  // Return the max number of elements possible in map
    cout<<"The empty's return value is: "<<marks.empty()<<endl;  // Returns 1 if list map is empty else returns 0.

    
    return 0;
}