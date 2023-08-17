#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINEz
#include <cmath>
using namespace std;

int main(){

    double a,b,s,m,n;

    cout<<fixed;
    cout<<setprecision(2);

    while (true)
    {
         cin>>a>>b>>s>>m>>n;
         if(a+b+s+m+n < 0.5){
        return 0;
    }
    double angle = atan(n*b/(m*a))*180/ M_PI;
    double v = sqrt(n*n*b*b+m*m*a*a)/s;
    cout<<angle<<" "<<v<<endl;

    }
    
   

}
