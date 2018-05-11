#include<iostream>
using namespace std;
int main()
{
    int i, arr[10]={1,2,3,4,5,6,7,8,9,10};

    for (int i=0; i<10; i++)
    {
        if((i+1)%3 == 0)
            continue;
        cout << arr[i]<<" ";
    }
    return 0;
}
