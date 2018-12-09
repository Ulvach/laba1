#include <iostream>
#include <fstream>
#include "Keeper.h"
#include "Boat.h"
#include "Sailboat.h"
#include "Submarine.h"

using namespace std;

const string filename = "text.txt";

int main() {
    setlocale(LC_ALL, "Russian");
    
    Keeper *keeper = new Keeper();
    bool fl = true;
    int mode;

    while (fl) {
        cout << "0 - Записать в файл" << endl;
        cout << "1 - Прочитать из файла" << endl;
        cout << "2 - Добавить новый элемент" << endl;
        cout << "3 - Удалить элемент" << endl;
        cout << "4 - Напечатать Keeper" << endl;
        cout << "5 - Выход" << endl;

        cin >> mode;
        switch (mode) {
            case 0: {
                keeper->write(filename);
                break;
            }
            case 1: {
                cout << "Читаю из файла" << endl;
                ifstream file;
                file.open(filename);
                int count;
                file >> count;
                cout << "Количество" << count;
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
                cout << "Введите тип: 1 - Катер, 2 - Парусник, 3 - Подводная лодка" << endl;
                cin >> selected;
                cout << "Длина" << endl;
                cin >> length;
                cout << "Экипаж: " << endl;
                cin >> peoples;
                cout << "Скорость: " << endl;
                cin >> speed;

                switch (selected) {
                    case 1: {
                        string to, material, gohar;
                        cout << "Введите назначение" << endl;
                        cin >> to;
                        cout << "Введите материал" << endl;
                        cin >> material;
                        cout << "Введите ходовые характеристики" << endl;
                        cin >> gohar;

                        Boat *b = new Boat(length, peoples, speed, to, material, gohar);
                        keeper->add(*b);
                        break;
                    }
                    case 2: {
                        string type;
                        cout << "Введите тип " << endl;
                        cin >> type;
                        Sailboat *s = new Sailboat(length, peoples, speed, type);
                        keeper->add(*s);
                        break;
                    }
                    case 3: {
                        int width;
                        cout << "Введите ширину" << endl;
                        cin >> width;
                        Submarine *sub = new Submarine(length, peoples, speed, width);
                        keeper->add(*sub);
                        break;
                    }
                }
                break;
            }
            case 3: {
                cout << "Введите удаляемый индекс" << endl;
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