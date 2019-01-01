#include <iostream>
using namespace::std;
int d(char *a, int i, char *b, int j)
{
	if(i == 0 || j ==0)
		return i+j;
	else {
		int s1, s2, s3;
		if(a[i - 1] == b[j - 1]) s1 = d(a, i - 1, b, j - 1);
		else s1 = d(a, i - 1, b, j - 1) + 1; 
		s2 = d(a, i, b, j-1) + 1;
		s3 = d(a, i-1, b, j) + 1;
		if(s1<s2 && s1<s3)
			return s1;
		else if(s2<s1 && s2<s3)
			return s2;
		else
			return s3;	
	}
}

int main()
{
	char str[] = "ABCD";
	char str2[] = "DABC";
	int result = d(str, 4, str2, 4);
	cout<<result<<endl;
		
}
