//Author: Hedaya Khalif
//Date: 2020-10-07

#pragma once
#include <string>
#include "country.h"
using namespace std;
using std::vector;

class Dataset
{
public:
    Dataset();
    void ingestData(vector<Country>& countries);
private:
    Country country;
};
