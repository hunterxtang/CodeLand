#include <iostream>
#include <fstream>
using namespace::std;
int main(int argc, char *argv[])
{
	if(argc < 2) {
		cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
		return 0;
        }
        ifstream file(argv[1]);
        string message;
        if(!file.is_open()) {
                cout<<"file reading error"<<endl;
                return 0;
        }
	getline(file, message);
	file.close();
	cout<<"length of the message "<<message.length()<<endl;
	cout<<"hidden message: "<<message<<endl;
	string alph  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;
	for(int i=0; i<message.length(); i++) {
		if(message[i] == ' ')
			continue;	
		for(a=0; a<alph.length(); a++) {
			if(message[i] == alph[a]) 
				break;
		}
		int b = a+3;
		message[i] = alph[b%26];
		
	}
	cout<<"real message:"<<message<<endl;
}

