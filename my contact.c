#include <stdio.h>
#include <string.h>

struct contact {
    char nom[20];
    long numero;
    char email[100];
};
typedef struct contact mycontact;

int main() {
    mycontact t[100];
    int index = 0, n, i, y;
    char mot[32];
    mycontact m;
    int choix, choix2, choix3;
    int q;

    do {
        printf("1. Ajoute\n");
        printf("2. Affichage\n");
        printf("3. Modificateur\n");
        printf("4. Suppression avec msg de confirmation\n");
        printf("5. Recherche\n");
        printf("6. Statistique\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                do {
                    printf("1. Ajoute simple\n");
                    printf("2. Ajout multiple\n");
                    printf("3. Retour\n");
                    printf("Choisissez une option: ");
                    scanf("%d", &choix2);

                    switch (choix2) {
                        case 1:
                            printf("Donnez le num: ");
                            scanf("%ld", &m.numero);
                            printf("Donnez nom: ");
                            scanf("%s", m.nom);
                            printf("Donnez l'email: ");
                            scanf("%s", m.email);
                            t[index] = m;
                            index++;
                            break;

                        case 2:
                            printf("Combien de nombres voulez-vous saisir: ");
                            scanf("%d", &n);
                            for (i = 0; i < n; i++) {
                                printf("Donnez le num: ");
                                scanf("%ld", &m.numero);
                                printf("Donnez nom: ");
                                scanf("%s", m.nom);
                                printf("Donnez l'email: ");
                                scanf("%s", m.email);
                                t[index] = m;
                                index++;
                            }
                            break;

                        case 3:
                            q = 0;
                            break;

                        default:
                            printf("\nChoix invalide\n");
                    }
                } while (q == 1);
                break;

            case 2:
                q = 1;
                do {
                    printf("1. Affichage simple\n");
                    printf("2. Affichage par ordre croissant\n");
                    printf("3. Affichage par ordre décroissant\n");
                    printf("4. Retour\n");
                    printf("Choisissez une option: ");
                    scanf("%d", &choix2);

                    switch (choix2) {
                        case 1:
                            printf("Entrez le nombre que vous voulez afficher: ");
                            scanf("%d", &y);
                            if (y >= 0 && y < index) {
                                printf("Nom: \"%s\"   Numéro: \"%ld\"   Email: \"%s\"\n", t[y].nom, t[y].numero, t[y].email);
                            } else {
                                printf("Index invalide\n");
                            }
                            break;

                        case 2: {

                            for (i = 0; i < index - 1; i++) {
                                for (int j = 0 ; j < index - i - 1 ; j++) {
                                    if (strcmp(t[i].nom, t[j].nom) > 0) {  // if t[i] > t[j]
                                        mycontact temp = t[i];
                                        t[i] = t[j];
                                        t[j] = temp;
                                    }
                                }
                            }
                            for (i = 0; i < index; i++) {
                                printf("Nom: \"%s\"   Numéro: \"%ld\"   Email: \"%s\"\n", t[i].nom, t[i].numero, t[i].email);
                            }
                            break;
                        }

                        case 3: {

                            for (i = 0; i < index - 1; i++) {
                                for (int j = 0 ; j < index - i - 1 ; j++) {
                                    if (strcmp(t[i].nom, t[j].nom) < 0) {
                                        mycontact temp = t[i];
                                        t[i] = t[j];
                                        t[j] = temp;
                                    }
                                }
                            }
                            for (i = 0; i < index; i++) {
                                printf("Nom: \"%s\"   Numéro: \"%ld\"   Email: \"%s\"\n", t[i].nom, t[i].numero, t[i].email);
                            }
                            break;
                        }

                        case 4:
                            q = 0;
                            break;

                        default:
                            printf("Choix invalide\n");
                    }
                } while (q == 1);
                break;

            case 3:
                printf("Donnez-moi le nom du contact à modifier: ");
                scanf("%s", mot);
                for (i = 0; i < index; i++) {
                    if (strcmp(t[i].nom, mot) == 0) {   // nom = mot
                        printf("Nouveau numéro: ");
                        scanf("%ld", &t[i].numero);
                        printf("Nouvel email: ");
                        scanf("%s", t[i].email);
                        break;
                    }
                }
                break;

            case 4: // Suppression
                printf("Veuillez entrer le nom de contact à supprimer: ");
                scanf("%s", mot);
                for (i = 0; i < index; i++) {
                    if (strcmp(t[i].nom, mot) == 0) {
                        for ( i = 0  ; i < index - 1; i++) {
                            t[i] = t[i + 1];
                        }
                        index--;
                        printf("Contact supprimé.\n");
                        break;
                    }
                }
                break;

            case 5:
                printf("1. Cherche par numéro\n");
                printf("2. Cherche par nom\n");
                printf("3. Retour\n");
                printf("Choisissez une option: ");
                scanf("%d", &choix3);

                switch (choix3) {
                    case 1: {
                        long numeroRecherche;
                        printf("Entrez le numéro à rechercher: ");
                        scanf("%ld", &numeroRecherche);
                        for (i = 0; i < index; i++) {
                            if (t[i].numero == numeroRecherche) {
                                printf("Nom: \"%s\"   Numéro: \"%ld\"   Email: \"%s\"\n", t[i].nom, t[i].numero, t[i].email);
                                break;
                            }
                        }
                        break;
                    }

                    case 2: {
                        printf("Entrez le nom à rechercher: ");
                        scanf("%s", mot);
                        for (i = 0; i < index; i++) {
                            if (strcmp(t[i].nom, mot) == 0) {
                                printf("Nom: \"%s\"   Numéro: \"%ld\"   Email: \"%s\"\n", t[i].nom, t[i].numero, t[i].email);
                                break;
                            }
                        }
                        break;
                    }

                    case 3:
                        break;

                    default:
                        printf("Choix invalide\n");
                }
                break;

            case 6:

                printf("Fonctionnalité non implémentée.\n");
                break;

            default:
                printf("Choix invalide\n");
        }
    } while (choix != 0);

    return 0;
}
