#include<iostream>
using namespace std;

int main()
{
    string fests[8][4] = {
        {
            "101",
            "Hornbill Festival",
            "is celebrated every year from 1st to 10th December",
            "All Naga Tribes",
        },
        {
            "102",
            "Ngada Festival",
            "is celebrated in the last week of November every year",
            "Rengma Tribe",
        },
        {
            "103",
            "Hega Festival",
            "is celebrated in the month of February from 10th to 15th every year",
            "Zeliang Tribe",
        },
        {
            "104",
            "Mimkutis Festival",
            "is celebrated on 17th of Janauary every year",
            "Kukis Tribe",
        },
        {
            "105",
            "Bushu Festival",
            "is celebrated during the last week of Janauary",
            "Kachari Tribe",
        },
        {
            "106",
            "Yemshe Festival",
            "is commonly celebrated on the 5th of October every year",
            "Pochuris Nagas",
        },
        {
            "107",
            "Naknyulum Festival",
            "is celebrated on 29th, 30th and 31st of July every year",
            "Chang Naga Tribe",
        },
        {
            "108",
            "Tsukhenyie Festival",
            "is celebrated on the 6th of March every year",
            "Chakhesang Tribe",
        },
    };

    while (1){
        cout << "\n\nFestival Code Menu: " << endl;
        for (int i = 0; i < 8; i++){
            cout << "   " << fests[i][0] << "    for  " << fests[i][1] << endl;
        }
        cout << "   999    for  exit" << endl;

        int ch;
        cout << "Enter Festival Code: ";
        cin >> ch;

        if(ch == 999)
            break;
        for (int i = 0; i < 8; i++){
            if (fests[i][0] == to_string(ch)){
                cout << "\n" << fests[i][1] << " " << fests[i][2] << " by " << fests[i][3] << endl;
            }   
        }
    }

    return 0;
}

