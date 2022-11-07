#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    float A_,B_,C_,a,b,c,d,p,q,x,x1,x2;
    int n;
    cout <<"Wybierz funkcje: "<<endl;
    cout <<"[1] -- y=ax+b: "<<endl;
    cout <<"[2] -- Ax+By+C=0: "<<endl;
    cout <<"[3] -- Ax^2 + Bx + C"<<endl;
    cout <<"[4] -- y= a(x-p)2+q"<<endl;
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

                case 3:
                    system("cls");
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
                    else if(d<0)
                    {
                            cout<<"Brak rozwiazan";
                    }
                    break;


                case 4:
                    cout <<"Podaj a, p, q funkcji kwadratowej: "<<endl;
                    cout << "a lub q musi byc ujemne, oraz a musi byc rozne od zera"<<endl;
                    cin >> a >> p >> q;

                    if(a == 0)
                    {
                        cout <<"a musi roz od 0";
                        return 1;
                    }
                    else
                    {
                        if((q < 0) && (a < 0))
                        {
                            cout <<"a i q sa ujemne";
                            return 1;
                        }
                        else if( (q < 0) || (a < 0))
                        {
                            x1 = p + (sqrt(-q/a));
                            x2 = p - (sqrt(-q/a));
                            cout <<"Wynik to: x1 = "<<x1<<" x2 = "<<x2;
                        }
                        else
                        {
                            cout << "a lub q musi byc mniejsze od 0";
                            return 1;
                        }
                    }
                break;

                default:
                    cout<<"Nie ma takiej opcji w menu";
                    return 1;
                    break;
    }


    return 0;
}
