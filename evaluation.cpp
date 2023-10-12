#include<iostream>
using namespace std;
int power(int arr[],int pow);
main()
{
    int n;
    int sum=0,ans=1,pow;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter "<<i<<" : ";
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++)
    {
        ans = 1;
        pow = arr[i]%10;
        arr[i] = arr[i]/10;
        for(int j = 0;j<pow;j++)
        {
            ans = ans*arr[i];
        }
        cout<<"ans = "<<ans<<endl;
        sum+=ans;
    }
    cout<<sum<<endl;


}

