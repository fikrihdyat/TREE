#include<iostream>
#include<conio.h>
#include<malloc.h>
#define nil NULL
using namespace std;
struct nod
{
	struct nod*left;
	char data; 
	struct nod*right;
	
};
typedef struct nod NOD;
typedef NOD POKOK;
NOD *NodBaru(char item){
	NOD *n;n=(NOD *)malloc(sizeof(NOD));
	if(n != NULL){
		n-> data = item;
		n-> left = NULL;
		n-> right =NULL;
	}
	return n;
}
void BinaPokok(POKOK **T){
	T=NULL;
}
bool PokokKosong(POKOK *T){
	return((bool)(T==NULL));
}
void TambahNod(NOD **p, char item){
	NOD *n;
	n=NodBaru(item);
	*p=n;
}
void PreOrder(POKOK *T){
	if (!PokokKosong(T)){
		cout<<" "<<T->data;PreOrder(T->left);PreOrder(T->right);
	}
}
void InOrder(POKOK *T){
	if(!PokokKosong(T)){
		InOrder(T->left);
		cout<<" "<<T->data;
		InOrder(T->right);
	}
}
void PostOrder(POKOK *T){
	if(!PokokKosong(T)){
	PostOrder(T->left);
	PostOrder(T->right);
	cout<<" "<<T->data;
	}
}
main(){
	POKOK *kelapa;
	char buah;
	BinaPokok(&kelapa);
	TambahNod(&kelapa, buah = 'M');
	TambahNod(&kelapa->left, buah ='E');
	TambahNod(&kelapa->left->right, buah ='I');
	TambahNod(&kelapa->right, buah = 'L');
	TambahNod(&kelapa->right->right, buah = 'O');
	TambahNod(&kelapa->right->right->left, buah = 'D');
	cout<<"Tampilan secara PreOrder : ";
	PreOrder(kelapa);
	cout<<endl;
	cout<<"Tampilan secara InOrder : ";
	InOrder(kelapa);
	cout<<endl;
	cout<<"Tampilan secara PostOrder : ";
	PostOrder(kelapa);
	cout<<endl;
	cout<<endl;
	
	getch();
	return 0;
}
