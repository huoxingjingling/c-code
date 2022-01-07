#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void print()
{

}
void test01()
{
	vector<int>v1;
	v1.push_back(6);
	v1.push_back(5);
	v1.push_back(0);
	v1.push_back(3);
	v1.push_back(6);

	vector<int>::iterator pBegin = v1.begin();
	vector<int>::iterator pEnd = v1.end();

	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}
	
}

void listinsert(int list[], int arr[], int length)
{
	int key=7;
	int k=0;
	//cin >> key;
	for (int i = 0; i < 5; i++)
	{
		if (key < list[i])
		{
			
			 k = i;	
			 break;
		}
		arr[i] = list[i];
	}
	for (int j = length-1; j >= k-1; j--)
	{
		arr[j+ 1] = list[j];
	}
	arr[k] = key;
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
void test02()
{
		int list[5] = { 1,4,6,10,12};

		int length = sizeof(list) / sizeof(int);
		cout << length << endl;
		const int n = 6;
		int arr[n] = {0};
		for (int i = 0; i < 5; i++)
		{
			cout << list[i]<<"  ";
		}
		cout << endl;
		listinsert(list,arr,length);
		
}
//int main()
//{
//	//test01();
//	test02();
//	//printf("aaaa"); 
//	system("pause");
//	return 0;
//
//}


	



