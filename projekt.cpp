#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int A_,B_,C_,a,b,x,n;
    cout <<"Wybierz postac funkcji: "<<endl;
    cout <<"1. y=ax+b: "<<endl;
    cout <<"2. Ax+By+C=0: "<<endl;
    cin >> n;

    switch(n)
    {
      case 1:
            system("cls");
                cout <<"Podaj a i b funkcji liniowej: ";
            cin >> a >> b;
            if(a != 0)
            {
                x = (-b)/a;
                cout <<"Miejsce zerowe podanej funkcji to: "<<x;
            }
            else
            {
                cout<<"A musi byc rozne od 0";
            }
        break;
      case 2:
           system("cls");
            cout <<"Podaj A, B, C funkcji liniowej: ";
            cin >> A_ >> B_ >> C_;
            a = (-A_)/B_;
            b = (-C_)/B_;

            if(a != 0)
            {
                x = (-b)/a;
                cout <<"Miejsce zerowe podanej funkcji to: "<<x;
            }
            else
            {
                cout<<"A musi byc rozne od 0";
            }

        break;
      default:
        cout << "Nie ma takiej opcji";
        return 1;
    }





    return 0;
}
