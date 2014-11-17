#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "header/lexical.h"
#include "header/declaration.h"


>>>>>>> master
void MintoUpper (char * expression)
{   //Fonction qui passe les lettres minuscules en majuscules.
    int i;
    for (i = 0; expression[i] != '\0'; i++)
    {
        if((expression[i] > 96) && (expression[i] < 123))
        {
            expression[i] -= 32;
        }
    }
}

objet Analyse (char * expression)
{
    objet JetonActuel = (objet) malloc(sizeof(ana));
<<<<<<< HEAD
    objet premier = JetonActuel; // raice de la liste cha�n�e.
    int taille = strlen(expression);
        int i;

	objet fils = NULL;
    for ( i=0;i<=taille;i++)
    {//parcours la chaine entr�e par l'utilisateur.
        switch (expression[i])
        {//test sur chaque caract�re de la cha�ne.
            case '+' :
            {// si le caract�re est + alors lexem est associ� � OPERATEUR et la valeur du jeton est PLUS
=======
    objet premier = JetonActuel; // racine de la liste cha�n�e.

    int taille = strlen(expression);
    int i;

	objet fils = NULL;

    //parcours la chaine entr�e par l'utilisateur.
    for (i = 0;i <= taille;i++)
    {
        //test sur chaque caract�re de la cha�ne.
        switch (expression[i])
        {
            
            // si le caract�re est + alors lexem est associ� � OPERATEUR et la valeur du jeton est PLUS
            case '+' :
            {
>>>>>>> master
                JetonActuel->jeton.lexem =OPERATEUR;
                JetonActuel->jeton.valeur.operateur = PLUS;
                fils = (objet) malloc(sizeof(ana));
                JetonActuel->suiv=fils;
                JetonActuel=fils;
                break;
            }
<<<<<<< HEAD
            case' ' :
//si c'est un espace passe au prochain caract�re directement.
                break;
            case '*' :
            {// m�me chose qu'avec le + mais ici avec *


=======

            // Si c'est un espace passe au prochain caract�re directement.
            case' ' :
            {
                break;
            }
            
            // M�me chose qu'avec le + mais ici avec *
            case '*' :
            {
>>>>>>> master
                JetonActuel->jeton.lexem =OPERATEUR;
                JetonActuel->jeton.valeur.operateur = FOIS;
                fils = (objet) malloc(sizeof(ana));
                JetonActuel->suiv=fils;
                JetonActuel=fils;
                    break;
            }

            case '-' :
            {
                JetonActuel->jeton.lexem =OPERATEUR;
                JetonActuel->jeton.valeur.operateur = MOINS;
                fils = (objet) malloc(sizeof(ana));
                JetonActuel->suiv=fils;
                JetonActuel=fils;
                    break;
            }

            case '/' :
            {
                JetonActuel->jeton.lexem =OPERATEUR;
                JetonActuel->jeton.valeur.operateur = DIV;
                fils = (objet) malloc(sizeof(ana));
                JetonActuel->suiv=fils;
                JetonActuel=fils;
                    break;
            }

            case '%' :
            {
                JetonActuel->jeton.lexem =OPERATEUR;
                JetonActuel->jeton.valeur.operateur = PUIS;
                fils = (objet) malloc(sizeof(ana));
                JetonActuel->suiv=fils;
                JetonActuel=fils;
                    break;
            }

<<<<<<< HEAD
            case ')' :
            {
			//Parenth�se fermante , pas de valeur sp�ciale pour le jeton.
=======
			//Parenth�se fermante , pas de valeur sp�ciale pour le jeton.
            case ')' :
            {
>>>>>>> master
                JetonActuel->jeton.lexem =PAR_FERM;
                fils = (objet) malloc(sizeof(ana));
                JetonActuel->suiv=fils;
                JetonActuel=fils;
                    break;
            }

<<<<<<< HEAD
                case '(' :
=======
            case '(' :
>>>>>>> master
            {
                JetonActuel->jeton.lexem =PAR_OUV;
                fils = (objet) malloc(sizeof(ana));
                JetonActuel->suiv=fils;
                JetonActuel=fils;
                    break;
            }
<<<<<<< HEAD
                case '\0' :
            {//Caract�re qui signifie la fin de la cha�ne.
		  //valeur fin pour le jeton et NULL pour son fils.
=======

            /* Caract�re qui signifie la fin de la cha�ne.
		    valeur fin pour le jeton et NULL pour son fils.*/
            case '\0' :
            {
>>>>>>> master
                JetonActuel->jeton.lexem =FIN;
                JetonActuel->suiv = NULL;
                //JetonActuel->jeton.valeur = NULL;
                    break;
            }
<<<<<<< HEAD
             case '\n' :
            {//M�me cas que pour le caract�re \0
=======

            // M�me cas que pour le caract�re \0
            case '\n' :
            {
>>>>>>> master
                JetonActuel->jeton.lexem =FIN;
                JetonActuel->suiv = NULL;
                //JetonActuel->jeton.valeur = NULL;
                    break;
            }

<<<<<<< HEAD
                case 'X' :
            {//Cas de la variable , aucune valeur pour le jeton.
=======
            // Cas de la variable , aucune valeur pour le jeton.
            case 'X' :
            {
>>>>>>> master
                JetonActuel->jeton.lexem =VARIABLE;
                //JetonActuel->jeton.valeur = NULL;
                fils = (objet) malloc(sizeof(ana));
                JetonActuel->suiv=fils;
                JetonActuel=fils;
                    break;
            }

<<<<<<< HEAD
            case 'S' :
            {//Si le caract�re est un S
                if(expression[i+1] == 'I' && expression[i+2] == 'N')
                {// Teste si les deux suivant sont IN pour la fonction SIN , lexem associ� � fonction et valeur � sin.
=======
            // Si le caract�re est un S
            case 'S' :
            {
                // Teste si les deux suivant sont IN pour la fonction SIN , lexem associ� � fonction et valeur � sin.
                if(expression[i+1] == 'I' && expression[i+2] == 'N')
                {
>>>>>>> master
                    JetonActuel->jeton.lexem =FONCTION;
                    JetonActuel->jeton.valeur.operateur = SIN;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
<<<<<<< HEAD
                    i +=2;//on passe directement au caract�re N , pour que la boucle passe au prochain caract�re avec l'auto incr�mentation.
                }
                else if (expression[i+1] == 'Q' && expression[i+2] == 'R' && expression[i+3] == 'T')
                {//Deuxi�me possibilit� la fonction SQRT m�me travail.
=======
                    i +=2; //on passe directement au caract�re N , pour que la boucle passe au prochain caract�re avec l'auto incr�mentation.
                }
                //Deuxi�me possibilit� la fonction SQRT m�me travail.
                else if (expression[i+1] == 'Q' && expression[i+2] == 'R' && expression[i+3] == 'T')
                {
>>>>>>> master
                    JetonActuel->jeton.lexem =FONCTION;
                    JetonActuel->jeton.valeur.operateur = SQRT;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
<<<<<<< HEAD
                    i +=3;//De m�me le compteur est plac� directement sur la derni�re lettre.
                }
                else
                {//Si la suite des caract�res ne ressemblent pas � IN ou QRT alors c'est une erreur. lexem est associ� � erreur la valeur de l'erreur est FONC pour fonction.
=======
                    i +=3; //De m�me le compteur est plac� directement sur la derni�re lettre.
                }
                /*Si la suite des caract�res ne ressemblent pas � IN ou QRT alors c'est une erreur.
                lexem est associ� � erreur la valeur de l'erreur est FONC pour fonction. */
                else
                {
>>>>>>> master
                    JetonActuel->jeton.lexem =ERREUR;
                    JetonActuel->jeton.valeur.erreur = FONC;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
<<<<<<< HEAD
                    i=taille;// On sort directement de la boucle.
                    JetonActuel->jeton.lexem =FIN;//Le fils de l'erreur est la fin de cha�ne.
=======
                    i=taille; // On sort directement de la boucle.
                    JetonActuel->jeton.lexem =FIN; // Le fils de l'erreur est la fin de cha�ne.
>>>>>>> master
                    JetonActuel->suiv = NULL;
                }

                break;
            }
            case 'C' :
            {
<<<<<<< HEAD
                if(expression[i+1] == 'O' && expression[i+2] == 'S')
                {//m�me chose que pour SIN mais ici avec cos.
=======
                //m�me chose que pour SIN mais ici avec cos.
                if(expression[i+1] == 'O' && expression[i+2] == 'S')
                {
>>>>>>> master
                    JetonActuel->jeton.lexem =FONCTION;
                    JetonActuel->jeton.valeur.operateur = COS;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i +=2;
                }
<<<<<<< HEAD
                else
                {//m�me chose si il y a une erreur , fils = fin et sorti de la boucle. qui sera le m�me sc�nario pour chaque fonction.
=======
                //m�me chose si il y a une erreur , fils = fin et sorti de la boucle. qui sera le m�me sc�nario pour chaque fonction.
                else
                {
>>>>>>> master
                    JetonActuel->jeton.lexem =ERREUR;
                    JetonActuel->jeton.valeur.erreur = FONC;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i=taille;
                    JetonActuel->jeton.lexem =FIN;
                    JetonActuel->suiv = NULL;
                }
                break;
            }
            case 'T' :
            {
                if(expression[i+1] == 'A' && expression[i+2] == 'N')
                {
                    JetonActuel->jeton.lexem =FONCTION;
                    JetonActuel->jeton.valeur.operateur = TAN;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i +=2;
                }
                else
                {
                    JetonActuel->jeton.lexem =ERREUR;
                    JetonActuel->jeton.valeur.erreur = FONC;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i=taille;
                    JetonActuel->jeton.lexem =FIN;
                    JetonActuel->suiv = NULL;
                }
                break;
            }
            case 'E' :
            {
                if(expression[i+1] == 'X' && expression[i+2] == 'P')
                {
                    JetonActuel->jeton.lexem =FONCTION;
                    JetonActuel->jeton.valeur.operateur = EXP;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i +=2;
                }
                else
                {
                    JetonActuel->jeton.lexem =ERREUR;
                    JetonActuel->jeton.valeur.erreur = FONC;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i=taille;
                    JetonActuel->jeton.lexem =FIN;
                    JetonActuel->suiv = NULL;
                }
                break;
            }
            case 'L' :
            {
                if(expression[i+1] == 'O' && expression[i+2] == 'G')
                {
                    JetonActuel->jeton.lexem =FONCTION;
                    JetonActuel->jeton.valeur.operateur = LOG;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i +=2;
                }
                else
                {
                    JetonActuel->jeton.lexem =ERREUR;
                    JetonActuel->jeton.valeur.erreur = FONC;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i=taille;
                    JetonActuel->jeton.lexem =FIN;
                    JetonActuel->suiv = NULL;
                }
                break;
            }
            case 'A' :
            {
                if(expression[i+1] == 'B' && expression[i+2] == 'S')
                {
                    JetonActuel->jeton.lexem =FONCTION;
                    JetonActuel->jeton.valeur.operateur = ABS;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i +=2;
                }
                else
                {
                    JetonActuel->jeton.lexem =ERREUR;
                    JetonActuel->jeton.valeur.erreur = FONC;
                    fils = (objet) malloc(sizeof(ana));
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i=taille;
                    JetonActuel->jeton.lexem =FIN;
                    JetonActuel->suiv = NULL;
                }
                break;
            }
<<<<<<< HEAD
            default :
            {//Si le caract�re n'est pas le premier caract�re d'une fonction ou un op�rateur ou une paranth�se ou alors une variable.
                if(expression[i]>47 && expression[i] < 58)
                {//Si le caract�re est chiffre.
                    char tab[20];//Tableau qui recevra le nombre.
                    int compteur=0;
                    int point = 0;
                    while(expression[i]>47 && expression[i] < 58 || expression[i] == 46)
                    {//Parcours la cha�ne jusqu'a trouv� le dernier chiffre, prise en compte du point pour les d�cimaux.
                        tab[compteur]=expression[i];
                        compteur++;
                        i++;
                        if(expression[i] ==46)//Compte le nombre de point dans la cha�ne.
                            point++;
                    }
                    i--;
                    tab[compteur+1]='\0';//place le caract�re de fin de cha�ne sur le nouveau tableau.
                    if(point ==1)//Si le nombre de point est de 1
                    {
                       JetonActuel->jeton.valeur.reel = atof(&tab);//Convertir la cha�ne en float.
                        if(JetonActuel->jeton.valeur.reel <0)//Si le nombre est n�gative.
                                JetonActuel->jeton.lexem =VAL_NEG;
                        else								//Si le chiffre est positive.
                                JetonActuel->jeton.lexem =REEL;
                        fils = (objet) malloc(sizeof(ana));
                        JetonActuel->suiv=fils;
                        JetonActuel=fils;
                        if(i==taille)//Si le dernier chiffre du nombre est le dernier caract�re de la cha�ne. Fin de la liste cha�n�e.
                            JetonActuel->jeton.lexem = FIN;
                            JetonActuel->suiv = NULL;
                    }
                    else if (point ==0)//Si le chiffre est un entier on place un point pour avoir un flottant.
=======
            //Si le caract�re n'est pas le premier caract�re d'une fonction ou un op�rateur ou une paranth�se ou alors une variable.
            default :
            {
                //Si le caract�re est chiffre.
                if(expression[i]>47 && expression[i] < 58)
                {
                    char tab[20];//Tableau qui recevra le nombre.
                    int compteur=0;
                    int point = 0;

                    // Parcours la cha�ne jusqu'a trouv� le dernier chiffre, prise en compte du point pour les d�cimaux.
                    while(expression[i] > 47 && expression[i] < 58 || expression[i] == 46)
                    {
                        tab[compteur]=expression[i];
                        compteur++;
                        i++;
                        if(expression[i] ==46) // Compte le nombre de point dans la cha�ne.
                            point++;
                    }
                    i--;
                    tab[compteur+1]='\0'; // Place le caract�re de fin de cha�ne sur le nouveau tableau.
                    if(point == 1) // Si le nombre de point est de 1
                    {
                        JetonActuel->jeton.valeur.reel = atof(tab); // Convertir la cha�ne en float.
                        if(JetonActuel->jeton.valeur.reel < 0) { // Si le nombre est n�gative.
                                JetonActuel->jeton.lexem = VAL_NEG;
                        }
                        //Si le chiffre est positif.
                        else {
                            JetonActuel->jeton.lexem =REEL;
                            fils = (objet) malloc(sizeof(ana));
                            JetonActuel->suiv=fils;
                            JetonActuel=fils;
                        }
                        //Si le dernier chiffre du nombre est le dernier caract�re de la cha�ne. Fin de la liste cha�n�e.
                        if(i==taille) {
                            JetonActuel->jeton.lexem = FIN;
                            JetonActuel->suiv = NULL;
                        }
                    }
                    else if (point == 0) // Si le chiffre est un entier on place un point pour avoir un flottant.
>>>>>>> master
                    {
                        tab[compteur]= '.';
                        tab[compteur +1 ]= '0';
                        tab[compteur +2 ]= '\0';
<<<<<<< HEAD
                        JetonActuel->jeton.valeur.reel = atof(&tab);
                        if(JetonActuel->jeton.valeur.reel <0)
                                JetonActuel->jeton.lexem =VAL_NEG;
                        else
                                JetonActuel->jeton.lexem =REEL;
                        fils = (objet) malloc(sizeof(ana));
                        JetonActuel->suiv=fils;
                        JetonActuel=fils;
                        if(i==taille)
                            JetonActuel->jeton.lexem = FIN;
                            JetonActuel->suiv = NULL;
=======
                        JetonActuel->jeton.valeur.reel = atof(tab);
                        if(JetonActuel->jeton.valeur.reel < 0) {
                                JetonActuel->jeton.lexem = VAL_NEG;
                        }

                        else {
                            JetonActuel->jeton.lexem = REEL;
                            fils = (objet) malloc(sizeof(ana));
                            JetonActuel->suiv = fils;
                            JetonActuel = fils;
                        }

                        if(i==taille) {
                            JetonActuel->jeton.lexem = FIN;
                            JetonActuel->suiv = NULL;
                        }
>>>>>>> master

                    }
                    else // Si le nombre a plus de 1 point alors on passe dans une erreur.
                    {
                        JetonActuel->jeton.lexem =ERREUR;
                        JetonActuel->jeton.valeur.erreur = DOUBLE_POINTS;
                        fils = (objet) malloc(sizeof(ana));
                        JetonActuel->suiv=fils;
                        JetonActuel=fils;
                        JetonActuel->jeton.lexem =FIN;
                        JetonActuel->suiv = NULL;
                    }

                }
<<<<<<< HEAD
                else//Si le caract�re n'est pas pris en compte par aucun des test alors c'est une erreur.
=======
                //Si le caract�re n'est pas pris en compte par aucun des test alors c'est une erreur.
                else
>>>>>>> master
                {
                    JetonActuel->jeton.lexem =ERREUR;
                    JetonActuel->jeton.valeur.erreur = CARACTERE_INCONNU;
                    fils = (objet) malloc(sizeof(ana));
<<<<<<< HEAD
                    JetonActuel->suiv=fils;
                    JetonActuel=fils;
                    i=taille;
                    JetonActuel->jeton.lexem =FIN;
=======
                    JetonActuel->suiv = fils;
                    JetonActuel = fils;
                    i=taille;
                    JetonActuel->jeton.lexem = FIN;
>>>>>>> master
                    JetonActuel->suiv = NULL;
                }

                break;
            }
        }
    }
<<<<<<< HEAD
    return (premier);//Retourne la racine de la cha�ne.
}


=======
    return (premier); //Retourne la racine de la cha�ne.
}

int main() {

    char chaine[100];
    objet monana = NULL;

    printf("Veuillez entrer une fonction : ");
    scanf("%s", chaine);


    monana = Analyse(chaine);

    return 0;
}
>>>>>>> master
