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
        string line;
        if(!file.is_open()) {
	
                cout<<"file reading error"<<endl;
                return 0;
        }
	string aline;
	getline(file, aline);
        file.close();

	for(int i = aline.length()-1; i >= 0; i--) {
		if(aline[i] == 'G')
			cout<<"C";
		else if(aline[i] == 'C')
			cout<<"G";
		else if(aline[i] == 'T')
			cout<<"A";
		else
			cout<<"T";
	}
	cout<<endl;
}
			
			
