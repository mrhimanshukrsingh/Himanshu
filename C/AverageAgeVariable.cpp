#include<stdio.h>
using namespace std;
int main()
{
	float age, sum=0, avg;
	int no=10, i;
	cout<<"Enter the age of students beloew"<<no<<endl;
	for(i=1; i<=no; i++)
	{
		cin>>age;
		sum=sum+age;
	}
    avg=sum/no;
    cout<<"The average is"<<avg<<endl;
    return 0;
}
