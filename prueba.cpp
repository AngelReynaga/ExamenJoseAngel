#include <bits/stdc++.h>
using namespace std;

class Rectangulo
{
private:
    int b,h;
public:
    int x,y;
    Rectangulo();
    Rectangulo(int X, int Y);
    Rectangulo(int X, int Y, int B, int H);
    int getAncho();
    void setAncho(int B);
    int getAltura();
    void setAltura(int H);
    int getArea();
    void intersecta(Rectangulo rect);

};

int main()
{
    Rectangulo r1, r2(-2,3), r3(-3,5,12,18);
    r1.x=-1;
    r1.y=-2;
    r1.setAncho(5);
    r1.setAltura(3);
    r2.setAncho(1);
    r2.setAltura(2);
    cout<<r1.getArea()<<'\n';
    cout<<r2.getArea()<<'\n';
    cout<<r3.getArea()<<'\n';
    r1.intersecta(r2);
    r1.intersecta(r3);
    r2.intersecta(r3);
}
Rectangulo::Rectangulo()
{
    x=0;
    y=0;
    b=0;
    h=0;
}
Rectangulo::Rectangulo(int X, int Y)
{
    x=X;
    y=Y;
    b=0;
    h=0;
}
Rectangulo::Rectangulo(int X, int Y, int B, int H)
{
    x=X;
    y=Y;
    if(B<0) b=0;
    else b=B;
    if(H<0) h=0;
    else h=H;
}
int Rectangulo::getAncho()
{
    return b;
}
void Rectangulo::setAncho(int B)
{
    if(B<0) b=0;
    else b=B;
}
int Rectangulo::getAltura()
{
    return h;
}
void Rectangulo::setAltura(int H)
{
    if(H<0) h=0;
    else h=H;
}
int Rectangulo::getArea()
{
    return b*h;
}
void Rectangulo::intersecta(Rectangulo rect)
{
    bool I=1;
    if(x>(rect.x+rect.getAncho())) I=0;
    else if(rect.x>(x+b)) I=0;
    else if(y>(rect.y+rect.getAltura())) I=0;
    else if(rect.y>(y+h)) I=0;
    if(I) cout<<"los rectangulos intersectan";
    else cout<<"los rectangulos no intersectan";
    cout<<'\n';
}
