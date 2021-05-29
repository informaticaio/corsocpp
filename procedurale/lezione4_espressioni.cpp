/*
Autore: Informatica.io
Corso: Corso c++ di Gabriele Cavallo
Licenza: 
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Testo esercizio: 
Date tre variabili con 3 voti scelti (numeri floating point), scrivere un programma
che ne calcoli la media aritmetica e la scriva in output.
Inoltre assegnare ad ognuno di essi un peso (0 < p < 1) tramite una costante,
calcolare la media ponderata e scriverla in output applicando una formattazione semplice:
      Primo voto: X
      Secondo voto: Y
      Terzo voto: Z
      =======================================
      Media aritmetica: M
      =======================================
      Pesi rispettivi: P1, P2, P3
      Media ponderata: MP
*/

#include <iostream>

using namespace std;

int main()
{
    // 3 Variabili con i vari voti da salvare
    // Sintassi di dichiarazione --> <tipo> <identificatore> = <valoreIniziale>
    float primoVoto = 5.25;
    float secondoVoto = 9.75;
    float terzoVoto = 6;

    // 3 Variabili con i pesi dei voti
    float peso1 = 0.5;
    float peso2 = 0.7;
    float peso3 = 1;

    // Calcolo la media aritmetica
    float mediaAritmetica = (primoVoto + secondoVoto + terzoVoto) / 3.0;

    // Calcolo la media ponderata
    float mediaPonderata = ((primoVoto * peso1) + (secondoVoto * peso2) + (terzoVoto * peso3)) / (peso1 + peso2 + peso3);

    // Scrivo le informazioni in output
    cout << "Primo voto: " << primoVoto << endl;
    cout << "Secondo voto: " << secondoVoto << endl;
    cout << "Terzo voto: " << terzoVoto << endl;
    cout << "=======================================" << endl;
    cout << "Media aritmetica: " << mediaAritmetica << endl;
    cout << "=======================================" << endl;
    cout << "Pesi rispettivi: " << peso1 << ", " << peso2 << ", " << peso3 << endl;
    cout << "Media ponderata: " << mediaPonderata << endl;
    return 0;
}
