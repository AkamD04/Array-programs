#include <iostream>
using namespace std;

int main() {
    int ch;
    cout << "1.Reverse Array\n2.Matrix Multiplication\n3.Transpose\n";
    cin >> ch;

    if(ch==1) {
        int a[100],n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=n-1;i>=0;i--) cout<<a[i]<<" ";
    }

    else if(ch==2) {
        int a[10][10],b[10][10],c[10][10]={0};
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;

        for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++) cin>>a[i][j];

        for(int i=0;i<r2;i++)
            for(int j=0;j<c2;j++) cin>>b[i][j];

        for(int i=0;i<r1;i++)
            for(int j=0;j<c2;j++)
                for(int k=0;k<c1;k++)
                    c[i][j]+=a[i][k]*b[k][j];

        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++) cout<<c[i][j]<<" ";
            cout<<endl;
        }
    }

    else if(ch==3) {
        int a[10][10],r,c;
        cin>>r>>c;

        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++) cin>>a[i][j];

        for(int j=0;j<c;j++) {
            for(int i=0;i<r;i++) cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }

    return 0;
}