#include<bits/stdc++.h>
using namespace std;

int linear_search(int a[],int n,int item);
int main()
{
    freopen("file.txt","r",stdin);
    int i,n,item,Result;
    cin>>n;         // size of elements

    int a[100];
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }

    cin>>item;  // Searching item
    Result=linear_search(a,n,item);

    (Result == -1)? cout<<"Item not found":cout<<item<<" "<<" found at index "<< Result+1;

    return 0;
}

int linear_search(int a[],int n,int itemm)
{
    int i;

    for(i=0;i<n;i++)
     if(a[i]==itemm)
        return i;

    return -1;

}



/*input from file.txt
10 //size

25 //elements
5
13
66
70
9
45
11
88
142

11 //searching item
*/
