#include <iostream>

using namespace std;

class nokta{
private:
    float x;
    float y;
public:
    nokta(float xKord,float yKord){
        x=xKord;
        y=yKord;
    }
    
    nokta(int xKord,int yKord){
        x=xKord;
        y=yKord;
    }
    
    void goruntule(){
        cout<<"Noktanin kordinatlari = "<<"("<<x<<","<<y<<")"<<endl;
    }
    
    void karsilastir(nokta n){
        if(x==n.x && y==n.y)
            cout<<"Iki nokta ayni"<<endl;
        else
            cout<<"Iki nokta ayni degil"<<endl;
    }
    
    float uzaklık(nokta n){
        float dx = x-n.x;
        float dy = y-n.y;
        
        return sqrt(pow(dx,2)+pow(dy,2));
    }
    
    nokta OrtaNokta(nokta n){
        float ox = (x+n.x)/2;
        float oy = (y+n.y)/2;
        
        return nokta(ox,oy);
    }
    
};

int main(int argc, const char * argv[]) {
    
    int x1,y1,x2,y2;
    cout<<"Birinci nokta x:";
    cin>>x1;
    cout<<"Birinci nokta y:";
    cin>>y1;
    cout<<"Ikinci nokta x:";
    cin>>x2;
    cout<<"Ikinci nokta y:";
    cin>>y2;
    nokta n1(x1,y1);
    nokta n2(x2,y2);
    
    n1.goruntule();
    n2.goruntule();
    
    n1.karsilastir(n2);
    
    cout<<"Iki nokta arasi uzaklik = "<<n1.uzaklık(n2)<<endl;
    
    nokta Orta = n1.OrtaNokta(n2);
    
    Orta.goruntule();
    
    return 0;
}
