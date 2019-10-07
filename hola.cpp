#include <iostream>

using namespace std;
//funcion (x) = x2+2x-6
  
float f (int x) 
{
	return x*x+2*x-6;
}
float f2 (int x)
{
	if (x<0){	
	return x*x;
}
	else
	{
		return x*x+2;
	}
}

float f3 (int x){

	if (x>1){
	
	return x*f3(x-1);
	
}
else {
	return 1;
}
}//Prgrama de fibonacci
 float f4(int n){
 
 if (n==1){
 	return 0;
 }
 else if (n==2)
 {
 	return 1;
 }
 else
 {
 	return f4(n-1)+f4(n-2);
 }
}

//float f5 (int x)
 
 int main()
 {
 	cout << f4(9);
 }/*
//funcion 1,2,3,4,5,6,6,5,4,3,2,1.
int vect[15]=(0);
cin>>n;
agregar(vec,n,15,0);
//Prototipo 
 void agregar(int vec[],int nuevo, int tam, int pos);
 {
 }
 int agregar(int vec[],int nuevo, int tam, int pos){
 	if (vec[pos]==0){
 	vec[pos]=nuevo;
 	return 1;
 }
 else if(pos<tam)
 agregar(vec,nuevo,tam,pos+1);
 else
 return 0;
 }

///Con ciclos

 void agregar(int vec[],int nuevo, int tam, int pos);
 {
 	//correcto
 	int i=0;
 	whlie (vec[i]!=0 && < tam)
 	i++;
 	
 	if(i<tam)
 	vec[i]=nuevo;
 	
 	//error
 	for (int i=0;i<tam;i++)
	 if(vec[i]==0)
	 vec[i]=nuevo;
 }*/ 
