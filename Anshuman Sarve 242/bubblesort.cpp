#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    int a[10];
    cout<<"enter the size of the array :";
    cin>>n;

    cout<<"enter"<<n<<"integers in any order :\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);

    cout<<"sorted array :";
    for(int i = 0;i < n;i++)
    {
        cout<<a[i]<<" ";

    }
    cout<<endl;
    return 0;
}


/*PS C:\Anshuman Sarve 242> cd "c:\Anshuman Sarve 242\" ; if ($?) { g++ bubblesort.cpp -o bubblesort } ; if ($?) { .\bubblesort }
enter the size of the array :7
enter7integers in any order :
2
4
65
12
43
76
11
sorted array :2 4 11 12 43 65 76 */