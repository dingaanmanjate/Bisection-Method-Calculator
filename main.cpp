#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float equation(float x) {
    //float result = pow(x, 3) + 2*x - 2; // Example equation: f(x) = x^3 + 2x - 2
    float result = cos(x) - x;
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
    float precision_error = 0.5*pow(10,-6);
    do {
        p = (a + b)/2;
        pnext = bisection(a, b, p);
    }while (abs(p-pnext)/abs(min(a,b))>precision_error);
    return p;
}
void initiate(float a, float b){
    if (equation(a)>equation(b)){
        cout << iteration(b, a);
    }
    else {
        cout << iteration(a, b);
    }
}

int main() {
    float a, b;
    cout << "Enter the initial values to consider delimated by 'ENTER'"<<endl;
    cin>>a>>b;

    initiate(a, b);
}
