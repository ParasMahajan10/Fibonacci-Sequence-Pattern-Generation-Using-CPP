#include <iostream>
#include <math.h>

using namespace std;

int Previous = 0,Current = 1,res,Terms = 25, Rem,Modulo = 5; //we can change this integer for different pattern;

//Taking 5 for division gives us a star pattern!

int main()
{
    cout<<Previous<<" Remainder :"<<Rem<<endl;
    Rem = res % Modulo;
            cout<<"-----------"<<endl;

    cout<<Current<<" Remainder :"<<Rem<<endl;
    Rem = res % Modulo;
            cout<<"-----------"<<endl;

    res = Previous + Current;
    cout<<res<<" Remainder :"<<Rem<<endl;
    Rem = res % Modulo;
            cout<<"-----------"<<endl;

    for(int i = 0; i < Terms; i++)
        {
            Previous = Current;
            Current = res;
            res = Previous + Current;
            Rem = res % Modulo;
            cout<<res<<" Remainder :"<<Rem<<endl;
            cout<<"-----------"<<endl;
        }

    return 0;
}
