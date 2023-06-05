#include "Save.h"

void Save::SaveToFile() {
    //позже
}

void Save::LoadFromFile() {
    xml_document doc;

    if (!doc.load_file("sample.xml")) cout <<"ЛОХ";

    xml_node tools = doc.child("Universe").child("Planets");

    for (xml_node_iterator it = tools.begin(); it != tools.end(); ++it){
        cout << "Planets:";
        for (xml_attribute_iterator ait = it->attributes_begin();
            ait != it->attributes_end(); ++ait){
            cout << " " << ait->name() << "=" << ait->value();
        }
        cout << endl;
    }
    cout << endl;
}
