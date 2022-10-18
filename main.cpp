#include <iostream>
using namespace std;
void struk(string name,int disk,int tot,string member){
            cout<<"--------------Pembayaran--------------"<<endl;
            cout<<"Jenis member  : "<<member<<endl;
            cout<<"Nama pelanggan: "<<name<<endl;
            cout<<"Diskon        : "<<disk<<"%"<<endl;
            cout<<"Total belanja : "<<tot<<endl;
            cout<<"--------------------------------------"<<endl;

}

int main(){
    int inpt;
    float brg[50],hr[50],jml[50],tothr=0,totjml=0,totbel,hasildis,dis=0;
    char nm[50][50];
    string pilih,nama,barang;

    cout<<"--------------------------------------"<<endl;
    cout<<"|          Mini Market unila          |"<<endl;
    cout<<"--------------------------------------"<<endl;

    cout<<"Member atau non member <ya/tdk>: ";cin>>pilih;
    cout<<"--------------------------------------"<<endl<<endl;
    if(pilih=="ya"){
    cout<<"---------------Hai Member-------------"<<endl;
    cout<<"Nama: ";cin>>nama;
    //cout<<"Jumlah barang: ";cin>>inpt;
    string c="tdk";
    int i=0;
        while(c=="tdk"&&c!="ya"){
            cout<<"--------------------------------------"<<endl;
            cout<<"Nama Barang : "; cin>>barang;
            cout<<"Harga    : "; cin>>hr[i];
            cout<<"jumlah   : "; cin>>jml[i];
            totbel+=hr[i]*jml[i];
            cout<<"Checkout? <ya/tdk>: "; cin>>c;
            i++;
            }
		if(totbel>=100000){
            dis=0.05*totbel;
            hasildis=totbel-dis;
            struk(nama,20,hasildis,"Ya");

            }else{
            struk(nama,0,totbel,"Ya");
            }
   		} else if (pilih=="tdk"){
        cout<<"---------------Non Member-------------"<<endl;
        cout<<"Nama: ";cin>>nama;
        string c="tdk";
            int i=0;
        while(c=="tdk"&&c!="ya"){
            cout<<"--------------------------------------"<<endl;    
			cout<<"nama barang : "; cin>>barang;     
            cout<<"Harga    : "; cin>>hr[i];
            cout<<"jumlah   : "; cin>>jml[i];
            totbel+=hr[i]*jml[i];
            cout<<"Checkout? <ya/tdk>: "; cin>>c;
            i++;
            }
   		
   		     struk(nama,0,totbel,"Tidak");
            

    }else{
         cout<<"Data yang anda masukan salah"<<endl;
     }
		 cout<<"Terimakasih Telah Berbelanja"<<endl;
}
