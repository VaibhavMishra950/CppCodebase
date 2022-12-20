#include<iostream>
#include<cmath>
using namespace std;

/*
Create 2 classes:
    1. Simple Calculator.
    2. Scientific Calculator.
    Then create another class as Hybrid Calculator and implement both above classes in it.
*/

class SimpleCalculator{
    private:
        float num1, num2;
        float resAdd, resSub, resMul, resDiv;
    public:
        void setSimpleValues(float a, float b){
            num1 = a;
            num2 = b;
            resAdd = a + b;
            resSub = a - b;
            resMul = a * b;
            resDiv = a / b;
        }

        void showSimpleResults(){
            cout<<"The value of "<<num1<<" + "<<num2<<" is "<<resAdd<<endl;
            cout<<"The value of "<<num1<<" - "<<num2<<" is "<<resSub<<endl;
            cout<<"The value of "<<num1<<" * "<<num2<<" is "<<resMul<<endl;
            cout<<"The value of "<<num1<<" / "<<num2<<" is "<<resDiv<<endl;
        }
};

class ScientficCalculator{
    private:
        float num1;
        float resSqrt, resSin, resCos, resTan;
    public:
        void setScientificValues(float a){
            num1 = a;
            resSqrt = sqrt(num1);
            resSin = sin(num1);
            resCos = cos(num1);
            resTan = tan(num1);
        }

        void showScientificResults(){
            cout<<"The value of square root of "<<num1<<" is "<<resSqrt<<endl;
            cout<<"The value of sin("<<num1<<") is "<<resSin<<endl;
            cout<<"The value of cos("<<num1<<") is "<<resCos<<endl;
            cout<<"The value of tan("<<num1<<") is "<<resTan<<endl;
        }
};

class HybridCalculator : protected SimpleCalculator, protected ScientficCalculator{
    public:
        void setHybridValues(float a, float b, float c){
            setSimpleValues(a, b);
            setScientificValues(c);
        }
        void showHybridResults(){
            showSimpleResults();
            showScientificResults();
        }
};

int main(){
    float a, b, c;
    float x, y, z;
    cout<<"Enter values of a and b: "<<endl;
    cin>>a>>b; 
    SimpleCalculator s1;
    s1.setSimpleValues(a, b);
    s1.showSimpleResults();

    cout<<"\n-------------------------------------------\n";

    cout<<"Enter value of c: ";
    cin>>c;
    ScientficCalculator s2;
    s2.setScientificValues(c);
    s2.showScientificResults();
    
    cout<<"\n-------------------------------------------\n";

    cout<<"Enter the values for a, b and c: "<<endl;
    cin>>x>>y>>z;
    HybridCalculator h1;
    h1.setHybridValues(x, y, z);
    h1.showHybridResults();

    return 0;
}