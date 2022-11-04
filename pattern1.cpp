#include<bits/stdc++.h>
using namespace std;
int main(){
    //half Pyramid
   /* int n=7;
    for(int row=0;row<n;row++){
        for(int col=0;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;
    }*/
    // inverted half pyramid
    /*
    int n=5;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        for(int spaces=0;spaces<row;spaces++){
            cout<<" ";
        }
        cout<<endl;
    }
    */
    //Holow inverted Pyramid
    /*int n=5;
    for(int row=0;row<n;row++){
        /* 2choice h
        * 1st or last * ke liye
        * staring or last low print ke liye
        */
       /*
       if(row==0 || row==n-1){
        for(int i=0;i<n-row;i++){
            cout<<"*";
        }
       }
        else{
            cout<<"*";
            for(int i=0;i<n-row-1;i++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
       
    }
    */
// full Pyramid

/*int n=10;
for(int row=0;row<n;row++){
    //spaces
    for(int space=0;space<n-row;space++){
        cout<<" ";
    }

    // star
    for(int i=0;i<row;i++){
        cout<<"* ";
    }
    cout<<endl;

}
*/
//inverted full pyramid
/*
int n=10;
for(int row=1;row<=n;row++){
    //space
    for(int i=1;i<=row-1;i++){
        cout<<" ";
    }

    //star
    for(int i=1;i<=n-row+1;i++){
        cout<<" *";
    }
    cout<<endl;
}
*/
//Hollow Full pyramid
/*
int n=5;

for(int row=1;row<=n;row++){
    if(row==1 || row==n){
        for(int i=1;i<=row;i++){
            cout<<" *";
        }
    }
    else{
        cout<<" *";
        for(int spaces=1;spaces<=row-1;spaces++){
            cout<<" ";
        }
        cout<<" *";
    }
    cout<<endl;
}
*/
//half Pyramid
/*
int n=10;
for(int row=1;row<=n;row++){
    for(int col=1;col<=row;col++){
        cout<<col<<" ";
    }
    cout<<endl;
}
*/
//inverted half pyramid
/*
int n=5;
for(int row=1;row<=n;row++){
    for(int col=1;col<=n-row+1;col++){
        cout<<col<<" ";
    }
    cout<<endl;
}
*/
//hollow half pyramid
/*
int n=10;
for(int row=1;row<=n;row++){
    if(row==n){
        for(int i=1;i<=row;i++){
            cout<<i<<" ";
        }
    }
    else 
    for(int col=1;col<=row;col++){
        if(col==1 || col==row){
            cout<<col<<" ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
*/

    return 0;
}