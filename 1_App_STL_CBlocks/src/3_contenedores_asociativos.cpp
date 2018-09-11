#include <iostream>
#include <set>
#include <map>
#include <sstream>

void ej_set() {
    using namespace std;

    set<int> miSet;
    for (int i = 0; i < 5; i++) {
        miSet.insert(i * 10);
    }
    miSet.insert(10); // No inserta

    set<int>::iterator it = miSet.begin();
    while (it != miSet.end()) {
        cout << *it << endl;
        it++;
    }
    cout << endl;
}

void ej_map() {
    using namespace std;

    map<int, string> miMap;
    for (int i = 0; i < 7; i++) {
        stringstream sstr;
        sstr << "Soy el " << i;
        miMap.insert(pair<int, string>(i, sstr.str()));
    }
    map<int, string>::iterator ii = miMap.begin();
    while (ii != miMap.end()) {
        cout << (*ii).first << ": " << (*ii).second << endl;
        ii++;
    }
    cout << "Segundo elemento: " << miMap[1];
    cout << endl;
}

void ej_map_iterador() {
    using namespace std;
    map<string, string> miMap;
    miMap.insert(pair<string, string>("<1>", "UNO"));
    miMap["<2>"] = "DOS";
    miMap["<3>"] = "TRES";
    miMap.insert(pair<string, string>("<4>", "cuatro"));

    map<string, string>::iterator ii = miMap.begin();
    while (ii != miMap.end()) {
        cout << (*ii).first << ": " << (*ii).second << endl;
        ii++;
    }
}
