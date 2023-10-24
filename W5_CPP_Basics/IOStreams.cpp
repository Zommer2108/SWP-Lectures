//
// Created by roman on 24.10.2023.
//

#include <iostream>
#include "IOStreams.h"
using namespace std;

int main(void) {
    cout << "Ihr Name bitte: \n";
    string s;
    cin >> s;
    cout << "Aha, Sie heissen ";
    cout << s << endl;


    int x = 1;
    float y = 2.0;

    printf("Int %d Float %f", x, y);
    cout << "Int " << x << " Float " << y;
    // In beiden Faellen erhalten wir die Ausgabe: Int 1 Float 2.0

    printf("Int %d Float %f", y, x);
    // Warning! y passt nicht auf %d !!!

    cout << "Int " << y << " Float " << x;
    // Ausgabe liefert: Int 2.0 Float 1
    // Dies ist nur ein logischer Fehler.

    cout << "Eingabe von Integer: ";
    cin >> x;
    // cin erwartet Referenzparameter
    cout << "Sie haben eingegeben: " << x;

    printf("Eingabe von Float: ");
    scanf("%f", &y);
    // scanf erwartet die Referenz explizit repraesentiert als Zeiger
    printf("Sie haben eingegeben: %f",y);

    cout << "\n Das war's" << endl;
}
