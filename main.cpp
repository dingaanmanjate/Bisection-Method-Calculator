#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float equation(float x) {
    float result = pow(x, 3) + 2*x - 2; // Example equation: f(x) = x^3 + 2x - 2
    return result;
}
float bisection(float &a, float &b, float p) {
    if (equation(a)*equation(b)>0){
        cout<< a << ":" << b <<" are out of range";
    }
    else if (equation(p) == 0) {
        cout << p << " is the root";
    }
    else if (equation(p)<0) {
        a = p; 
    }
    else {
        b = p;
    }
    return (a + b)/2;
}
float iteration(float &a, float &b){
    float p, pnext;
    do {
        p = (a + b)/2;
        pnext = bisection(a, b, p);
    }while (abs(p-pnext)/abs(min(a,b))>pow(10,-4));
    return p;
}


int main() {
    float a, b;
    cout << "Enter the initial values to consider delimated by 'ENTER'"<<endl;
    cin>>a>>b;

    cout << iteration(a, b);
}
