#include <iostream>
#include <cstdlib>
using namespace std;
    //partiamo dal concetto che una reference è utile utilizzarla quando si parla di oggetti e dunque della oop(object oriented programming)
    class Punto{
        private:
        int x;
        public:
        Punto(int y):x(y){}
        int getPunto(){return x;}
        void setPunto(int t){x=t;}
    };
int main(){
    Punto punto(5);//creiamo un oggetto della classe Punto
    Punto &punto2=punto;//creiamo una reference a questo oggetto(stiamo creando una copia dell'oggetto ma tale copia se modificata modificherà anche l'oggetto di partenza)
    punto.setPunto(10);//settiamo il valore del punto a 10
    cout<<"il valore del punto e:"<<punto.getPunto()<<endl;
    cout<<"il valore del punto2 e:"<<punto2.getPunto()<<endl;//notiamo che anche se non abbiamo richiamato il metodo set del 2 punto esso ha già un valore inizializzato
    punto2.setPunto(20);//modifico il valore del secondo punto
    cout<<"il valore del punto e:"<<punto.getPunto()<<endl;//vediamo come il valore del punto e non di punto2 sarà modificato
    Punto punto3(6);//vediamo come una reference ha bisono di essere inizializzato SUBITO e non può essere posta a null;
    // Punto &punto4;//una dichiarazione del genere non ha senso e risulterò essere un errore;
    Punto punto4=punto2;//inizializziamo un nuovo punto con i valori di punto2 
    cout<<"il valore del punto4 e:"<<punto4.getPunto()<<endl;//vediamo come risulterà essere uguale
    punto2=punto3;// a differenza dei puntatori (in questo caso se fossero stati puntatori cercavamo di fare puntare il puntatore ad un altro elemento) le reference non posso fare riferimento ad un altro oggetto diverso da quello di partenza
    //ovviamente le reference possono essere utilizzate anche normalmente
    int a=10;
    const int &refe=a;
    cout<<refe<<endl;
    // refe=5; //questa riga di codice darà errore in quanto abbiamo definito la reference di sola lettura ossia che fa riferimento ad un valore costante
    a=6;
    cout<<refe<<endl;
    return 0;
}