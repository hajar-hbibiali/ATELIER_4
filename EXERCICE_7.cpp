
#include <iostream>
#include <list>
#include <iterator>
#include <string>
using namespace std ;
class Animal ; class Chien ;class Race;
class Animal { // definition de la class Animal
protected : // declaration des attributs protected de la classe animal
string nom ;
int age;
string genre ;
public:
Animal (){};
Animal (string n,int a,string g){ 
	nom=n; //initialisation des attributs
	age=a;
	genre =g;
}

void setNom_Animal(string nom){

	this->nom=nom;
}
string  getNom_Animal(){

	return this->nom;
}
void setAge(int age ){

	this->age=age;
}
int  getAge( ){

	 return this->age;
}
void setGenre(string genre){

	this->genre=genre;
}
string  getGenre(){

	return this->genre;
}

};
// Composition association entre la classe  Chat et Repas
// d?claration de la signature
class Chat ;
class Repas ;
class Chat : public Animal {  

    private://declaration de variable privee
    string type;
    list<Repas> listRepas;/*creation d'une la liste repas dans la classe Chat
    ce qui traduit la relation One to Many entre la classe Chat et repas*/
    public :
    Chat (string n,int a,string g,string t): Animal (n,a,g){ //constructeur de la classe Chat
        type = t;//initialisation de variable 
    }
    void setType(string type){ //creation d'un setter pour l'attribut type
        this->type = type;
    }
    string getType(){//creation d'un getter pour l'attribut type
        return this->type;
    }
    void setListRepas(list<Repas> listRp){  // creation d'un setter pour la list Repas 
        this->listRepas = listRp ;
    }
    list<Repas> getListRepas(){ // creation d'un setter pour la list Repas 
        return this->listRepas ;
    }
    void sauter(){ // la methode  sauter pour la class Chat
        
    }
};



/*-----------------------------------------------------------------------------------------------------------------------------------------------*/
// d?claration de la signature
// composition association 
class Elements ;
class Repas ;


class Repas {
private: // declaration des variables privees
  string nom ;
  int heure;
  string description;
  Chat chat ;
  list<Elements > *listelements ; // creation d'une liste pour Elements dans la classe Repas ce qui traduit l'association de composition 
public : 
Repas(){
};
  Repas(string nom, int heure, string description) {  //constructeur de la classe Repas 
  // initialisation des variables par le connstructeur
  this->nom = nom; 
  this->heure = heure;
  this->description = description;
  listelements= new list<Elements>();//obtenir une instance dans l'instance  Repas car c'est une relation de composition
}
void setNom_Repas(string nom){ //setter de l'attribut nom
this->nom = nom ; }
string getNom_Repas(){   //getter de l'attribut nom
return this->nom ; }

void setHeure(int heure ){//setter de l'attribut heure 
this->heure= heure ; }
int  getHeure(){    //getter de l'attribut heure
return this->heure; }

void setDescription(string description){ //setter de l'attribut description
this->description = description ; }
string getDescription(){    //getter de l'attribut description
return this->description ; }
void setListElements(list<Elements> *listelements){ //setter de la liste Elements 
this->listelements= listelements ; }
list<Elements>* getListElements(){ return this->listelements; }  //getter de la liste Elements

void setChat(Chat c){ 
        this->chat = c ;
    }
Chat getChat(){
        return this->chat ;
    }
~Repas (){ // ddestruction  de la  liste en meme temps que  Repas  et elements  "composition" 
delete this->listelements ; cout << "call list of Repas" << endl ;
}
};

/*---------------------------------------------------------------------------------------------------------------------------------*/

class Elements { // definition de la classe Elements 
	 private: 
	  string nom;
	  string type;
	   Repas repas ; // creation de l'instance du classe Repas dans la classe Element
public :
Elements(string n ,string t){
    nom =n;
    type = t;
}
//creation des setter et getter pour les attribut de la classe Elements
 void setNom_Elements(string nom){
this->nom = nom ; }
string getNom_Elements(){
return this->nom ; }
void setType_Elements(string type){
this->type = type; }
string getType_Elements(){
return this->type ; }
//creation des setter et getter pour l'instance  repas 
void setRepas( Repas repas ){
this->repas = repas; }
Repas getRepas(){
return this->repas; }
~Elements(){ 
    cout << "call list of Elements " << endl ;
} };
/*--------------------------------------------------------------------------------------------------------------*/
// d?claration de la signature   
// associaton Generalisation ou heritage


class Race{
	protected :// declaration de l'attribut de la classe Race 
	string specificite ;
	
	public:
    Race (){};
	Race (string s){
		specificite=s;

	}
	void setSpecificite(string specificite){

	this->specificite=specificite;
    }
     string  getSpecificite(){

	return this->specificite;
    }
	 bool isracehybride (){
         return true ;
	
	}	

};
// association class
class Chien;
class Entraineur;
class Compitition;

class Chien :public Animal,public Race{ //Chien herite le Animal et Race 
private:
string taille;
list<Entraineur> listEntraineur; // creation d'une liste pour Entraineur dans la classe  Chien
public :
	Chien (){
	};
Chien (string n,int a, string g, string s, string t) :  public Animal ( n, a, g),public Race( s){
    this->taille = taille ;
}
//creation des setter et getter pour les attributs de la classe Chien 
void setTaille_Chien(string taille){
    this->taille = taille ;
}
string getTaille_Chien(){
    return this->taille;
}
//creation des setter et getter pour la liste Entraineur Ent
void getListEntraineur(list<Entraineur> listEnt){
    this->listEntraineur = listEnt;
}
list<Entraineur> getListEntraineur(){
    return this->listEntraineur;
}
bool ischass3(){ // definition de al methode ischass3
    return true;
}
};

class Entraineur {
private:
string nom;
string description;
list<Chien> listChien;
public :
Entraineur(String nom, String description){// constructeur de la classe Entraineur
    this->nom = nom;
    this->description = description;
}
//creation des setter et getter pour les attributs de la classe Entraineur
void setNom_Entraineur(string nom){
this->nom = nom;
}
string getNom_Entraineur(){
return this->nom;
}
void setdescription(string description){
this->description = description;
}
string getdescription(){
return this->description ;
}
//creation des setter et getter pour la listeChien  
void setListChien(list<Chien> listChien){
this->listChien = listChien;
}
list<Chien> getListChien(){
return this->listChien ;
}
};

class Compitition{
private :
string date;
string nom;
Entraineur e;
Chien c;
public :
int ordre;
Compitition(String date, String nom, int ordre){
    this->nom = nom;
    this->date = date;
    this->ordre = ordre;
}
void setNom_Compitition(string nom){
this->nom = nom;
}
string getNom_Compitition(){
    return this->nom ;
}
void setDate(string date){
    this->date = date;
}
string getDate(){
    return this->date ;
}
void setOrdre(string ordre){
    this->ordre = ordre;
}
string getOrdre(){
    return this->ordre ;
}
//creation des setter et getter pour Chien 
void setChien(Chien c){
this->c = c ;
}
Chien getChien(){
return this->c ;
}
//creation des setters et getters pour Entaineur
void setEntraineur(Entraineur e){
this->e = e;
}
Entraineur getEntraineur(){
return this->e ;
}
};

int main()
{
Repas repas;
repas.setHeure(24);
cout<<"l'heure du repas est "<<repas.getHeure()<<endl;

Chat chat;
chat.setAge(7);
cout<<"l'age du chat est:"<<chat.getAge()<<endl;

Elements elements;
elements.setType("chiken");
cout<<"le type d'element est " <<elements.getType()<<endl;


Entraineur e;
e.setNom_Entraineur("vivo");

cout<<"le nom de l'entraineur est : "<<e.getNom_Entraineur()<<endl;

Chien chien;
chien.setTaille_Chien("30 cm");
cout<<"la taille du chien est "<<chien.getTaille_Chien()<<endl;





    return 0;
}

