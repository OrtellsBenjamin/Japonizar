#include<bits/stdc++.h>
using namespace std;
string Japonizar(string nombre);
int main(){
	string nombre;
	cout<<"Ingrese un nombre:"<<endl;
	cin>>nombre;
	string A=Japonizar(nombre);
	cout<<"Konnichi wa "<<A<<"-san";
	return 0;
}
string Japonizar(string nombre){
	string japon;
	for(int i=0;i<nombre.size();i++){
		japon+=nombre[i];
		if(nombre[i]!='a' && nombre[i]!='A' && nombre[i]!='e' && nombre[i]!='E' && nombre[i]!='i' && nombre[i]!='I' && nombre[i]!='o' && nombre[i]!='O' && nombre[i]!='u' && nombre[i]!='U' && nombre[i]!='n' && nombre[i]!='N'){
			japon+='u';
      }
	}
	return japon;
}
