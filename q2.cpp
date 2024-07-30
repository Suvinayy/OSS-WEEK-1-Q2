#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter number of elements"<<endl;
    int n;
    cin>>n;
    int x;
    int sum=0;
    cout<<endl<<"Enter your numbers : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        sum+=x;
    }

    cout<<(float)sum/n;
    return 0;
}
