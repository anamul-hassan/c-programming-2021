#include<iostream>
#include<math.h>
using namespace std;

class SimpleCalculator{
    protected:
        float i,j;
    public:
        void setdata(int p,int q)
        {
            i=p;
            j=q;
        }
        void getdata(void)
        {
            cout<<"The addition is "<<i+j<<endl;
            cout<<"The subtraction is "<<i-j<<endl;
            cout<<"The multiplication is "<<i*j<<endl;
            cout<<"The division is "<<i/j<<endl;
        }
};
class ScientificCalculator:public SimpleCalculator
{
    public:
        void calculations(void)
        {
            float p,q;
            p=i*3.14/180;
            q=j*3.14/180;
            cout<<"The sine of "<<i<<" degrees is "<<sin(p)<<endl;
            cout<<"The cosine of "<<i<<" degrees is "<<cos(p)<<endl;
            cout<<"The sine of "<<j<<" degrees is "<<sin(q)<<endl;
            cout<<"The cosine of "<<j<<" degrees is "<<cos(q)<<endl;
        };
};
class HybridCalculator: public ScientificCalculator
{
};
int main()
{
    float i,j,l,m,s,t;
    cout<<"Enter the two numbers for simple calculation: "<<endl;
    cin>>i>>j;
    SimpleCalculator A;
    A.setdata(i,j);
    A.getdata();
    cout<<"Enter the two angles in degrees for scientific calculation: "<<endl;
    cin>>l>>m;
    ScientificCalculator B;
    B.setdata(l,m);
    B.calculations();
    cout<<"Enter the two numbers for hybrid calculator: "<<endl;
    cin>>s>>t;
    HybridCalculator C;
    C.setdata(s,t);
    C.getdata();
    C.calculations();
    return 0;
}

/*In the above example :
1.Multiline inheritance is used.
2.Visibility mode is 'public' for both the inheritances.
3.Hybrid Calculator object 'C' is created above and used too.
4.Since public visibility mode is used, the protected members are inherited as protected whereas public members are inherited as public in the corresponding derived classes */