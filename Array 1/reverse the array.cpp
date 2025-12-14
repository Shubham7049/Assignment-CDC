#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseArray(vector<int> &arr , int m) {
    
    int n=arr.size();
    if(m<n)
    {
        int start=m+1;
        int end=n-1;
        while(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
        end--;
        }
        
    }     
 	
}

int main()
{

    int T ;
    cin>>T;
    for(int i=0;i<T;i++)
    {
       int N;
       int M;
       cin>>N;
       cin>> M; 
      vector<int> arr(N);
       for(int i=0;i<N;i++)
       {
           cin>>arr[i];
       }
       reverseArray(arr , M);
    }
}
