// controle 21 c++.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;



// là où on éclare les fonctions

class Lieu {
private:
    std::list<int>lieux; // Tentative de liste


public:
    string name;
    string description;
    int difficulte;
    string destination;
    bool campement = false;
    Lieu(std::list<int>lst) {
        lieux = lst;
    }



    int deplacement(difficulte1, difficulte2) {
        cout << "Vous pouvez vous rendre au lieu " << destination;
        cout << "Voulez vous y aller ?";
        //cin >> choice; Tentative de choix de destination
        //if (choice == "oui") {
          //  cout << "Vous arrivez dans un grand champ de ble.";
        return difficulte1 + difficulte2;
    }


    void getDescription() {
        cout << description;
    }

    void installerCampement() { // Ex 6
        if (campement == false) {
            difficulte /= 2;
        }
        else {
            cout << "Il y a un campement dans ce lieu.";
        }

        checkCampement(lieu) { // Ex 7
            if (lieu.campement == true) {
                return true
            }
        }

    }


};



//Lieu::Lieu(string name, string description, int difficulte, int list) : name(""), description(""), difficulte(""); list("") {}


    seReposer(lieu) {
        if (checkCampement(lieu) == true) { // Ex 7
            endurance += 50;
            if (endurance > 100) {
                endurance = 100;
            }
        }
    }

    deplacement(difficulte1, difficulte2) {
        
        endurance -= deplacement(difficulte1, difficulte2);
    }



int main()
{


    std::list<int>lieux{ "Champ","Foret","Mer" }; // Tentative de liste
  
    int endurance = 100; // Ex 5
    

    


    Lieu champ;
    champ.name = "Champ";
    champ.description = "Un grand champ de ble";
    champ.difficulte = 5;
    champ.destination = "Foret";
    champ.campement = false;


    Lieu foret;
    foret.name = "Foret";
    foret.description = "Grande foret";
    foret.difficulte = 3;
    foret.destination = "Mer";
    foret.campement = false;


    Lieu mer;
    foret.name = "Mer";
    foret.description = "Grande etendue d'eau salee";
    foret.difficulte = 1;
    foret.destination = "Champ";
    foret.campement = false;


    string choice;

    cout << "Face à vous, deux chemins s'offrent à vous. Lequel empruntez-vous ? Champ ou Foret ? ";

    cin >> choice;

    if (choice == "champ") {
        cout << "Vous arrivez dans un grand champ de ble.";
    }
    if (choice == "foret") {
        cout << "Vous arrivez a la lisiere d'une épaisse foret.";
    }






}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage


