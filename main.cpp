
#include <iostream>

using namespace std;

void menu()
{
    cout << "Wybierz operacje: " << endl;
    cout << " 1 - dodawanie," << endl;
    cout << " 2 - odejmowanie," << endl;
    cout << " 3 - mnozenie," << endl;
    cout << " 4 - dzielenie," << endl;
    cout << " 0 - wyjscie." << endl;
}

float dodawanie(float a, float b)
{
    return a+b;
}

float odejmowanie(float a, float b)
{
    return a-b;
}

float mnozenie(float a, float b)
{
    return a*b;
}

float dzielenie(float a, float b)
{
    return a/b;
}

int main()
{
    char c;
    float a, b;
    menu();
    do
    {
        cout << ">: ";
        cin >> c;
        if (c!='0')
        {
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj druga liczbe: ";
            cin >> b;
            if (c=='1')
            {
                cout << "Wynik: " << dodawanie(a,b) << endl;
            }
            if (c=='2')
            {
                cout << "Wynik: " << odejmowanie(a,b) << endl;
            }
            if (c=='3')
            {
                cout << "Wynik: " << mnozenie(a,b) << endl;
            }
            if (c=='4')
            {
                cout << "Wynik: " << dzielenie(a,b) << endl;
            }
        }
    }
    while(c!='0');
    return 0;
}
