#include<iostream>

using namespace std; 
 

void fun(int arr[] ) // function Arr  
{   
     for(int i =0;i<5;i++)
     cout << arr[i] << endl;  
    
} 
int main(){    
    int arr[] = {2,4,7,9,8};  
    
    int n = 5;
   // int x; 
    fun(arr); 
   cout<<sizeof(arr)/sizeof(int)<<endl;
    for(int x:arr)
    cout<< x << " "<<endl;  
    return 0;
}