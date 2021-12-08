//Author: Hedaya Khalif
//Date: 2020-10-07

#pragma once
#include <string>
#include "dataset.h"
using namespace std;

class Operations
{
public:
    void sortByTotalConfirmed(vector<Country>& countries, int mode);
    void sortByTotalRecovered(vector<Country>& countries, int mode);
    void sortByTotalDeaths(vector<Country>& countries, int mode);
    void sortByNewConfirmed(vector<Country>& countries, int mode);
    void sortByNewRecovered(vector<Country>& countries, int mode);
    void sortByNewDeaths(vector<Country>& countries, int mode);


};
