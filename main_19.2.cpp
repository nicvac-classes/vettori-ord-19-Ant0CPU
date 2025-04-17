#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, j, t, d, k;
    bool scambi(true), trovato;

    do {
        cout<<"Quanti numeri generare?"<<endl;
        cin>>n;
    } while(n<=0);

    vector<int>x(n);
    for (i=0; i<=n-1; i++) {
        cout<<"Inserisci il "<<i+1<<"° valore di X"<<endl;
        cin>>x[i];
    }

    vector<int>y(n);
    k=0;
    i=0;
    while (i<=n-1) {
        trovato=false;
        j=0;
        while (j<k && !trovato) {
            if (x[i]==y[j]) {
                trovato=true;
            }
            j=j+1;
        }

        if (!trovato) {
            y[k]=x[i];
            k=k+1;
       }
       i=i+1;
    }

    i=0;
    while (i<k && scambi==true) {
        scambi=false;
        j=0;

        while (j<(n-1)-i) {
            if (y[j]>y[j+1]) {
                
                t=y[j];
                y[j]=y[j+1];
                y[j+1]=t;
                
                scambi=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    cout <<"Y: ";
    for (i=0; i<=k-1; i++) {
        cout<<y[i]<< "; ";
    }
}