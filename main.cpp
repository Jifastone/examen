#include <iostream>
#include<string>
using namespace std;

int main()
{
    string camelcase;
    cout << "Entrez une chaine en camelcase :"; cin >> camelcase;
    cout << "Phrase convertie :";
    for ( size_t i=0; i< camelcase.length(); ++i){

            if (isupper(camelcase[i]&& i !=0)){
    cout<< " ";
    }
    cout<< camelcase[i];
    }
    cout<< endl;
    return 0;
}
