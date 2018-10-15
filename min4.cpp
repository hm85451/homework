#include <iostream>
#include <cstdlib>
using namespace std;

int small2(int num1, int num2);

int main(int argc, char* argv[]){
	if (argc!=5){
	cerr<<"Usage: ./min4 num1 num2 num3 num4"<<"\n"<<" Prints smallest of the four numbers"<<endl;
	exit(1);	
	}
	int temp = 0;
	int min1 =atoi( argv[1]);
	int min2 =atoi( argv[2]);
	int min3 =atoi( argv[3]);
	int min4 =atoi( argv[4]);
	
	cout<<small2(small2(min1,min2),small2(min3,min4))<<endl;
	return 0;
}

int small2(int num1, int num2){
	if(num1<num2)
		return num1;
	else
		return num2;
}
