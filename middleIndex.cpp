#include <iostream>

using namespace std;

int main()
{
   int size,sum1=0,sum2=0;
   cout<<"enter size of an array = ";
   cin>>size;
   int arr[size],left=0,right=size-1;
   for(int x=0;x<size;x++){
       cout<<"enter your value "<<x<<" = ";
       cin>>arr[x];
   }
   for(int x=0;x<size;x++){
       if(right<=left){
           if(sum1==sum2){
                cout<<"the middle index = "<<right;
           break;
           }
           else{
               cout<<"we are really sorry , no equal sum found in array please try again with new values";
               break;
           }
       }
       if(x==0){
           sum1+=arr[left];
           sum2+=arr[right];
           left+=1;
           right-=1;
       }
       else if(sum1<sum2){
           sum1+=arr[left];
           left+=1;
       }
       else if(sum1>sum2){
           sum2+=arr[right];
           right-=1;
           
       }
       else if(sum1==sum2){
           if(left+right<=size)
           sum1+=arr[left];
           sum2+=arr[right];
           left+=1;
           right-=1;
       }
   }
}
