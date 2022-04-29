 #include <iostream>
using namespace std;
int storeOcc(int *a,int i,int n,int key,int *out,int j){

    //base case 
    if(i==n)
        return j+1;

    if(a[i]==key){
        out[j] = i;
        storeOcc(a,i+1,n,key,out,j+1);

    }
    return storeOcc(a,i+1,n,key,out,j);

}
void allOcc(int *a,int i ,int n ,int key){
    if(i == n)
        return ;
    if(a[i] == key)
        cout<<i<<",";
    allOcc(a,i+1,n,key);
}
int lastOccur(int *a,int n,int key){
     //base case 
     if(n==0)
        return -1;
    
    //rec call
    int i = lastOccur(a+1,n-1,key);
    if(i==-1){
        if(a[0] == key){
            return 0;
        }
        else    
            return -1;
    }
    //otherwise if i returned i by subproblem is not -1 
    return i+1;
}  
 
int main(){
    int arr[] = {1,2,3,7, 4,5,6,7,8,9};
    int key = 7;
    int n = sizeof(arr)/sizeof(int);
    cout<<lastOccur(arr,n,key);
    int output[100];
    int cnt = storeOcc(arr,0,n,key,output,0);
    cout<<cnt<<" ";
    for(int k = 0;k<cnt;k++)
        cout<<output[k]<<" ";
    return 0;
}