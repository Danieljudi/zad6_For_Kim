#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

int main()
{
    for (int i=15; i>=0; i--)
       {
           Sleep (1000);    // program zasypia na sekundê po ka¿dej wykonanej petli
           system("cls");   // program czysci cmd (nie pokazuje sie od 15 do 0 tyko bierzaca liczba)
          cout<<i<<endl;
       }
cout << "jebut" << endl;

    return 0;


}

