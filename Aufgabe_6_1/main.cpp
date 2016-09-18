#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double f = 6.673000000 * pow(10 , 0-11);
    const double F = f;
    cout<<F<<endl;
    int m1(0),m2(0), r(0);
    double fg(0);

    //Formel = fg = F*(m1*m2)/pow(r,2);

    cout<<"Ich berechne Ihnen die Anziehungskraft zweier Objekte. \n Dazu Brauche ich drei Angaben: Masse1, Masse2, Abstand"<<endl;
    cout<<"Geben sie die Masse1 ein: "<<endl;
    cin>>m1;
    cout<<"Gebn sie die Masse2 ein: "<<endl;
    cin>>m2;
    cout<<"Geben sie den Abstand ein: "<<endl;
    cin>>r;

    cout <<"Masse1 = "<<m1<<endl;
    cout <<"Masse2 = "<<m2<<endl;
    cout <<"Abstand = "<<r<<endl;

    fg = F*((m1*m2)/pow(r,2));

    cout<<"Die Gravitationskraft ist: "<< fg << endl;

    return 0;
}
