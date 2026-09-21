#include <iostream>
#include <string>
using namespace std;

int main()
{
    string recherches[] = {"chat", "chien", "oiseau", "poisson"};
    string recherche;

    cout << "Entrez votre recherche : ";
    cin >> recherche;

    bool trouve = false;

    for (string element : recherches)
    {
        if (element == recherche)
        {
            trouve = true;
            break;
        }
    }

    if (trouve)
    {
        cout << "La recherche est trouvee." << endl;
    }
    else
    {
        cout << "La recherche n'est pas trouvee." << endl;
    }

    return 0;
}