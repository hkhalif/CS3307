//Author: Hedaya Khalif
//Date: 2020-10-07

#include<iostream>
#include "country.h"
using namespace std;

Country::Country(){
    this->countryName = "";
    this->countryCode = "";
    this->newRecovered =  0;
    this->newConfirmed = 0;
    this->newDeaths = 0;
    this->totalConfirmed = 0;
    this->totalRecovered = 0;
    this->totalDeaths =0;
}


void Country::display(){
    cout<<getCountryName()<<" "<<getCountryCode()<<" "<<getNewDeaths()<<" "<<getNewConfirmed()<<" "<<getNewRecovered();
    cout<<" "<<getTotalConfirmed()<<" "<<getTotalRecovered()<<" "<<getTotalDeaths()<<endl;
}

//Getters and Setters
const string Country::getCountryName() const {
    return countryName;
}

void Country::setCountryName(string countryName) {
    this->countryName = countryName;
}

const  string Country::getCountryCode() const {
    return countryCode;
}

void Country::setCountryCode(string countryCode) {
    this->countryCode = countryCode;
}

const int Country::getNewRecovered() const {
    return newRecovered;
}

void Country::setNewRecovered(int newRecovered) {
    this->newRecovered = newRecovered;
}

const int Country::getNewConfirmed() const {
    return newConfirmed;
}

void Country::setNewConfirmed(int newConfirmed) {
    this->newConfirmed = newConfirmed;
}

const int Country::getNewDeaths() const {
    return newDeaths;
}

void Country::setNewDeaths(int newDeaths) {
    this->newDeaths = newDeaths;
}

const int Country::getTotalConfirmed() const {
    return totalConfirmed;
}

void Country::setTotalConfirmed(int totalConfirmed) {
    this->totalConfirmed = totalConfirmed;
}

const  int Country::getTotalRecovered()const  {
    return totalRecovered;
}

void Country::setTotalRecovered(int totalRecovered) {
    this->totalRecovered = totalRecovered;
}

const  int Country::getTotalDeaths() const {
    return totalDeaths;
}

void Country::setTotalDeaths(int totalDeaths) {
    this->totalDeaths = totalDeaths;
}
