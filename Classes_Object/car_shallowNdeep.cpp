#include <iostream>
#include <cstring>
using namespace std;
class Car{

    private:
        float price;
    public:
        int model_no;
        char *name;
        const int msp;//cannot change and incresse
       Car():msp(99){
           name = NULL;
       } 
       Car(float p,int m,char *n,int minprice = 99):price(p),msp(minprice){
           price = p;
           model_no = m;
           name = new char[strlen(n)+1];
           strcpy(name,n);
       }
       Car(Car &X):msp(X.msp){
           price = X.price;
           model_no= X.model_no;
           //deep copy constructor
           name = new char[strlen(X.name)+1];
           strcpy(name,X.name);
        //    name = X.name;//its a shallow copy 
//we need deep copy
       }
       void operator=(Car &X){
           //by default it would be shallow copy so
            price = X.price;
           model_no= X.model_no;
           //deep copy constructor
           name = new char[strlen(X.name)+1];
           strcpy(name,X.name);
        //    name = X.name;//its a shallow copy 
//we need deep copy

       }
        void setPrice(int p){
            price = p;
        }
       void print(){
            cout<<"Name "<<name<<endl;
            cout<<"Model No "<<model_no<<endl;
            cout<<"Price "<<price<<endl;
        }

        ~Car(){
            cout<<"Destroying Car"<<name<<endl;
            if(name!=NULL){
                delete [] name;
            }
        }

};
int main(){
    //static car objects
    Car c(100,200,"BMW");//paramteriesed constructor
    Car d(c);//copy cosntructor
    Car d = c;//copy assignment ///it can be used as many times
    d.name[0] = 'A';
    d.setPrice(90);
    
    c.print();
    d.print();

//dynamicall created cars
    Car *e = new Car(10,20,"Ferrari");
    e -> print();

// way to delete the object

//use delete key word
    delete e;

//custom delete keyword aur destructor for dyanmicalle object

    return 0;
}