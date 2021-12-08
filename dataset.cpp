//Author: Hedaya Khalif
//Date: 2020-10-07

#include<iostream>
#include "dataset.h"
#include "country.h"
#include<vector>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;
using std::vector;

Dataset::Dataset(){}

void Dataset::ingestData(vector<Country>& countries){


    //file pointer
    fstream fin;

    fin.open("summary.csv", ios::in);

    vector<string> row;
    Country country;
    string line, word, temp;
    int count = 0;

    //flushing first line
    getline(fin,line);

    //reading
    while (getline(fin,line)) {
        count++;
        row.clear();

        //country name
        int indexOfComma = line.substr(1,line.size()-1).find("\"");
        string countryName = line.substr(1, indexOfComma);
        string remainingLine = line.substr(indexOfComma + 3, line.size() - 1);

        // cout<<countryName<<"x"<<remainingLine<<endl;

        stringstream ss(remainingLine);

        row.push_back(countryName);
        while(ss.good()){
            getline(ss,word, ',');
            // cout<<word<<"\n";
            if(word.find("\"") == 0)
                word = word.substr(1,word.size()-2);
            row.push_back(word);
            // cout<<word<<endl;
        }

        country.setCountryName(row[0]);
        country.setCountryCode(row[1]);
        country.setNewConfirmed(stoi(row[3]));
        country.setNewDeaths(stoi(row[4]));
        country.setNewRecovered(stoi(row[5]));
        country.setTotalConfirmed(stoi(row[8]));
        country.setTotalDeaths(stoi(row[9]));
        country.setTotalRecovered(stoi(row[10]));

        countries.push_back(country);

    }


}
