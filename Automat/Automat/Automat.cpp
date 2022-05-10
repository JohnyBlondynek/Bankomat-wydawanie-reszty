#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int Wyb = 0;
    bool Program=true;
    int Reszta, P, i;
    int nominaly[]{ 500,200,100,50,10,5,2,1 };
    while (Program)
    {
        cout << "Jestem Bankomat :/"<<endl;
        cout << "1:Rozmień"<<endl;
        cout << "2:Autorzy"<<endl;
        cout << "3:wyjdz"<<endl;
        cin >> Wyb;
        if (Wyb == 1) {
            cout << "Podaj reszte do wyplacenia: ";
            cin >> Reszta;
            i = 0;
            while (Reszta > 0)
            {
                if (Reszta >= nominaly[i])
                {
                    P = Reszta / nominaly[i];
                    Reszta = Reszta - (nominaly[i] * P);
                    cout << nominaly[i] << " x " << P << endl;
                }
                i++;
            }
                Sleep(2000);
                cout << "Wpisz dowolną liczbę aby przejśc od menu" << endl;

                cin >> Wyb;
                system("cls");
        }
        else if (Wyb == 2) {
            system("cls");
            cout << "Maxwell Broll" << endl;
            cout << "Luka Stojanović" << endl;
            Sleep(2000);
            system("cls");
        }
        else if (Wyb == 3) {
            Program = false;
        }
        else {
            system("cls");
            cout << "Błąd" << endl;
            Sleep(2000);
        }
    }
}