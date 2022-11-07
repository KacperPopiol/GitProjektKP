#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    int A_,B_,C_,a,b,x,n,m;
    cout <<"Wybierz funkcje: "<<endl;
    cout <<"[1] - Funkcja liniowa "<<endl;
    cout <<"[2] - Funkcja kwadratowa "<<endl;
    cin >> m;

    switch(m)
    {
        case 1:
            system("cls");
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
                    else if(a == 0)
                    {
                        cout<<"Fukcja jest stala, brak miejsc zerowych";
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
                    else if(a == 0)
                    {
                        cout<<"Fukcja jest stala, brak miejsc zerowych";
                    }
                    break;

              default:
                cout<<"Nie ma takiej opcji w menu";
                return 1;
                break;
            }
            break;
            case 2:
                system("cls");
                float a,b,c,d,x,x1,x2;
                cout<<"Podaj wspolczynnik kierunkowy prostej a "<<endl;
                cin>>a;
                cout<<"Podaj wspolczynnik b "<<endl;
                cin>>b;
                cout<<"Podaj wspolczynnik c "<<endl;
                cin>>c;
                d=(b*b)-(4*a*c);
                if(d>0)
                {
                    x1=(-b-sqrt(d))/(2*a);
                    x2=(-b+sqrt(d))/(2*a);
                    cout<<"Wynik to : x1 = "<<x1<<", x2 = "<<x2;
                }
                else if(d==0)
                {
                    x=-b/(2*a);
                    cout<<"Wynik to : x = "<<x;
                }
                else if(d<0)  // Jeœli delta mniejsza od "0".
                {
                        cout<<"Brak rozwiazan";
                    }
                          break;

                        default:
                            cout<<"Nie ma takiej opcji w menu";
                            break;

                }

    return 0;
}
