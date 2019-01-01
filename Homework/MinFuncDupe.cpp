#include <iostream>
using namespace::std;
int getMin(int n1, int n2)
{
        if(n1<n2) {
                return n1;
        }
        else {
                return n2;
        }
}
int main(int argc, char *argv[])
{
	int n;
	n = atoi(argv[1]);
	int l;
	l = atoi(argv[2]);
	int answer = getMin(n, l);
	cout<<answer<<endl;
}

