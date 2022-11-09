#include<iostream>
using namespace std;
int main()
{
	int n,num,i,count;
	cout<<"Enter the no. of elements = ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter no. to be searched\n";
	cin>>num;
	for(i=0;i<=n;i++){
		if(a[i]==num){
			cout<<a[i]<<"is found at\n"<<i;
			count=1;
		}
	}
	if (count!=1)
	{
		cout<<num<<"is not found\n";
	}
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	