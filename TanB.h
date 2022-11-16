#ifndef TanB
#define TanB

#include<bits/stdc++.h>
using namespace std;

template<typename T>
ostream& print(std::ostream &out, T const &val)
{ 
    return (out << val << " "); 
}

template<typename T1, typename T2>
ostream& print(std::ostream &out, std::pair<T1, T2> const &val) 
{ 
    return (out <<" {" << val.first << " " << val.second << "} "); 
}

template<template<typename, typename...> class T, typename... Args>
ostream& operator<<(std::ostream &out, T<Args...> const &cont) 
{
    cout<<"[ ";
    for(auto elem : cont) 
        print(out, elem);
    cout<<"]"; 
  return out;
}


#endif