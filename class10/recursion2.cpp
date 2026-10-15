# include <iostream>
using namespace std;

int cdr(int n)
{
    if(n==0) return 0;

    int rd = cdr(n/10);
    return rd+1;

}

int main()
{
    int n ;
    cin>>n;
    cout<<cdr(n)<<endl;;
}