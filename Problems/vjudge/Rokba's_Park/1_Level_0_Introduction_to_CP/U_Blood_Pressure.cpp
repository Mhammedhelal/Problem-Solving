    #include<iostream>
    #include<iomanip>
    using namespace std;

    int main()
    {
        float a,b,c;
        cin>>a>>b;
        c=(a-b)/3 + b;
        cout<<fixed<<setprecision(7)<<c<<endl;
    }