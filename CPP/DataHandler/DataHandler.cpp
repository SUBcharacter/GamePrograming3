#include "DataHandler.h"

int DataHandler::LoadItems(const string& filename, Item items[])
{
    ifstream file(filename);

    if (!file.is_open()) // 파일이 열리지 않았다면
    {
        cerr << "파일을 열지 못했습니다: " << filename << endl;
        return 0;
    }

    int itemCount = 0;
    string line;

    // item 항목을 읽어와야 한다.
    while (getline(file, line) && itemCount < MAX_ITEMS)
    {
        istringstream iss(line);
        int index;
        string name;
        int price;
        int typeCount;
        int amount;

        // 데이터 파싱
        if (iss >> index >> name >> price >> typeCount >> amount)
        {
            ItemDataType newType(typeCount, amount);
            items[itemCount++] = Item(index, name, price, newType);
        }
        else
        {
            cerr << "유효하지 않은 데이터가 존재합니다" << line << endl;
        }
    }

    file.close();   
    return itemCount;
}
