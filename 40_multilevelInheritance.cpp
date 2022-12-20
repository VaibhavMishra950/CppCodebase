#include<iostream>
using namespace std;

class Student{
    protected:
        int rollNumber;
    public:
        void setRollNumber(int);  
        void getRollNumber();  
};

void Student :: setRollNumber(int r){
    rollNumber = r;
}

void Student :: getRollNumber(){
    cout<<"The roll number is: "<<rollNumber<<endl;
}

class Exam : public Student{
    protected:
        float physics;
        float maths;
    public:
        void setMarks(int m1, int m2);
        void getMarks();
};

void Exam :: setMarks(int m1, int m2){
    maths = m1;
    physics = m2;
}

void Exam :: getMarks(){
    cout<<"Your marks in Maths are "<<maths<<endl;
    cout<<"Your marks in Physics are "<<physics<<endl;
}

class Result : public Exam{
    public:
        void displayResult(){
            getRollNumber();    // From first level
            getMarks();         // From second level
            cout<<"Your result is: "<<(maths + physics) / 2<<"%"<<endl;
        }
};
/*  NOTES
    If we are inheriting B from A and C from B: [ A-->B-->C ]
        1. A is the base class for B and C is the base class for C.
        2. 'A-->B-->C' is called inheritance path.
*/
int main(){
    Result stu1;
    stu1.setRollNumber(1224);
    stu1.setMarks(94, 90);
    stu1.displayResult();
    
    return 0;
}