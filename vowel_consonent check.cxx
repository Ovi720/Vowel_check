#include <iostream>
using namespace std;

int main()
{
char x,a;
cout<<"Enter a character"<<endl;
cin>>x;

if (x<65 || (x>90 && x<97) || x>122){  
	cout<<"Invalid character!"<<endl;  
}  
else if(x>97 && x<122){  
	a=x-32;  
	switch (a){  
		case 'A':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		case 'E':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		case 'I':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		case 'O':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		case 'U':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		default :  
			cout<<x<<" is consonant"<<endl;  
	}  
}  
else{  
	switch (x){  
		case 'A':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		case 'E':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		case 'I':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		case 'O':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		case 'U':  
			cout<<x<< "is vowel"<<endl;  
			break;  
		default :  
			cout<<x<<" is consonant"<<endl;  
	}  
}

}