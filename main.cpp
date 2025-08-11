#include <iostream>
#include<string>
using namespace std;

int main()
{
    string verbe;
    cout << "Entrez le un verbe a l'infinitif :"; cin >> verbe;
    int taille= verbe.size();
        if (verbe.substr(taille - 2)== "er" && verbe !="aller"){
            cout << "ce verbe appartient au 1e groupe."<< endl;
        }
        else if
            (verbe.substr(taille - 2) == "ir") {
            cout << " ce verbe appartient au 2e groupe."<< endl;
        }
        else{
            cout << "ce verbe appartient au 3e groupe."<< endl;
        }
    return 0;
}
