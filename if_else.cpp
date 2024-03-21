#include <iostream>
using namespace std;

int main(){
	char name;
	int password;
	
	cout <<"Enter username "; cin >>name;
	cout <<"Enter your password"; cin >> password;
	if(name=='G'){
		if (password==123456){
			cout<<endl<<"Login successful ";
		}
		else {
			cout<<endl<<"Incorrect PASSWORD, Try again.";
		}
	} else {
		cout<<endl<<"Incorrect Login Details, Try again.";
	}
return 0;
}
