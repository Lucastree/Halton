#include<bits/stdc++.h>
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
int main(int ac, char** av)
{
    int base = 2; 
    printf("| halton seq |\n");
    printf("|---: | :--------: |\n");
    for (int index = 1; index <= 20; ++index ) 
    {
        printf("| %3d | %10.8f |\n", index, halton( index, base ) );
    }
    return 0;
}
