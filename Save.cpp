#include "Save.h"

void Save::SaveToFile() {
    ofstream Saving;
    Saving.open("Books.xml", ios::app);
    if (Saving.is_open()) {
        Saving << "Written to the XML!" << endl;
    }
    Saving.close();
    cout << "Записано!" << endl;
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