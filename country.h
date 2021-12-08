//Author: Hedaya Khalif
//Date: 2020-10-07

#pragma once
#include <string>
using namespace std;

class Country {
public:
    Country();

    void display();

    //Getters and Setters
    const string getCountryName() const;

    void setCountryName(string countryName);

    const string getCountryCode() const ;

    void setCountryCode(string countryCode);

    const int getNewRecovered() const ;

    void setNewRecovered(int newRecovered);

    const int getNewConfirmed() const ;

    void setNewConfirmed(int newConfirmed);

    const int getNewDeaths() const ;

    void setNewDeaths(int newDeaths);

    const int getTotalConfirmed() const ;

    void setTotalConfirmed(int totalConfirmed);

    const int getTotalRecovered() const ;

    void setTotalRecovered(int totalRecovered);

    const int getTotalDeaths() const ;

    void setTotalDeaths(int totalDeaths);

private:
    string countryName;
    string countryCode;
    int newRecovered;
    int newConfirmed;
    int newDeaths;
    int totalConfirmed;
    int totalRecovered;
    int totalDeaths;
};
