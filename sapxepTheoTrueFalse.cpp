#include <iostream>

using namespace std;
void sortAscending(float array[], int size)
{
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]>array[j]){
                    swap(array[i],array[j]);
        }
    }
    }
}
void reverseArray(float array[], int size)
{
    for(int i=0; i<size/2; i++){
            swap(array[i],array[size-1-i]);
    }
}
void sort(float array[], int size, bool isAscending)
{
   if(isAscending==true){
    sortAscending(array,size);
   }
   else{
           sortAscending(array,size);

            reverseArray(array, size);
}
}
int main(){
float a[1000];
int size;
cin>>size;
for(int i=0; i<size; i++){
    cin>>a[i];
}
sort(a, size, false);
for(int i=0; i<size; i++){
    cout<<a[i]<<" ";
}
return 0;
}
