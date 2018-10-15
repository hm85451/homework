#include<iostream>

using namespace std;
int main(){
	int col, row;

	while(true)
	{
	cout<<"Enter number of rows and columns:"<<endl;
	cin>>row;
	cin>>col;
	
	if (row==0||col==0)
		break;
	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col;j++)
			cout<<"X.";
		cout<<"\n";
	}
	}
	return 0;
}
