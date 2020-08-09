#include<iostream>
using namespace std;

class Rectangle{
private:
    int x1,x2,x3,x4,y1,y2,y3,y4,length,width,perimeter,area;
    char bodyElement,borderElement;
public:
    Rectangle(int p1x,int p2x,int p3x,int p4x,int p1y,int p2y,int p3y,int p4y){
              setPoint(p1x,p2x,p3x,p4x,p1y,p2y,p3y,p4y);
              }
              void setPoint(int p1x,int p2x,int p3x,int p4x,int p1y,int p2y,int p3y,int p4y){
            if(p1x>=0&&p1x<=20){

             x1=p1x;
             }
             else{
                cout<<"Enter something valid"<<endl;
             }
             if(p2x>=0&&p2x<=20){

             x2=p2x;
             }
             else{
                cout<<"Enter something valid"<<endl;
             }
             if(p3x>=0&&p3x<=20){

             x3=p3x;
             }
             else{
                cout<<"Enter something valid"<<endl;
             }
             if(p4x>=0&&p4x<=20){

             x4=p4x;
             }
             else{
                cout<<"Enter something valid"<<endl;
             }
             if(p1y>=0&&p1y<=20){

             y1=p1y;
             }
             else{
                cout<<"Enter something valid"<<endl;
             }
             if(p2y>=0&&p2y<=20){

             y2=p2y;
             }
             else{
                cout<<"Enter something valid"<<endl;
             }
             if(p3y>=0&&p3y<=20){

             y3=p3y;
             }
             else{
                cout<<"Enter something valid"<<endl;
             }
             if(p4y>=0&&p4y<=20){

             y4=p4y;
             }
             else{
                cout<<"Enter something valid"<<endl;
             }
             if(x1==x4&&y1==y2&&x3==x2&&y3==y4){

             cout<<"It is a Rectangle"<<endl;
             }
             else{
                cout<<"Not a rectangle"<<endl;
             }
              }
              void dimen(){
              int value1=x2-x1;
              if(value1<0){
                value1=value1*(-1);
              }
              int value2=y3-y1;
              if(value2<0){
                value2=value2*(-1);
              }
              if(value1>value2){
                length=value1;
                cout<<"Length: "<<length<<endl;
                width=value2;
                cout<<"Width: "<<width<<endl;
              }
              else{
                length=value2;
                cout<<"Length: "<<length<<endl;
                width=value1;
                cout<<"Width: "<<width<<endl;
            }
              }
              void peri(){
                  int perimeter;
              perimeter=2*(length+width);
              cout<<perimeter<<endl;
              }
              void area1(){
                  int ar;
              ar=length*width;
              cout<<ar<<endl;
              }
              void square(){
              if(length==width){
                cout<<"it is a square"<<endl;
              }
              else{
                cout<<"not a square"<<endl;
              }
              }
              void setFillCharacter(){
              char c;
              cout<<"Enter the element you want the body to be made of"<<endl;
              cin>>c;
              bodyElement=c;
              }
              void setPerimeterCharacter(){
              char c;
              cout<<"Enter the element ypu want to displat in perimeter";
              cin>>c;
              borderElement=c;
              }
              void printD(){
                  int i,j;
              for(i=25;i>=0;i--){
                for(j=0;j<=25;j++){
                    if((i>=y1&&i<=y3)&&(j>=x1&&j<=x2)){
                        if(i==y1||i==y3||j==x1||j==x2){
                           cout<<borderElement;
                           }
                           else{
                            cout<<bodyElement;
                           }
                    }
                    else{
                        cout<<" ";
                    }
                }
                cout<<endl;
              }
              }
            };

int main(){
int x1,x2,x3,x4,y1,y2,y3,y4;
cout<<"Enter points: "<<endl;
cin>>x1>>x2>>x3>>x4>>y1>>y2>>y3>>y4;
Rectangle R(x1,x2,x3,x4,y1,y2,y3,y4);
R.dimen();
R.square();
cout<<endl;
cout<<"Perimeter: ";
R.peri();
cout<<"Area: ";
R.area1();
R.setFillCharacter();
R.setPerimeterCharacter();
R.printD();
return 0;
}

