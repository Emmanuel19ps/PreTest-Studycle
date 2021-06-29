//Emmanuel Parulian Sirait
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main(){
    int i, n, asc, z;
    float jumlah, rata, jumlah_kali, med;

    cout<<"\t\t\t\t======================================="<<endl;
    cout<<"\t\t\t\t==== MAGANG BERSERTIFIKAT STUDYCLE ===="<<endl;
    cout<<"\t\t\t\t====  by Emmanuel Parulian Sirait  ===="<<endl;
    cout<<"\t\t\t\t======================================="<<endl;

    cout<<"\nMasukkan jumlah bilangan : ";cin>>n; //input beberapa bilangan

    float nilai[n];

    /*program dapat menerima input beberapa bilangan*/
    for(int i=0; i<n; i++){
        cout<<"Bilangan "<<(i+1)<<" : ";cin>>nilai[i];
    }

    /*fungsi untuk mengurutkan semua bilangan
    yang dimasukkan dari yang terkecil sampai yang terbesar*/
    for(int c=1; c<n; c++){
        for(int d=0; d<n-c; d++){
            if(nilai[d] > nilai[d+1]){
                asc=nilai[d];
                nilai[d]=nilai[d+1];
                nilai[d+1]=asc;
            }
        }
    }
    cout<<"\nHasil Pengurutan adalah";
    for(int i=0; i<n; i++){
        cout<<" "<<nilai[i];
    }

    /*menampilkan keluaran yang mencakup: nilai rata-rata,
    nilai tengah dan hasil perkalian dari semua bilangan
    yang dimasukkan*/

    for(i=0; i<n; i++){     //menghitung nilai rata-rata
        jumlah+=nilai[i];
    }
    rata=jumlah/n;
    cout<<"\nNilai Rata-Rata : "<<rata;

    z=n/2;
    if(n%2==0){
        med=(nilai[z]+nilai[z-1])/2;
    }
    else{
        med=nilai[z];
    }
    cout<<"\nNilai Tengah    : "<<med;

    jumlah_kali=1;
    for(i=0; i<n; i++){     //menghitung hasil perkalian
        jumlah_kali=jumlah_kali*nilai[i];
    }
    cout<<"\nHasil Perkalian : "<<jumlah_kali;

    cout<<endl;
    getch();
    return 0;

}
