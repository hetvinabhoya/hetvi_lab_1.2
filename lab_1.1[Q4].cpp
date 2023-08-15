#include<iostream>
using namespace std;

    int add (int h,int a)
	{
		return h+a;
	}
	int sub (int h,int a)
	{
		return h-a;
	}
	int mul (int h,int a)
	{
		return h*a;
	}
	int div (int h,int a)
	{
		return h/a;
	}
	int mod (int h,int a)
	{
		return h%a;
	}
	
	
int main()
{
	int h,a;
	int n,m;
	int choice;
	

	do {
	cout << "Press 1 for + ..." <<endl;
	cout << "Press 2 for - ..." <<endl;
	cout << "Press 3 for * ..." <<endl;
	cout << "Press 4 for / ..." <<endl;
	cout << "Press 5 for % ..." <<endl;
	cout << "Press 0 for the exit..." <<endl;
	
	cout << "Enter your choice : ";
	cin >> choice;
	
	switch(choice)
	{
	
		case 1:
			cout << "Enter n : ";
	        cin >> n;
	
	        cout << "Enter m : ";
			cin >> m;
	
			cout << "Sum of n & m is " << add(n,m) << endl;
			break;
	
		case 2:
			cout << "Enter n : ";
	        cin >> n;
	
	        cout << "Enter m : ";
			cin >> m;
			
			cout << "Substraction of n & m is " << sub(n,m) << endl;
			break;
	
		case 3:
			cout << "Enter n : ";
	        cin >> n;
	
	        cout << "Enter m : ";
			cin >> m;
			
			cout << "Multiplication of n & m is " << mul(n,m) << endl;
			break;
			
		case 4:
			cout << "Enter n : ";
	        cin >> n;
	
	        cout << "Enter m : ";
			cin >> m;			
			cout << "Divison of n & m is " << div(n,m) << endl;
			break;
	
		case 5:
			cout << "Enter n : ";
	        cin >> n;
	
	        cout << "Enter m : ";
			cin >> m;			
			cout << "Modulo of n & m is " << mod(n,m) << endl;
			break;
			
			choice++;
			
	}		
	
      }while(choice!=0);
	
	
	return 0;
}
