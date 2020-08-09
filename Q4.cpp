#include<iostream>
using namespace std;
class Rectangle{
private:
    double length=1;
    double width=1;
public:
    float perimeter(){
    float peri;
    peri=2*(length+width);
    return peri;
    }
    float area(){
    float ar;
    ar=length*width;
    return ar;
    }
    int getlength(){
    return length;
    }
    void setLength(float l){
    if(l>=0.0&&l<=20.0){
        length=l;
    }
    else{
        cout<<"Please enter valid "<<endl;
    }
    }
    void setWidth(float w){
    if(w>=0.0&&w<=20.0){
      width=w;
    }
    else{
    cout<<"Please enter something valid"<<endl;
    }
    }
    };

int main(){
    Rectangle R;
    float len;
    float wid;
    cout<<"Enter length"<<endl;
    cin>>len;
    cout<<"Enter width"<<endl;
    cin>>wid;
    R.setLength(len);
    R.setWidth(wid);
    cout<<"Perimeter: "<<endl;
    cout<<R.perimeter()<<endl;
     cout<<"Area: "<<endl;
    cout<<R.area()<<endl;
    return 0;
    }
