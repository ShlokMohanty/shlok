#include<iostream>
using namespace std;
int main()
{
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i>=j)
			{
				cout<<"*"<<endl;
			}
		}
	}
	return 0;
}
