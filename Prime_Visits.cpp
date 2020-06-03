{\rtf1\ansi\ansicpg1252\cocoartf1671
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 \
// PMO gives two random numbers a & b to the Prime Minister.\
// PM Modi wants to visit all countries between a and b (inclusive) , \
// However due to shortage of time he can't visit each and every country ,\
// So PM Modi decides to visit only those countries,for which country number has two divisors. \
// So your task is to find number of countries Mr.Modi will visit.\
\
\
\
\
\
#include<bits/stdc++.h>\
# define ll long long\
\
using namespace std;\
\
int main() \
\{\
    \
    \
    int arr[100005];\
\
    // We can only set 0 and 1 via memset\
    memset(arr,0,sizeof(arr));\
        \
    for(ll i=3;i<100005;i+=2)\{\
        arr[i]=1;\
    \}\
        \
    for(ll i=3;i<100005;i+=2)\{\
        if(arr[i]==1)\{\
            for(ll j=i*i;j<100005;j+=i)\{\
                arr[j]=0;\
            \}\
        \}\
    \}\
    \
    arr[2]=1;\
    arr[0]=0;\
    arr[0]=0;\
    \
    \
    int cums[100005];\
    memset(cums,0,sizeof(cums));\
    \
    for(ll i=0;i<100005;i++)\{\
        if(arr[i]==1)\{\
            cums[i]=cums[i-1]+1;\
        \}\
        else\{\
            cums[i]=cums[i-1];\
        \}\
    \}\
\
    \
    ll t;\
    cin>>t;\
    \
    \
    \
    while(t--)\
    \{\
        ll a,b;\
        cin>>a>>b;\
        \
        cout<<cums[b]-cums[a-1]<<endl;\
        \
    \}\
    \
\}}