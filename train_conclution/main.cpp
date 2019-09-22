#include <iostream>
using namespace std;


namespace componya
{
	int getMaxOrMin(int *arr,int num,bool isMax)
	{
		int temp;
		temp = arr[0];
			for(int i=1;i<num;i++)
			{
				if (isMax)
				{
					if(temp<arr[i])
					{
						temp = arr[i];
					}
				}
				else
				{
					if(temp>arr[i])
					{
						temp = arr[i];
					}
				}
			}
		return temp;
	}
}


int main()
{
	int arr1[4] = {2,4,7,1};
	bool model = false;
	cout<<"请输入最小还是最大（bool）："<<endl; 
	cin>>model;
	int result;
	result = componya::getMaxOrMin(arr1,4,model);
	cout<<"result is"<<result<<endl;
	return 0;
}
