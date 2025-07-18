#include<iostream>
using namespace std;
int main(){
int size,low=0,high,mid,ans,array[100];


cout<<"Enter the size of the array";
cin>>size;
high=size-1;


for(int i=0; i<size;i++){
cin>>array[i];
}

mid=(high+low)/2;
while(low<=high){
mid=(high+low)/2;
if(array[mid]==0)
{
if(array[mid-1]==0){
high=mid-1;
}
else
{
ans=size-mid;
cout<<"the number of zero's are"<<ans;
break;
}
}
else{
if(array[mid+1]==1){
low=mid+1;
}
else{
ans=size-1-mid;
cout<<"No of zero's are "<<ans;
break;
}}}}