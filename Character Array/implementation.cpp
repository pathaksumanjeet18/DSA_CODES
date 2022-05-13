#include <iostream>
using namespace std;
int main(){

    // char arr[][10] = {{'a','b','c','\0'},{'d','e','f','\0'}};
    char arr[][10] = {"abc","def","ghi"};

    cout<<arr[0];//row of a character 2d array
    cout<<arr[1];


    char a[100][1000];
    // int n;cin>>n;

    cin.get();//take input after the extra words that come while taking in input
    // for(int i = 0;i<n;i++){
    //     cin.getline(a[i],1000);//taking inputs of that row
    // }

    //now print all
    // for(int i = 0;i<n;i++){
    //     cout<<a[i]<<endl;
    // }


    char b[] = {'a','b','c','\0'};//recomenede to terminate the array other wise in some case it can print garbage values
    cout<<b;//special behavior that it print elements till we dont fine null
    int ba[] = {1,2,3};
    cout<<ba;//In case of integer array we will get memory address of stating one 



    char s[10];
    cin>>s;//it takes input and terminate the string or character by adding null
    cout<<s;
    //if giving string it will terminate
    char s1[] = {'h','e','l','l','o'};
    char s2[] = {"hello"};
    cout<<s1<<" "<<sizeof(s1)<<" "<<s2<<" "<<sizeof(s2)<<endl;
    

    //if definte as a charater we dont terminate it will print some garbage like here
    //but if we take as a string it will terminate by its own
    //so terminate by null character

    return 0;
}