#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n);

int main()
{
    freopen("file.txt","r",stdin);
    int i,item;
    int n;

        cin>>n;  //Element size  of array[n]

        int a[100];
        for(i=0;i<n;i++)
        {
        cin>>a[i];
        }


        cin>>item;    // Searching  item:
        binarysearch(a, item);
        return 0;
}

int binarysearch(int a[],int n)  // Binary Search function
{
    int mid,left,right;
    left=0;
    right=n-1;

    while(left<=right)
    {
        mid=(left+right)/2;

        if(a[mid]<n)
        {
            left=mid+1;
        }

        else if (a[mid]==n)
        {
         cout<<n<<" "<<"Found at location: "<<mid;
           break;
        }
        else
        {
                right=mid-1;

        }
    }

       mid=(left+right)/2;
       if(left>right){
            cout<<"Not found !";
        }


}

/*input from file
10 //size

4 //elements
5
6
7
8
9
10
11
12
13

11 //searching item
*/




