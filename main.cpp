//Author: Hedaya Khalif
//Date: 2020-10-07

#include <iostream>
#include <stdexcept>
#include <exception>
#include<vector>
#include "operations.h"

using namespace std;

int displayMenu_1();
int displayMenu_2();



int main() {

    Dataset dataset;
    vector<Country> countries;
    dataset.ingestData(countries);

    Operations operation;
    bool done = false;
    while (!done) {
        int selectionField = displayMenu_1();
        int selectionSorting;
        if(selectionField != 0 && selectionField >=1 && selectionField <=6 )
            selectionSorting = displayMenu_2();

        if(selectionField == 0)
            break;
        else if(selectionSorting != 1 && selectionSorting != 2){
            cerr << "Unknown command" << endl;
            break;
        }

        switch (selectionField) {
            case 1:
                operation.sortByTotalConfirmed(countries, selectionSorting);
                break;
            case 2:
                operation.sortByTotalRecovered(countries, selectionSorting);
                break;
            case 3:
                operation.sortByTotalDeaths(countries, selectionSorting);
                break;
            case 4:
                operation.sortByNewConfirmed(countries, selectionSorting);
                break;
            case 5:
                operation.sortByNewRecovered(countries, selectionSorting);
                break;
            case 6:
                operation.sortByNewDeaths(countries, selectionSorting);
                break;
            case 0:
                done = true;
                break;
            default:
                cerr << "Unknown command" << endl;
                break;
        }
    }


}

int displayMenu_1() {
    int selectionField;
    cout << endl;
    cout << "COVID - Countries DataBase" << endl;
    cout << "-----------------" << endl;
    cout << "1) Total Confirmed" << endl;
    cout << "2) Total Recovered" << endl;
    cout << "3) Total Deaths" << endl;
    cout << "4) New Confirmed" << endl;
    cout << "5) New Recovered" << endl;
    cout << "6) New Deaths" << endl;
    cout << "0) Quit" << endl;
    cout<<"(enter any of the above number. eg. enter 1 for Total Confirmed cases)"<<endl;
    cout << endl;
    cout << "--->";
    cin >> selectionField;
    return selectionField;
}

int displayMenu_2() {
    int selectionField;
    cout << endl;
    cout << "COVID - Countries DataBase" << endl;
    cout << "-----------------" << endl;
    cout << "1) Sort by ascending order" << endl;
    cout << "2) Sort by descending order" << endl;
    cout << "0) Quit" << endl;
    cout<<"(enter any of the above number. eg. enter 1 for ascending order)"<<endl;
    cout << endl;
    cout << "--->";
    cin >> selectionField;
    return selectionField;
}

