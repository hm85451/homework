#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int len=0;
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
	sum*=4;
	if (len+1>1)
		cout<<"The approximate value of pi using "<< len + 1 <<" terms is: " <<sum<<endl;
	else
		cout<<"The approximate value of pi using "<< len + 1 <<" term is: " <<sum<<endl;
	}
	return 0;
}

