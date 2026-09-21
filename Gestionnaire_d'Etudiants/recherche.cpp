#include <iostream>
#include <string>

struct Etudiant
{
    std::string nom;
    std::string prenom;
    int age;
};

void rechercherEtudiant(Etudiant etudiants[], int nombreEtudiants)
{
    std::string nomRecherche;

    std::cout << "Entrez le nom de l'etudiant a rechercher : ";
    std::cin >> nomRecherche;

    for (int i = 0; i < nombreEtudiants; i++)
    {
        if (etudiants[i].nom == nomRecherche)
        {
            std::cout << "Etudiant trouve : "
                 << etudiants[i].prenom << " "
                 << etudiants[i].nom
                 << ", age : " << etudiants[i].age
                 << std::endl;
            return;
        }
    }

    std::cout << "Etudiant non trouve." << std::endl;
}

int main()
{
    Etudiant etudiants[3] =
    {
        {"Nana", "Paul", 20},
        {"Mballa", "Jean", 21},
        {"Fokou", "Marie", 19}
    };

    rechercherEtudiant(etudiants, 3);

    return 0;
}