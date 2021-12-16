#include <iostream>
#include <string>
using namespace std;
//Fonction pour le jour
string get_jour(string j){
    if(j=="01")
        return "1er";
    else
        return j+ " eme";
}
//Fonction pour changer la mois du chifre au mots 
string get_mois( string m)
{
    if(m=="01")return "Janvier";
    else if (m=="02")return "Fevrier";
    else if (m=="03")return "Mars";
    else if (m=="04")return "Avril";
    else if (m=="05")return "Mai";
    else if (m=="06")return "Juin";
    else if (m=="07")return "Juillet";
    else if (m=="08")return "Aout";
    else if(m=="09")return "Septembre";
    else if (m=="10")return "Octobre";
    else if (m=="11")return "Novembre";
    else {return "Decembre";}
}
//Fonction pour l'annee
string get_annee(string a){

        return a;
}
//Fonction pour l'heure
string get_heure(string h){

        return h +"h";
}
//Fonction pour  minute
string get_minute(string n){

        return n;
}

int main()
{
    string str;
    cout<<"enter la date est l'heure :";
    cin>>str;
    string  day=str.substr(0,2);// substr pour couper la chaine 
    string  mois=str.substr(2,2);
    string annee=str.substr(4,4);
    string  heur=str.substr(8,2);
    string  minu=str.substr(10,2);
    cout<< "la date est: " <<get_jour(day);
    cout<< " "<<get_mois(mois);
    cout<<" "<<get_annee(annee)<<"  a  ";
    cout<<get_heure(heur); //appel dla methode get_heure
    cout<<get_minute(minu);//appel de la methode get_minute

}
