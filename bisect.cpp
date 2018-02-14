#include <iostream>
#include <cmath>
using namespace std;

double fun(double x){
    return pow(x,3)-pow(x,2)-x-10;
}

int main()
{
    double a,b,c;
    cout<<"Masukkan interval : ";
    cin>>a>>b;
    while (fun(c)!=0){
        c = (a+b)/2;
        cout<<fun(a)<<"    "<<fun(b)<<"    "<<fun(c)<<endl;
        if (fun(c) < 0){
            a = c;
        }
        else if (fun(c) > 0){
            b = c;
        }
        else {
            cout<<"Nilai x yaitu = "<<c<<endl;
        }
    }
    return 0;
}
