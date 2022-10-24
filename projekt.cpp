#include <iostream>
using namespace std;

int main()
{
    int a,b,x;
    cout <<"Podaj a i b funkcji liniowej: ";
    cin >> a >> b;
    if(a != 0)
    {
        x = (-b)/a;
        cout <<"Miejsce zerowe podanej funkcji to: "<<x;
    }
    else{
        cout<<"a musi byc rozne od 0";
        return 1;
    }


    return 0;
}
