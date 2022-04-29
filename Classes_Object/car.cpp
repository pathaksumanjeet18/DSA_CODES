#include <iostream>
#include <string.h>
using namespace std;

//just creating class it will not take the memory
//tells how it will looks like,, need objects and parameters datamembers


//kind off the defining the new data type
//Access Modeifiers public private protected

class Car{
    private:
        int price;
    public:
        
        int model_no;
        char name[20];

        //Constructor
        Car(){
            cout<<"Inside Car Constructor"<<endl;
        }
        //paraeterisied constructor
        Car(float p,int m,char *n){//it can help to assign some initial function
            price = p;
            model_no = m;
            strcpy(name,n);
        }
        Car (float p){
            price = p;
        }
        //Copy constructor present by default
 
        //Always present by default
        // Car(Car &x){
        //     cout<<"Copy Constructor\n";
        //     price = x.price;
        //     model_no = x.model_no;
        //     strcpy(name,x.name);
        // }

        void print(){
            cout<<"Name "<<name<<endl;
            cout<<"Model No "<<model_no<<endl;
            cout<<"Price "<<price<<endl;
        }
        float get_discounted_price(float x){
            return (price*(1.0-x));
        }
        void apply_discount(float x){
            price = price*(1.0-x);
        }
        void set_price(int p){
            int msp = 110;
            if(p>msp){
                price = p;
            }
            else{
                price = msp;
            }

        }
        int get_price(){
            return price;
        }
        ~Car(){
            cout<<"Inside The Destrucotr"<<endl;
        }
};

int main(){

    //create an object
    Car c;//Makes a call to the constructor function present inside the class
    //here Car is datatype and c is variable name that denotes the object
    Car d(222,333,"Audi");
    d.print();

    Car e(d);//copy constructor // Car f = e;another way to call copy constructor
    cout<<"Car E";
    e.set_price(457);
    e.print();

    cout<<sizeof(c)<<endl;//28 as it has three diffrent variable within it
    
    cout<<sizeof(Car)<<endl;//practically it has not occupied any memory but will occupy when created memory;


    //All data memebers are by default private to accesss 
    //them from outside the class we need to make them public first
    
    
    // c.price = 100;  We cant access outside the class of private member
    //to get aur set need to use getter setter
    
    c.set_price(100);
    c.model_no = 112;
    c.name[0] = 'B';
    c.name[1] = 'M';
    c.name[2] = 'W';
    c.name[3] = '\0';

    cout<<c.name<<" Model no "<<c.model_no<<" Price "<<c.get_price()<<endl;

    cout<<"Enter the discount you want to give ";
    float discount;
    cin>>discount;

    cout<<c.get_discounted_price(discount)<<endl;
    c.apply_discount(discount);
    c.print();

    return 0;
}




