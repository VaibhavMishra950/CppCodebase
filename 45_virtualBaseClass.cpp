#include<iostream>
using namespace std;

// Virtual Base Class: 
//    If Class A is the base class for classes B and C and classes B and C are base classes 
//    for class D, and class A have a public variable a. Then D will inherit two 'a' each from 
//    class B and C. This will cause ambiguity.
//    To prevent this we inherit B and C from A as virtual base class. This will make sure that
//    D is having only one instance of every variable.

// Here we will implement this as: 
// A: Student
// B: Test
// C: Sports
// D: Result

// Student --> Test [Done]
// Student --> Sports [Done]
// Test, Sports --> Result [Done]

class Student{      // Virtual base Class.
    protected:
        int rollNumber;
    public:
        void setNumber(int a){
            rollNumber = a;
        }
        void printNumber(){
            cout<<"your roll number is: "<<rollNumber<<endl;
        }
};

class Test : virtual public Student{ // If we remove 'virtual' from here, this will cause ambiguity.
    protected:
        float maths, physics;
    public:
        void setMarks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void printMarks(){
            cout<<"Your Rseult is here: "<<endl
                <<"Maths: "<<maths<<endl
                <<"Physics: "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void setScore(float scr){
            score = scr;
        }

        void printScore(){
            cout<<"Your Physical Education score is: "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(){
            total = maths + physics + score;
            printNumber();
            printMarks();
            printScore();
            cout<<"Your total marks are: "<<total<<endl;
        }
};

int main(){
    Result r1;
    r1.setNumber(1224);
    r1.setMarks(85, 96);
    r1.setScore(9);
    r1.display();

    return 0;
}