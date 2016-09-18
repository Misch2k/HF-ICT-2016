#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double dzyl1(0), dzyl2(0), hzyl1(0), hzyl2(0), vzyl1(0), vzyl2(0), dzyl(0);
    const double pi = 3.1415;

    cout << "Mit diesem Programm können sie das Durschnittliche Volumen zweier Zylinder berechnen.\n Geben sie den Durchmesser des ersten Zylinder in 'mm' ein, danach die Höhe in 'mm'\n";
    cin >> dzyl1;
    cin >> hzyl1;
    vzyl1 = (dzyl1/2)*(dzyl1/2)*pi*hzyl1;
    cout << "Geben sie den Durchmesser des Zweiten Zylinder in 'mm' ein, danach die Höhe in 'mm'\n";
    cin >> dzyl2;
    cin >> hzyl2;
    vzyl2 = (dzyl2/2)*(dzyl2/2)*pi*hzyl2;
    dzyl = (vzyl1+vzyl2)/2;
    cout << "Der Durchschnitt beider Zylinder ist: " << dzyl << "mm2\n";


return 0;
}
