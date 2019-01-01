#include <iostream>
#include <fstream>
using namespace::std;
int main(int argc, char* argv[])
{
	  if(argc < 2) {
                cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
                return 0;
        }
	ifstream file(argv[1]);
	string line;
	int total = 0;
	int f = 0;
	if(file.is_open()) {
		while(getline(file, line)) {
			for(int i=0; i<line.length(); i++) {
				f++;
			
				if(line[i] == 'G') {
					total++;
				}
				else if(line[i] == 'C') {
					total++;
				}
				else continue;
			}		
		}
	}
	int per = total * 100 / f;
	double per2 = total * 100.0 / f;
	cout<<per<<"\%"<<endl;
	cout<<per2<<"\%"<<endl;
	file.close();
}
                            
