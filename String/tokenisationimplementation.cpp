#include <iostream>
#include <cstring>
using namespace std;
char *mystrtok(char *s,char deliminter){
    //string and single char acts as delimiter
    static char*input = NULL;//points to the array
    if(s != NULL){
        input = s;
    }
    //After the final token has been extracted or returned
    if(input == NULL){
        return NULL;
    }
    //next start extracting tokens andcstore in an array
    
    char *output = new char[strlen(input)+1];
    int i = 0;
    for(;input[i]!='\0';i++){
        if(input[i]!=deliminter){
            output[i] = input[i];
        }
        else{
            output[i] = '\0';
            input = input + i +1;
            return output;
        }
    }
    //corner case //in the last need '\0' 
    output[i] = '\0';
    input = NULL;
    return output;

}
int main(){

     char s[100] = "Today is a rainy day";
     char *ptr = mystrtok(s,' ');
     cout<<ptr;
     while (ptr!=NULL)
     {
         /* code */
         ptr = mystrtok(NULL,' ');
        cout<<ptr;
     }
     
     

}