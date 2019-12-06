#include<bits/stdc++.h>
using namespace std;

int InterPolation_Search(int a[],int n)  // interpolation Search function
{
    int mid,left,right;
    left=0;
    right=n-1;

    while(left<=right)
    {

         mid = left + (((right - left) /(a[right] - a[left])) * (n - a[left]));

        if(a[mid]<n)
        {
            left=mid+1;
        }

        else if (a[mid]==n)
        {
         cout<<n<<" "<<"Found at location: "<<mid+1;
           break;
        }
        else
        {
                right=mid-1;

        }
    }

        mid = left + (((right - left) /(a[right] - a[left])) * (n - a[left]));
       if(left>right)
        {
            cout<<"Not found !";
        }


}

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
        InterPolation_Search(a, item);
        return 0;
}

/*input from file.txt
10 //size

25  /elements
30
35
40
45
50
55
60
65
70

45 //searching item
*/
