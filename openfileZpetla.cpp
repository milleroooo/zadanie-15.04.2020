#include <iostream>
#include <fstream>
using namespace std;

int t[1000];

int i;

int main()

{    
		string a;
		
    ifstream plik;
    plik.open("pierwszyplikWynikowy.txt",ios::in);  
    if(plik.good())  								
     while(!plik.eof())        
                         {
                plik>>a;  
                cout<<a;    
                         }
    int ilosc =i;

   
    cout<<endl;
    
    for (int i=0; i < ilosc; i++)
    
    plik>>t[i++];
    
    
  ofstream plik2;              
    plik2.open("drugiplikWynikowy.txt",ios::out);         
    plik2<<"test"; 
    plik2<<"test";
	plik2<<endl;   
 
 	const int n = 10;
 	int i;
 	int t[n];
 
    for(i=0;i<n;i++){
   	plik2<<t[i];
}

    
    plik.close();  plik2.close();
    return 0;
}

