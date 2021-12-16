#include <iostream>
#include<set>
using namespace std;

bool indice(set<int> s,int x){        //declaration fonction de type bool
   set<int>::iterator it=s.begin();    // declaration d'un itérateur
  bool b=false;                         //initialisation d'un variable par la valeure false
   for(it =s.begin(); it != s.end(); it++){  //parcour de la liste cherchant la valeur x
  if(*it==x)
    b=true;}

return b ;     //returner la valeur bolean
}



int main()
{
 int i ;
 int valeur;
    set<int> s;   // declaration de la list

   set<int>::iterator it=s.begin();
    for (i=1;i<=100;i++){  // boucle pour remplir la liste de 1 à 100

      s.insert(i);}    // insertion dans la list

  for(it =s.begin(); it != s.end(); it++){

    cout<<*it<<"-";}
   cout<<endl;
  cout<<"entrer la valeur chercher"<<endl;
  cin>>valeur;
  cout<<"element existe=1 || element n'existe pas =0"<<endl;

  cout<<"resultat est "<<indice(s,valeur);

    return 0;
}

