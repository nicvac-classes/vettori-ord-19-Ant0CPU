#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, j, t, d, k;
    bool scambi(true);

    do {
        cout<<"Quanti numeri generare?"<<endl;
        cin>>n;
    } while(n<=0);

    vector<int>x(n);
    for (i=0; i<n; i++) {
        cout<<"Inserisci il "<<i+1<<"° valore di X"<<endl;
        cin>>x[i];
    }

    vector<int>y(n);
    k=0;
    i=0;
    while (i<=n-1) {
        d=0;

        for (j=i+1; j<n; j++) {
            if (x[i]==x[j]) {
                d=d+1;
            }
            j=j+1;
        }
        
        if (d=0) {
            y[k]=x[i];
            k=k+1;
        }
        i=i+1;
    }

    i=0;
    while (i<k and scambi==true) {
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

    cout << "Y: ";
    for (i=0; i<k; i++) {
        cout << y[i] << "; ";
    }
}