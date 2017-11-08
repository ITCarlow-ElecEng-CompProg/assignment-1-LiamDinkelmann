#include <iostream>
using namespace std;
int menu();
void input1(double&);
void calc1(double,double&);
void output1(double,double);
void input2(double&);
void calc2(double,double&);
void output2(double,double);


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	double x, an;
	
	switch(menu())
	{
		case 1:
				input1(x);
				calc1(x,an);
				output1(x,an);
				break;
		
		case 2:
				input2(x);
				calc2(x,an);
				output2(x,an);
				break;
		
		default:
				cout << "Invalid Option \n";
	}
	
	return 0;
}


void input1(double&a)
		{
			cout<<"Enter the Degrees in Celsius you wish to convert"<<endl;
			cin>>a;
			return;
			
		}
		
void calc1(double a, double& B)
		{
			B=(((a*9)/5)+32);
			return;
		}

void output1(double a, double B)
		{
			cout<<a<<" Degrees Celcius is "<<B<<" Degrees Farenheit."<<endl;
			return;		
		}
		
void input2(double&a)
		{
			cout<<"Enter the degrees in Farenheit that you wish to convert"<<endl;
			cin>>a;
			return;	
		}
		
void calc2(double a, double&B)
		{
			B=(((a-32)*5)/9);
			return;	
		}
		
void output2(double a, double B)
		{
			cout<<a<<" Degrees Farenheit is "<<B<<" Degrees Celcius"<<endl;
			return;
		}

int menu()
		{
			int choice;
			
			do
			{
				cout<<"Enter 1 to convert Celcius to Farenheit \nEnter 2 to convert Farenheit to Celcius"<<endl;
				cin>>choice;
					while(cin.fail())
						{
							cin.clear();
							cin.ignore(80,'\n');
							
							cout << "\nInvalid Entry, Please Re-Enter number: ";
							cin >> choice;
						}
				if(choice!=1&&choice!=2)
			cout<<"Invalid option\n";
			}
	while(choice!=1&&choice!=2);
	return choice;
			
		}
