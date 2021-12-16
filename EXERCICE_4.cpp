
#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std ;
int main(){
	list<string>mylist; //declaration d'une list de string
mylist.push_back("hajar,ali,21ans"); //replissage de la liste
mylist.push_back("anas ,mahjo,31ans");
mylist.sort(); //tri de la liste selon le nom et le prenom 
list<string>::iterator it  ; //affichage de la liste trier 
for(it=mylist.begin();it!=mylist.end();it++){
	cout<<*it<<endl;
}
return 0 ;
}
