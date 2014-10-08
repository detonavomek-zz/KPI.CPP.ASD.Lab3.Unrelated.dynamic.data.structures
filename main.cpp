#include <iostream>
using namespace std;

int work(int num, int N)
{
	int localSum=0, localDob=1, temp = 0;
	cout<<"Array:\n";
	int * mas = new int[num];
	for(int i=0;i<num;i++)
	{
		mas[i]=rand()%20;
		cout<<mas[i]<<" ";
		localSum+=mas[i];
		if(localSum<N) 
		{
			temp = 1;
			localDob*=mas[i];
		}
	}
	delete[] mas;
	if(temp==1) cout<<"\nMultiplication = "<<localDob;
	else cout<<"\nCannot find multiplication.";
	cout<<"\n-----------------------------\n";
}

int main(){
	int N;
	cout<<"Enter N:";
	cin>>N;
	cout<<endl;
	work(10,N);
	work(12,N);
	work(8,N);
	return 0;
}