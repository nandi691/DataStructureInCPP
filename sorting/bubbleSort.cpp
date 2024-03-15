#include <iostream>

using namespace std;

int main()
{
	int i;
	int j;
	int tmp;
	int arr[8] = {12,3,1,5,18,10,7,35};
	cout<<"Unsorted array \n"<<endl;
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;

	for(i=0;i<8;i++)
	{
		for(int j=i+1;j<8;j++)
		{
			if(arr[j]<arr[i])
			{
				tmp = arr[j];
				arr[j]=arr[i];
				arr[i]=tmp;
			}
		}
	}

	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}
