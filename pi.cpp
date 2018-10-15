#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double len=0;
	double sum=0;
	
	cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(3);

	while(true){
	sum=0;
	cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
	cin>>len;
	if(len<0)
		break;
	
	for (int i = 0; i<=len; i++){
		sum+=pow(-1.0, i)/(2*(double)i + 1);
	}
	sm*=4;
	cout<<"The approximate value of pi using "<< len <<" term is: " <<sum<<endl;
	}
	return 0;
}

