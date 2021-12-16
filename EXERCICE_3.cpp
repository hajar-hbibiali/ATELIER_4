#include <iostream>
#include <list>
using namespace std;
  
  void showlist(list <int> l) ////fonction d'impression des éléments de la  liste
  { list <int> :: iterator it; 
  for(it = l.begin(); it != l.end(); ++it)  
      cout << '\t' << *it;
  cout << '\n';
   }

int main() {
	int a;
	list <int> mylist;//delclaration de a liste des entiers
cout << "entrer les valeurs de la liste:";
for (int i = 0; i < 10; i++) { // boucle pour le remplissage de la liste

     cin>>a;
  mylist.push_back(a);//push_back pour ajouter des elements a la liste
   
  }
   cout << "la liste avant tri est  : ";  
   
   showlist(mylist);//  affichage de la liste avant le tri
  
   cout << "la liste apres tri est  : "; 
    mylist.sort(); //;le trie de la liste mylist
    showlist(mylist); //  affichage de la liste apres tri
return 0;
}
