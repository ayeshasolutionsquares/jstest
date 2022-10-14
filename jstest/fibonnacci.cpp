#include <iostream>
  int main() {
  
int i,n,arr[20];
    std::cout<<"enter a digit:";
    std::cin>>n;
    for(i=0;i<n;i++)
    {
      arr[i]=i;
      if(arr[i]<1)
      std::cout<<arr[i]<<" ";
      else if(arr[i]>1)
      {
         arr[i]=arr[i-1]+arr[i-2];
         std::cout<<arr[i]<<" ";
      }
    }
    return 0;
}
 
