#include <iostream>
using namespace::std;
int main(int argc, char *argv[])
{
	if(argc < 3) {
		cout << "Usage: " << argv[0] << " number" << endl;
		exit(0);
	}
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int tot = 0;
	for(int i=x; i<=y; i++)	{
		if(i%2 == 1)
			tot+=i;
	}
	cout<<"sum is "<<tot<<endl;			
}
