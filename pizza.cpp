#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[8],max=1,sum=0;
	for(int i=0;i<8;i++)
	{
		cin>>arr[i];
	}
	for(int i =0;i<5;i++)
	{
		sum = 0;
		sum += arr[i]+arr[i+1]+arr[i+2]+arr[i+3];
		if(sum>=max)
		{
			max = sum;
		}
	}
	if(arr[0]+arr[1]+arr[2]+arr[7] >= max)
        max = arr[0]+arr[1]+arr[2]+arr[7];
    if(arr[0]+arr[1]+arr[6]+arr[7] >= max)
        max = arr[0]+arr[1]+arr[6]+arr[7];
    if(arr[0]+arr[5]+arr[6]+arr[7] >= max)
        max = arr[0]+arr[5]+arr[6]+arr[7];
	cout<<max;
	return 0;
	// Write your code here
}
