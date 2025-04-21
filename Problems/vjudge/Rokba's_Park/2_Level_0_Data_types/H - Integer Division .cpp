    #include<iostream>
    using namespace std;

    int main()
    {
        long long x;
        cin>>x;
        long long res = x / 10;
        if (x < 0 && x % 10 != 0)
            res--;
        cout<< res <<"\n";

        return 0;
    }