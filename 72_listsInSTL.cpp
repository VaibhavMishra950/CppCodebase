#include<iostream>
#include<list>
using namespace std;

// template <class T>
void display(list<int> l){
    list<int> :: iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;    
}

int main(){
    list <int> list1;   // List of 0 elements
    list1.push_back(1);
    list1.push_back(7);
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(3);
    display(list1);

    // Removing elements from the list.
    // list1.pop_back(); // Removes one element from last.
    // list1.pop_front();  // Removes one element from start.
    // list1.remove(7); // Removes all occourences of specified element.

    // Sorting the list:
    // list1.sort();

    // Reversing the list: 
    // list1.reverse();
    
    display(list1);


    list<int> list2(4);  // List of 4 elements with no values.
    list<int> :: iterator iter = list2.begin();
    for (int i = 0; i < list2.size(); i++)
    {
        *iter = i+1;
        iter++;
    }
    display(list2);

    list1.merge(list2);
    cout<<"List 1 after merging: "<<endl;
    display(list1);

    

    
    return 0;
}