#include<iostream>

using namespace std;

int main()
{
	double T=0.5;
	double c=1.0;
	double h=0.1;
	double h_t=0.01;
	double * in_u = new double[(int) (2.0/h)];
	double * u = new double[(int) (2.0/h) ];
	double x =0.0;
	for(int i=0;i<2.0/h;i++)
	{
		x=(h*i);
		if(x<0.75 || x>1.25)
		{
			in_u[i]=0.0;
		}
		if(x>0.75 && x<1.25)
		{
			in_u[i]=1.0;
		}
		cout<<x<<" "<<in_u[i]<<endl;
	}
	for(int j=0;j<T/h_t;j++)
	{
		for(int i=0;i<2.0/h;i++)
		{
			u[i]= in_u[i] - ( (c * h_t / h ) * ( in_u[i+1] - in_u[i] ) );
			if(i!=0 || i!=(2.0/h - 1))
			{
				in_u[i]=u[i];
				//cout<<u[i]<<endl;
			}
		}
	}
	for(int i=0;i<2.0/h;i++)
	{
		x=(h*i);
		cout<<x<<" "<<u[i]<<endl;
	}
	return 0;
}
