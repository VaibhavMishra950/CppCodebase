#include<iostream>
#include<math.h>
using namespace std;

class Point{
    int x, y;
    public:
        Point(int a, int b){  // The parameters can also have default values like this: Point(int a, int b=15){}
            x = a;
            y = b;
        }

        friend int distanceBwPoints(Point, Point);

        void displayPoint(){
            cout<<"Your point is ("<<x<<", "<<y<<")"<<endl;
        }
};

int distanceBwPoints(Point a, Point b){
    int res = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
    // Distance between two points is: 
    return res;
}

int main(){

    Point p(1, 0);
    p.displayPoint();
    
    Point q(70, 0);
    q.displayPoint();

    int dis = distanceBwPoints(p, q);
    cout<<"The distance between points p and q is "<<dis<<" units. "<<endl;
    
    return 0;
}