#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input,output;
	bool a=1; 
	
	cin>>input;
	for(int i=input.length()-1;i>=0;i--)//�N�r��f�ǶǨ�output 
	{
		output[input.length()-1-i]=input[i];
	}
	for(int j=0;j<input.length();j++)//����O�_���� 
	{
		if(input[j]!=output[j]){a=0;break;}//�o�{�����Y�ɸ��X 
		else a=1;
	}
	a?cout<<"YES"<<endl:cout<<"NO"<<endl;//��X���G 
	return 0;
} 
