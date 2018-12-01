#include <iostream>
#include <fstream>
#include "Keeper.h"
#include "Boat.h"
#include "Sailboat.h"
#include "Submarine.h"

using namespace std;

const string filename = "text.txt";

int main() {

    Keeper *keeper = new Keeper();
    bool fl = true;
    int mode;

    while (fl) {
        cout << "0 - write to file" << endl;
        cout << "1 - read to file" << endl;
        cout << "2 - add new element" << endl;
        cout << "3 - remove element" << endl;
        cout << "4 - print keeper" << endl;
        cout << "5 - exit" << endl;

        cin >> mode;
        switch (mode) {
            case 0: {
                keeper->write(filename);
                break;
            }
            case 1: {
                cout << "herefdla" << endl;
                ifstream file;
                file.open(filename);
                int count;
                file >> count;
                cout << "count" << count;
                string type;
                for (int i = 0; i < count; ++i) {
                    file >> type;
                    if (type == "boat") {
                        int length, peoples, speed;
                        file >> length;
                        file >> peoples;
                        file >> speed;
                        string to, material, gohar;
                        file.ignore();
                        getline(file, to);
                        file.ignore();
                        getline(file, material);
                        file.ignore();
                        getline(file, gohar);
                        Boat *b = new Boat(length, peoples, speed, to, material, gohar);
                        keeper->add(*b);
                    } else if (type == "sailboat") {
                        int length, peoples, speed;
                        file >> length;
                        file >> peoples;
                        file >> speed;
                        string type;
                        file >> type;
                        Sailboat *s = new Sailboat(length, peoples, speed, type);
                        keeper->add(*s);
                    } else if (type == "submarine") {
                        int length, peoples, speed;
                        file >> length;
                        file >> peoples;
                        file >> speed;
                        int width;
                        file >> width;
                        Submarine *sb = new Submarine(length, peoples, speed, width);
                        keeper->add(*sb);
                    }
                }
                file.close();
                break;
            }
            case 2: {
                int length;
                int peoples;
                int speed;
                int selected;
                cout << "Enter type: 1 - Boat, 2 - Sailboat, 3 - Submarine" << endl;
                cin >> selected;
                cout << "Length" << endl;
                cin >> length;
                cout << "Peoples: " << endl;
                cin >> peoples;
                cout << "Speed: " << endl;
                cin >> speed;

                switch (selected) {
                    case 1: {
                        string to, material, gohar;
                        cout << "Enter to" << endl;
                        cin >> to;
                        cout << "Enter material" << endl;
                        cin >> material;
                        cout << "Enter gohar" << endl;
                        cin >> gohar;

                        Boat *b = new Boat(length, peoples, speed, to, material, gohar);
                        keeper->add(*b);
                        break;
                    }
                    case 2: {
                        string type;
                        cout << "Enter type " << endl;
                        cin >> type;
                        Sailboat *s = new Sailboat(length, peoples, speed, type);
                        keeper->add(*s);
                        break;
                    }
                    case 3: {
                        int width;
                        cout << "Enter width" << endl;
                        cin >> width;
                        Submarine *sub = new Submarine(length, peoples, speed, width);
                        keeper->add(*sub);
                        break;
                    }
                }
                break;
            }
            case 3: {
                cout << "enter deleting index" << endl;
                int index;
                cin >> index;
                keeper->remove(index);
                break;
            }
            case 4: {
                keeper->print();
                break;
            }
            case 5: {
                fl = false;
                break;
            }
        }
    }

    delete keeper;
    return 0;
}