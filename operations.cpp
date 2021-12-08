//Author: Hedaya Khalif
//Date: 2020-10-07

#include<iostream>
#include "operations.h"
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define width_ 100

int _mode = 0;

bool cmpTotalConfirmed(const Country& a, const Country& b){
    if(_mode == 1)
        return a.getTotalConfirmed() < b.getTotalConfirmed();
    return a.getTotalConfirmed() > b.getTotalConfirmed();
}

void displayTotalConfirmed(vector<Country> countries, int mode){
    int width_num;
    //ascending
    if(mode == 1)
        width_num = countries[9].getTotalConfirmed()/width_;
    else
        width_num = countries[0].getTotalConfirmed()/width_;

    if(!width_num)
        width_num = 1;

    for(int i = 0; i < 10; i++){
        cout<<countries[i].getCountryCode()<<" | ";
        for(int j = 0; j < countries[i].getTotalConfirmed()/width_num; j++){
            cout<<"#";
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Total Confirmed Cases; Each # is approx. "<<width_num<<" cases"<<endl;
}

void Operations::sortByTotalConfirmed(vector<Country>& countries, int mode){
    _mode = mode;
    sort(countries.begin(), countries.end(), cmpTotalConfirmed);
    displayTotalConfirmed(countries, mode);

}


bool cmpTotalRecovered(const Country& a, const Country& b){
    if(_mode == 1)
        return a.getTotalRecovered() < b.getTotalRecovered();
    return a.getTotalRecovered() > b.getTotalRecovered();
}

void displayTotalRecovered(vector<Country> countries, int mode){
    int width_num;
    //ascending
    if(mode == 1)
        width_num = countries[9].getTotalRecovered()/width_;
    else
        width_num = countries[0].getTotalRecovered()/width_;

    if(!width_num)
        width_num = 1;

    for(int i = 0; i < 10; i++){
        cout<<countries[i].getCountryCode()<<" | ";
        for(int j = 0; j < countries[i].getTotalRecovered()/width_num; j++){
            cout<<"#";
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Total Recovered Cases; Each # is approx. "<<width_num<<" cases"<<endl;
}

void Operations::sortByTotalRecovered(vector<Country>& countries, int mode){
    _mode = mode;
    sort(countries.begin(), countries.end(), cmpTotalRecovered);
    displayTotalRecovered(countries, mode);

}


bool cmpTotalDeaths(const Country& a, const Country& b){
    if(_mode == 1)
        return a.getTotalDeaths() < b.getTotalDeaths();
    return a.getTotalDeaths() > b.getTotalDeaths();
}

void displayTotalDeaths(vector<Country> countries, int mode){
    int width_num;
    //ascending
    if(mode == 1)
        width_num = countries[9].getTotalDeaths()/width_;
    else
        width_num = countries[0].getTotalDeaths()/width_;

    if(!width_num)
        width_num = 1;

    for(int i = 0; i < 10; i++){
        cout<<countries[i].getCountryCode()<<" | ";
        for(int j = 0; j < countries[i].getTotalDeaths()/width_num; j++){
            cout<<"#";
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"Total Deaths Cases; Each # is approx. "<<width_num<<" cases"<<endl;
}

void Operations::sortByTotalDeaths(vector<Country>& countries, int mode){
    _mode = mode;
    sort(countries.begin(), countries.end(), cmpTotalDeaths);
    displayTotalDeaths(countries, mode);

}

bool cmpNewConfirmed(const Country& a, const Country& b){
    if(_mode == 1)
        return a.getNewConfirmed() < b.getNewConfirmed();
    return a.getNewConfirmed() > b.getNewConfirmed();
}

void displayNewConfirmed(vector<Country> countries, int mode){
    int width_num;
    //ascending
    if(mode == 1)
        width_num = countries[9].getNewConfirmed()/width_;
    else
        width_num = countries[0].getNewConfirmed()/width_;

    if(!width_num)
        width_num = 1;

    for(int i = 0; i < 10; i++){
        cout<<countries[i].getCountryCode()<<" | ";
        for(int j = 0; j < countries[i].getNewConfirmed()/width_num; j++){
            cout<<"#";
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"New Confirmed Cases; Each # is approx. "<<width_num<<" cases"<<endl;
}

void Operations::sortByNewConfirmed(vector<Country>& countries, int mode){
    _mode = mode;
    sort(countries.begin(), countries.end(), cmpNewConfirmed);
    displayNewConfirmed(countries, mode);

}

bool cmpNewRecovered(const Country& a, const Country& b){
    if(_mode == 1)
        return a.getNewRecovered() < b.getNewRecovered();
    return a.getNewRecovered() > b.getNewRecovered();
}

void displayNewRecovered(vector<Country> countries, int mode){
    int width_num;
    //ascending
    if(mode == 1)
        width_num = countries[9].getNewRecovered()/width_;
    else
        width_num = countries[0].getNewRecovered()/width_;

    if(!width_num)
        width_num = 1;

    for(int i = 0; i < 10; i++){
        cout<<countries[i].getCountryCode()<<" | ";
        for(int j = 0; j < countries[i].getNewRecovered()/width_num; j++){
            cout<<"#";
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"New Recovered Cases; Each # is approx. "<<width_num<<" cases"<<endl;
}

void Operations::sortByNewRecovered(vector<Country>& countries, int mode){
    _mode = mode;
    sort(countries.begin(), countries.end(), cmpNewRecovered);
    displayNewRecovered(countries, mode);

}

bool cmpNewDeaths(const Country& a, const Country& b){
    if(_mode == 1)
        return a.getNewDeaths() < b.getNewDeaths();
    return a.getNewDeaths() > b.getNewDeaths();
}

void displayNewDeaths(vector<Country> countries, int mode){
    int width_num;
    //ascending
    if(mode == 1)
        width_num = countries[9].getNewDeaths()/width_;
    else
        width_num = countries[0].getNewDeaths()/width_;

    if(!width_num)
        width_num = 1;

    for(int i = 0; i < 10; i++){
        cout<<countries[i].getCountryCode()<<" | ";
        for(int j = 0; j < countries[i].getNewDeaths()/width_num; j++){
            cout<<"#";
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------------"<<endl;
    cout<<"New Deaths ; Each # is approx. "<<width_num<<" cases"<<endl;
}

void Operations::sortByNewDeaths(vector<Country>& countries, int mode){
    _mode = mode;
    sort(countries.begin(), countries.end(), cmpNewDeaths);
    displayNewDeaths(countries, mode);

}
