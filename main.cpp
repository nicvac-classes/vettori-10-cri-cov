#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "quanti studenti partecipano all'esame?" << endl;
    cin >> n;
    string nomi[n];
    double voti[n];
    int crediti[n];
    int i;

    for (i = 0; i <= n - 1; i++) {
        cout << "come si chiama lo studente numero " << i + 1 << endl;
        cin >> nomi[i];
        cout << "che voto ha preso lo studente " << i + 1 << endl;
        cin >> voti[i];
        cout << "quanti crediti ha ottenuto lo studente " << i + 1 << endl;
        cin >> crediti[i];
    }
    for (i = 0; i <= n - 1; i++) {
        cout << "studente numero " << i + 1 << " " << nomi[i] << " il suo voto è " << voti[i] << "  il numero dei crediti ottenuti è " << crediti[i] << endl;
    }
    double somma;

    somma = 0;
    for (i = 0; i <= n - 1; i++) {
        somma = somma + voti[i];
    }
    double media;

    media = somma / n;
    cout << "la media dei voti ottenuta dagli studenti è " << media << endl;
    cout << "gli studenti con il voto maggiore alla media sono: ";
    for (i = 0; i <= n - 1; i++) {
        if (voti[i] > media) {
            cout << "" << nomi[i] << ", ";
        }
    }
    cout << "" << endl;
    int c;

    c = 6;
    cout << "gli studenti che hanno ottenuto un numero di crediti formativi maggiore o uguale a 6 sono: ";
    for (i = 0; i <= n - 1; i++) {
        if (crediti[i] >= c) {
            cout << "" << nomi[i] << ", ";
        }
    }
    cout << "" << endl;
    cout << "gli studenti con il voto maggiore alla media e con numero di crediti formativi maggiore o uguale a 6 sono: ";
    int s;

    s = 0;
    for (i = 0; i <= n - 1; i++) {
        if (voti[i] > media) {
            if (crediti[i] >= c) {
                cout << "" << nomi[i] << ", ";
                s = s + 1;
            }
        }
    }
    if (s > 0) {
        cout << "" << endl;
    } else {
        cout << "nessuno studente rispecchia queste caratteristiche" << endl;
    }
    return 0;
}

