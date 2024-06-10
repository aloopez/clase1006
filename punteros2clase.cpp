#include <iostream>
using namespace std;

int main ()
{
    int edad, *dir_edad;

    cout << "Ingrese la edad del individuo: ";
    cin >> edad;

    dir_edad=&edad;

    if (*dir_edad>=18)
    {
        cout << "La persona es mayor de edad: "<<*dir_edad<<"\n";
    }
    else cout << "La persona es menor de edad\n";
         cout << "Mem de edad: "<<dir_edad;
    
    return 0;
}