//THIS CODE WILL BE WRITTEN IN C++

//AUTHOR:DONEVAN GONZALES

//LETS SEE IF WE CAN MAKE AN ENIGMA MACHINE
//SHOUT OUT ALAN TURING

#include <iostream>
#include <fstream>

using namespace std;

int main(){
  string fileName;
  ifstream fin;
  ofstream fout;
  char response;
  
  cout<<"Do you wish to encrypt or decrypt a file?"<<endl;
  cout<<"Type \"E\"/\"e\" to encrypt OR \"D\"/\"d\" to decrypt"<<endl<<endl;
  
  cin>>response;
  
  switch(response){
    case 'E':
    case 'e':   cout<<"encrypt"<<endl;
                break;
    case 'D':
    case 'd':   cout<<"decrypt"<<endl;
                    break;
    default:    cout<<"That's not an option";
  }
  
  
  
  cout<<"Enter name of the file you wish to encrypt: ";
  
  
  fin.open();
  
  return 0;
}
