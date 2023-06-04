#include "Save.h"

void Save::SaveToFile() {
    ofstream Saving;
    Saving.open("Books.xml", ios::app);
    if (Saving.is_open()) {
        Saving << "Added a string!" << endl;
    }
    Saving.close();
    cout << "Added a string!" << endl;
}

void Save::LoadFromFile() {
    string Data;

    ifstream Uploading("Books.xml", ios::app);
    if (Uploading.is_open())
    {
        while (getline(Uploading, Data))
        {
            cout << Data << endl;
        }
    }
    Uploading.close();
}