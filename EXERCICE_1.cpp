#include <iostream>
using namespace std ;

class complex { 
public :
	 int choix,rel,img;
     complex(){}
     complex(int r,int i){ 
       rel=r;
       img=i;

       }
    complex operator+(complex a)//surcharge d'operateur pour la somme 
    {
        complex s;
        s.rel = rel + a.rel;
        s.img = img + a.img;
        return s;
    }
 complex operator-(complex a) //surcharge d'operateur pour la soustraction 
    {
        complex s;
        s.rel = rel - a.rel;
        s.img = img - a.img;
        return s;
    }
      complex operator*(complex a)//surcharge d'operateur pour la multiplication
    {
        complex p;
        p.rel = rel * a.rel - img * a.img;
        p.img = rel * a.img + img* a.rel;
        return p;
    }
    complex operator / (complex a){  //surcharge d'operateur pour la division
			
			complex d;
			d.img=rel/a.rel;
			d.rel=img/a.img;
			return d;
		}


};
int main(){
  int r1,r2,im1,im2,choix;
   cout << "entrer la partie imaginaire du premier complexe"<<endl;
        cin >> im1 ; 
        cout << "entrer la partie reele du premier complexe"<<endl;
        cin >> r1 ;
        cout << "complex 1: "  << r1<< "+ i* " << im1 << endl;
        cout << "entrer la partie imaginaire du deuxieme complexe"<<endl;
        cin >> im2 ;
        cout << "entrer la partie reele du deuxieme complexe"<<endl;
        cin >> r2 ;
        cout << "complex 2: "  << r2<< "+ i* " << im2 << endl;
complex c1(r1,im1);// creation d'une instance pour la classe complex
complex a(r2,im2);
complex c3 = c1 + a;  
complex c4 = c1 + a;
complex c5 = c1 + a;
complex c6 = c1 + a;
// menu des choix
        cout << "veuillez choisir une operation du menu suivant :"<<endl;
        string menu[4]; 
        menu[0] = "1. +" ;  
        menu[1] = "2. -";  
        menu[2] = "3. * ";   
        menu[3] = "4. / ";   
        for(int i(0); i<4; ++i)
        { cout << menu[i] << endl;}
        cin >> choix ;
       if (choix == 1 ){ 
           
           cout << "SOMME EST : " <<c3.rel<< "+ i* " << c3.img << endl; 
     }
       else if (choix == 2){ 
          
          cout << "SOUSTRACTION EST : " <<c4.rel<< "+ i* " <<c4.img<< endl;  
     }  
      else if (choix == 3)
        {   
            cout << "PRODUIT EST : " << c5.rel<< "+ i* " << c4.img << endl; 
        }
      else 
       { 
           cout << "LA DIVISION EST : " << c6.rel<< "+ i* " << c6.img<< endl;  
        }
    
	 
    return 0;
}

