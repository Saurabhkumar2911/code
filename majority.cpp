   // { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
      
        
        int major = 0, count = 1;
        
         for (int i = 1; i < size; i++)
         {
             if (a[major] == a[i])
                count++;
            else
                count--;
            if (count == 0) 
            {
                major = i;
                count = 1;
            }
         }
           
       count=0;
       for(int i=0;i<size;i++)
       {
        if(a[major]==a[i])
        count ++;
       } 
         if(count>size/2)
         {
         return a[major];
        }
         else 
         return -1;
    
    }
};


// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends