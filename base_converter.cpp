#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int base;
	string a;
	int sum=0;
	cout << "Enter initial base: ";
	cin>> base;
	cout<< "Enter base-"<<base<<" representation: ";
	cin>> a;


//	cout << a.length()<<endl;
	//cout << a[1]<<endl;
	int b= a.length();
	int c;
	for(unsigned int i=0; i<a.length(); i++)
	{
		c = a[i] - '0';
		if(a[i] == 'B')
		{
			c=11;
		}
		if(a[i] =='A')
		{
			c=10; 
		}
		if(a[i] =='C')
		{
			c=12; 
		}
		if(a[i] =='D')
        	{
        		c=13; 
        	}
		if(a[i] =='E')    	
        	{
        		c=14; 
        	}
		if(a[i] == 'F')
		{
			c =15;
		}

		//c = a[i] - '0';
		b-=1;
		sum += pow(base, b)* c;
		//cout <<pow(base, b);
		//cout << a[i];
		//cout <<sum<<endl;
	}
	//cout<< "sum " <<sum <<endl;
	

	int base1;
	string a1;
	//int sum1 =0;
	cout<<"Enter desired base: ";
	cin>> base1;
	//cout <<
	int b1;
	while(sum!=0)
	{
		b1 = sum % base1;
		sum = sum / base1;
		//char *intStr = itoa(b1);
		if(b1==10|| b1==11||b1==12||b1==13||b1==14 || b1 ==15)
		{
			if(b1==10)
			{
				a1 += "A";
			}
			if(b1==11)                		
                        {
                       		a1 += "B";
                       	}
			if(b1==12)
			{
				a1 += "C";
			}
			if(b1==13)
			{
				a1 += "D";
			}
			if(b1==14)
			{
				a1 += "E";
			}
			if(b1==15)
			{
				a1 += "F";
			}
 	
		}
		else
		{
			a1 += to_string(b1);
		}
		//cout << "number"+a1<<endl;
	}
	string a2 =a1;
	for(unsigned int j=0; j<a1.length(); j++)
	{
		a1[j]= a2[a1.length()-j-1];
	}
	cout<<"Base-"<<base1<<" representation: "<< a1 <<endl;	
	
}
