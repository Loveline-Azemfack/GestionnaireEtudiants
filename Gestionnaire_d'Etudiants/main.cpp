
#include <iostream>
#include <string>
#include <vector>

struct Etudiant {
    std::string nom;
    std::string prenom;
    int age;
};

int main() {

    std::vector<Etudiant> etudiants = {
        {"Nyondjeu", "Durel", 22},
        {"Azemfack", "Loveline", 18},
        {"Sadjifil", "Gabriel", 19},
        {"Kenmoe", "Noela", 19},
    
    };

    std::cout << "Liste des etudiants" << std::endl;
    std::cout << "===================" << std::endl;

    for (const Etudiant& etudiant : etudiants) {
        std::cout << "Nom    : " << etudiant.nom << std::endl;
        std::cout << "Prenom : " << etudiant.prenom << std::endl;
        std::cout << "Age    : " << etudiant.age << " ans" << std::endl;
        std::cout << "-------------------" << std::endl;
    }

    return 0;
}