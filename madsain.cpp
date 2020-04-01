#include <iostream>
#include <fstream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int licznik =0;
	string a;
	ifstream plik2;
	plik2.open("C:\\Users\\Mi³osz\\a.txt"); /*wstaw swoje */
	if(plik2.good())
	while(!plik2.eof()){
		plik2 >> a;  
        cout << licznik++ << ":" << a<<endl;    
         
	}
	string tab[licznik];
	licznik = 0;
	if(plik2.good())
	while(!plik2.eof()){
		licznik++;
		plik2 >>a;
		tab[licznik]=a;
		cout<<tab[licznik];
	}
	plik2.close();
	  
	return 0;
}
