// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex c1;
    Complex c2(5);
    Complex c3(2, 3);
    Complex c4(c3);
    Complex c5(0, 0);

    cout << "c1 = ";
    c1.afficher();

    cout << "c2 = ";
    c2.afficher();

    cout << "c3 = ";
    c3.afficher();

    cout << "c4 = ";
    c4.afficher();

    cout << "\nAddition : ";
    (c3 + c2).afficher();

    cout << "Soustraction : ";
    (c3 - c2).afficher();

    cout << "Multiplication : ";
    (c3 * c2).afficher();

    cout << "Division : ";
    (c3 / c2).afficher();

    cout << "Multiplication par un reel : ";
    (c3 * 2).afficher();

    cout << "Division par un reel : ";
    (c3 / 2).afficher();

    cout << boolalpha;

    cout << "\nc3 == c4 : " << (c3 == c4) << endl;
    cout << "c2 != c3 : " << (c2 != c3) << endl;
    cout << "!c1 : " << !c1 << endl;
    cout << "c2 && c3 : " << (c2 && c3) << endl;
    cout << "c1 || c3 : " << (c1 || c3) << endl;

    return 0;
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.





