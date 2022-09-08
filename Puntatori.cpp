#include <iostream>
#define n 4
using namespace std;
int main(){
    /* int a=10;
    cout<<"indirizzo di a= "<<&a<<endl;
    cout<<"il valore di a= "<<a<<endl;
    int* ptr=&a;
    int* c=&a+1;
    cout<<"indirizzo di c= "<<&c<<endl;
    cout<<"il valore di c= "<<*c<<endl;
    cout<<"indirizzo di ptr= "<<&ptr<<endl;
    cout<<"l'indirizzo dell'elemento che ptr punta= "<<ptr<<endl;
    cout<<"indirizzo di ptr= "<<*ptr<<endl;
    int** ptr1=&ptr;
    cout<<"indirizzo di ptr= "<<&ptr1<<endl;
    cout<<"l'indirizzo dell'elemento che ptr1 punta= "<<ptr1<<endl;
    cout<<"indirizzo di ptr= "<<**ptr1<<endl; */
    int a=7;
    int *ptr=&a;
    *ptr=9;
    cout<<a<<endl;
    cout<<&ptr<<endl;
    int b=5;
    const int* ptr2=&b;//messo prima indica un puntatore a valore costante (valore)
    // *ptr2=10;    //da errore
    ptr=&b;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;
    int c=15;
    int*const ptr3=&c;
    *ptr3=10;
    cout<<c<<endl;
    // ptr3=&b; //messo dopo l'asterisco indica che è un puntatore costante al valore(puntatore)
    int d=8;
    const int*const ptr4=&d;//un puntatore costante ad un valore costante
    // *ptr4=40;    errore valore costante
    // ptr4=&a;     errore puntatore costante
    int *ptr5; //cosa molto utile dei puntatori non c'è bisogno di inizializzarli subito appena creati
    int *ptr6=nullptr; //un puntatore a differenza della reference può assumere valori nulli
    if(ptr6){ //controllo esistenza di un puntatore;
        cout<<"puntatore esiste"<<endl;
    }
    else 
     cout<<"puntatore non esiste"<<endl;

    ptr6=&a;
    if(ptr6){ //controllo esistenza di un puntatore;
        cout<<"puntatore esiste"<<endl;
    }
    else 
     cout<<"puntatore non esiste"<<endl;

    int *ptr7; //puntatore normale o array
    int **ptr8; //puntatore a puntatore o matrice
    int ***ptr9;//puntatore a puntatore a puntatore o puntatore a matrice o array tridimensionale 
    int A[n]; //array di n elementi
    int B[]={1,2,3,4,5};//possiamo scrivere anche senza la n all'interno perchè il compilatore capirà la grandezza
    int C[n]={};//andrà ad inserire tutti 0
    int D[n][n];//matrice di dimensioni n per n
    int E[][n]={1,2,3,4,5,6,7,8};//possiamo inizializzare una matrice anche in questo modo ricordando che dobbiamo passare alla seconda parentesi la grandezza e poi scrivere la matrice;il compilatore campirà da solo l'uiltima grandezza

    return 0;
}
