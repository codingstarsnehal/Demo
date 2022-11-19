#include<iostream>
using namespace std;
int main()
{
	int n,m,i,j,a[i][j],b[i][j],c[i][j];
	cout<<"Enter the size of array"<<endl;
	cin>>m>>n;
	cout<<"Enter first matrix";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<"Enter second matrix";
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
			
		
		}
		cout<<endl;
	}
	cout<<"sum is="<<endl;
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
		
		cout<<endl;
		
	}
		for(i = 0; i < m; ++i)
        for(j = 0; j < n; ++j)
        {
            cout << c[i][j] << "  ";
            if(j == n - 1)
                cout << endl;
        }

		
	return 0;
}
