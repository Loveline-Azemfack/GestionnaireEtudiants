===== GESTIONNAIRE D'ETUDIANTS =====

Le gestionaire d'etudiant est un projet qui vise a:
1. Ajouter un étudiant
2. Afficher les étudiants
3. Rechercher un étudiant
4. Quitter

Ce projet est realise par 4 etudiants dont les matricules sont **25P896**, **25P917**, **25P916** et **25P928**

# Revue de la branche `feat/student-search`

## 1. Commit analysé

Le commit analysé est :

```text
c9f1c3a (origin/feat/student-search, feat/student-search)
feat(Recherche-etudiant: Etablissons le plan de recherche des etudiant a travers reherche .cpp
```

La branche concernée est :

```text
feat/student-search
```

Le commit concerne donc la fonctionnalité de **recherche d'un étudiant** à travers le fichier `Recherche.cpp`.

## 2. Ce que fait la branche

Le commit met en place le travail lié à la recherche d'un étudiant.

L'objectif est de permettre au programme de rechercher un étudiant à partir d'une information saisie par l'utilisateur et de déterminer si cette recherche correspond à un étudiant présent dans les données.

La branche correspond donc à une fonctionnalité précise du gestionnaire d'étudiants : **la recherche d'un étudiant**.

## 3. Les commits sont-ils lisibles ?

Le message du commit permet de comprendre qu'il concerne la recherche d'un étudiant.

Cependant, le message contient plusieurs problèmes d'écriture :

```text
feat(Recherche-etudiant: Etablissons le plan de recherche des etudiant a travers reherche .cpp
```

On remarque notamment :

* « etudiant » devrait être « étudiant » ;
* « reherche » est une faute de frappe ;
* « etudiant » devrait être au pluriel et correctement écrit ;
* le message est assez long et formulé comme une phrase ;
* la parenthèse ouverte après `feat` n'est pas clairement fermée.

Un message plus clair serait par exemple :

```text
feat(recherche): ajout de la recherche d'un étudiant
```

Ce message indique directement le type de modification et la fonctionnalité ajoutée.

## 4. Ce qui manque

La revue montre qu'il faudrait vérifier que la fonctionnalité est suffisamment testée.

Il faudrait notamment vérifier deux situations :

```text
Recherche trouvée
→ afficher que l'étudiant a été trouvé.

Recherche non trouvée
→ afficher que l'étudiant n'a pas été trouvé.
```

Il serait également utile de vérifier que la recherche fonctionne correctement avec les données réelles du gestionnaire d'étudiants.

## 5. Ce qui ne devrait pas y être

Dans le commit lui-même, il faut vérifier qu'il n'y a pas de fichiers temporaires, de fichiers de compilation ou de fichiers sans rapport avec la recherche.

La branche doit rester centrée sur la fonctionnalité :

```text
Recherche d'un étudiant
```

Les modifications concernant d'autres fonctionnalités devraient être placées dans d'autres commits.

## 6. Conclusion de la revue

La branche `feat/student-search` correspond bien à une fonctionnalité identifiable : la recherche d'un étudiant.

Le principal point à améliorer concerne **le message du commit**, qui contient des fautes et manque de précision.

Il faut également vérifier les tests de recherche, notamment le cas où l'étudiant est trouvé et celui où il ne l'est pas.

La branche peut donc être discutée par les quatre membres du groupe afin de déterminer les corrections à effectuer avant son intégration.
