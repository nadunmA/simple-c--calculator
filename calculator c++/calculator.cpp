#include<iostream>

using namespace std;

int main()
{
	double number1, number2;
	char operate;
	
	cout <<"Enter the Oparator (+ , - , * , /) : ";
	cin >> operate;
	
	cout << "\nEnter the First Number : ";
	cin >> number1;
	
	cout <<"Enter the Second Number : ";
	cin >> number2;
	
	switch (operate) {
		
		case '+':
		cout << "\nAnswer is : " << number1 <<operate <<number2 << " = " << number1 + number2 << endl;
		break;
		
		case '-':
		cout << "\nAnswer is : " << number1 <<operate <<number2 << " = " << number1 - number2 << endl;
		break;
		
		case '*':
		cout << "\nAnswer is : " << number1 <<operate <<number2 << " = " << number1 * number2 << endl;
		break;
		
		case '/':
			if(number2 == 0.0) {
				
				cout <<"Divided by Zero" <<endl;
				
			}else {
				
				cout << "\nAnswer is : " << number1 << operate << number2 << " = " << number1 / number2 <<endl;
			}
			break;
			
	    default:
			cout << "Inavlid Oparator Try Again";	
			
			
	}
	
	return 0;
}
