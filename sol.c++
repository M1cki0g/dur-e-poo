#include <iostream>

using namespace std;

class duree{
int h;
int m;
int s;
public:
    duree(int h , int m , int s):h(0),m(0),s(0){
        this->h = h;
        this->m = m;
        this->s = s;
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }

    duree(const duree& e){
    h = e.h;
    m = e.m;
    s = e.s;
    }

    bool operator ==(const duree& a){
    return (this->h == a.h && this->m == a.m && this->s == a.s);
    }

    bool operator !=(const duree& a ){
    return (this->h != a.h || this->m != a.m || this->s != a.s);
    }

    bool operator <(const duree& a , const duree& a){
    if(this->h < a.h)

    }

    bool operator >=(const duree& a){
    return (this->h >= h==a.h || this->m >= m==a.m || this->s >= s==a.s);
    }
};

