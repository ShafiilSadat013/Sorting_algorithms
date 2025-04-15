#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "number of elements :" << endl;
    cin >> n;
    int arr[n];
    cout << "Now enter elements : " ;
    for(int i=0;i<n;++i)
    {
        cin >> arr[i];
    }
    for(int i=1;i<n;++i)
    {
        int current_value= arr[i];
        int j = i-1;

    while(j>=0&&arr[j]>current_value)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]= current_value;
    }

    cout << "Sorted Array :" ;
    for(int i=0;i<n;++i)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}
