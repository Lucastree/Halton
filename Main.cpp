#include<iostream>
#include<cstdio> 
using namespace std;
double halton (int index, int base)
{
    double frac = 1.0 / (double)base;
    double result = 0.0;
    while ( index > 0 ) 
    {
        result += frac * ( index % base );
        index = (int)( (double)index / (double)base );
        frac /= (double)base;
    }
    return result;
}
int main()
{
    int base = 2; 
    cout<<"| halton seq |"<<endl;
    cout<<"|--------|"<<endl;
    for (int i = 1; i <= 20; ++i ) 
    {
        cout<<i<<"   "<< halton( i, base )<<endl;
    }
    return 0;
}
