#include<iostream>
using namespace std;

int linear_search(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
return -1;
}
int main()
{
    int n,x;
    int a[20];

    cout<<"enter the size of the array:";
    cin>>n;

    cout<<"enter"<<n<<"sorted integers:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the target element to search for:";
    cin>>x;

    int location=linear_search(a,n,x);
    if(location!=-1){
        cout<<"element"<<x<<"found at index :"<<location<<endl;
    }
    else{
        cout<<"element"<<x<<"not found in the array"<<endl;
    }

      return 0;
    
}


/*PS C:\Anshuman Sarve 242> cd "c:\Anshuman Sarve 242\" ; if ($?) { g++ linearsearch.cpp -o linearsearch } ; if ($?) { .\linearsearch }
enter the size of the array:8
enter8sorted integers:
2
4
5
6
7
90
43
21
enter the target element to search for:43
element43found at index :6
*/