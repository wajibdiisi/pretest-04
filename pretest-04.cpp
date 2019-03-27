#include <iostream>
#include <string.h>

using namespace std;

struct ElemtList{
	char NPM[14];
	char nama[40];
	float ipk;
	ElemtList* Next;
};

typedef ElemtList* pointer;
typedef pointer List;

void banyakMahasiswa(int &n){
	cout<<"Masukkan Banyak Mahasiswa : ";cin>>n;
}

void createList (List &First){
	First = NULL;
}

void createElemt(pointer &pBaru){
	pBaru = new ElemtList;
	cout<<"Masukkan Nama	: ";cin.ignore(255,'\n');cin.getline(pBaru->nama,20);
	cout<<"Masukkan NPM	: ";cin>>pBaru->NPM;
	cout<<"Masukkan IPK	: ";cin>>pBaru->ipk;
	cout<<endl;
	pBaru->Next=NULL;
}


void traversal(List First){
	pointer pBantu;
	if (First==NULL){
		cout<<"List Kosong\n";
	}
	else{
		int i=1;
		pBantu=First;
		do{	
			cout<<"Data Mahasiswa ke-"<<i<<endl;
			cout<<"Nama	: "<<pBantu->nama<<endl;
			cout<<"NPM	: "<<pBantu->NPM<<endl;
			cout<<"IPK	: "<<pBantu->ipk<<endl;
			pBantu = pBantu->Next;
			i++;
		}while(pBantu != NULL);	{
		cout << endl;	
		}
	}
}


void sortingNama (List First, int n){
	pointer insert;
	pointer ptr=NULL;
	
	int i,j,tukar;
	int selisih[100];
        tukar = 0; 
        insert=First; 
        while (insert->Next != ptr){
		for(int i=0;i<n;i++){
			selisih[i]=strcmp(insert->nama,ptr->nama);
			if (selisih[i]>0){
				swap(insert, insert->Next); 
			}
		}	 
           
    
	}} 


int main(){
	pointer p;
	List Mhs;
	int n;
	banyakMahasiswa(n);
	createList(Mhs);
	for (int i=0;i<n;i++){
		createElemt(p);
		cout<<endl;
	}
	traversal (Mhs);
	}
