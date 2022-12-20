#include<iostream>
#include<vector>
using namespace std;


template <class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)  // size() method returns size of the vector.
    {
        // cout<<v[i]<<"  "; 
        cout<<v.at(i)<<"  ";  // Will return element at position 'i' in 'v'
    }
    cout<<endl;
    
}

int main(){
    /*
    Ways to create a vector:

    vector<int> v1;     // Zero length integer vector.
    vector<char> v2(4);     // 4-element character vector.
    vector<char> v3(v2);     // 4-element character vector from v2;
    vector<int> v4(6, 10);     // 6-element integer vector of 10s;

    */

    // vector<float> vec2;
    // int size;
    // float elem;
    // cout<<"Enter the size of the vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the element: ";
    //     cin>>elem;
    //     vec2.push_back(elem);
    // }
    // display(vec2);
    

    vector<int> vec1;
    int elem, size;
    cout<<"Enter the size of the vector: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element: ";
        cin>>elem;
        vec1.push_back(elem);   // This will insert 'elem' into 'vec1' at the end;
    }
    // vec2.pop_back();    // This will remove one element from the end of vec2.
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+2, 56656);     // Insert a element at specific position.
    vec1.insert(iter+2, 1, 56656);     // Insert 4 copies of 56656 at iter+2 position.
    display(vec1);
    


    
    return 0;
}