//BUBBLE SORTING
/*#include <iostream>
using namespace std;
int main(){
    int numb;
   
   
      cout<<"enter the size";
    cin>>numb;
  
     int arr[numb];
    for(int i=0;i<numb;i++)
    {
        cin>>arr[i];
    }
 int counter=1;
 while(counter<numb){
  for (int i = 0; i < numb - counter; i++){
    if(arr [i] > arr[i+1]){
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
  
 }
 counter++;
 }

 cout<<"Answer of bubble sort is :->";
 for(int i=0;i<numb;i++){
    cout<<arr[i]<<" ";
   
 } 
  cout<<endl; 
   return 0;
}*/

//SELECTION SORT
/*#include <iostream>
using namespace std;
int main(){
    int size ;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i])
            {
                int temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
         cout<<arr[i]<<" ";
    }
    return 0;
}*/

//INSERTION SORT 
#include <iostream>
using namespace std;
void insertionsort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int size;
    cin>>size;
     int arr[size];
     for(int i=0;i<size;i++)
     {
        cin>>arr[i];
     }
     insertionsort(arr,size);
     for (int i=0;i<size;i++){
        cout<<arr[i];
     }

}