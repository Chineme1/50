#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(int argc, char *argv[])
{
/*	if(argc==1)
	{
		std::cout <<"One argument\n";
	}
	if(argc==2)
	{
		std::cout <<"Two arguments\n";
	}*/
	if(argc!=3)
	{
		std::cerr <<"Wrong number of command-line arguments.\n";
		return 1;
	}
//	std::cout << argv[1]<<" this 1 should work.\n";
//	std::cout << argv[2] <<" 2.\n";
	
	unsigned int c = stoi(argv[1]);
	string a = argv[2];
	if(c != a.length())
	{		
		cerr<<"Bit string's length doesn't match provided length.\n";
		return 1;
	}
//	std::cout <<c *2 <<" Questionable results\n";	
//	cout<< a[0]<<endl;
	for(unsigned int i=0; i<a.length(); i++)
	{
		if(a[i]-'0' != 1 && a[i]-'0' != 0)
		{
			cerr <<"Bit string does not consist solely of 1s and 0s.\n";
			return 1;
		}
	}
	int sum =0;
	if(a[0]-'0' == 0)
	{
		//cout <<"this shit works\n";
		int b= a.length();
		for(unsigned int i=0; i<a.length(); i++)
		{
			c = a[i] - '0';
		/*	if(a[i] == 'B')
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
			}*/
                                          
	//c = a[i] - '0';
			b-=1;
			//cout<< "b is: " <<b<<endl;
			//cout << "c is: " << c << endl;
			sum += pow(2, b)* c;
	//cout <<pow(base, b);
	//cout << a[i];
	//cout <<sum<<endl;
								}


		cout << "The corresponding value is: "<< sum <<endl;
	}
	else
	{
		for(unsigned int i=0; i<a.length(); i++)
		{
			if(a[i]-'0'==0)
			{
				a[i] ='1';
			}
			else
			{
				a[i] = '0';
			}
		}
	//	cout << "a is: " <<a<<endl;
		int b1 = a.length()-1;
		if(a[a.length()-1]-'0'== 1)
		{
	//		cout <<"Work\n"<<endl;
			a[a.length()-1] = '0';
			while(b1>=0)
			{
				b1-=1;
				if(a[b1] == '1')
				{
					a[b1] = '0';
				}
				else
				{
					a[b1] = '1';
					b1 = -1;
				}
			}		
		}
		else
		{
			a[a.length()-1] = '1';
		}
	//	cout<< "a : "<< a<<endl;
		int b = a.length();
		for(unsigned int i=0; i<a.length(); i++)
		{
			c = a[i] - '0';
                                  
//c = a[i] - '0';
			b-=1;
		//cout<< "b is: " << b <<endl;
		//cout << "c is: " << c << endl;
			sum += pow(2, b)* c;
//cout <<pow(base, b);
//cout << a[i];
//cout <<sum<<endl;
		} 
                                                             
		cout << "The corresponding value is: "<< -1*sum <<endl;
	}

}
