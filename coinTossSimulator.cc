#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int num = 0;
    int heads = 0;
    int tails = 0;
    char op;
    ofstream ofile;
    cout << "Do you want to store the data(y/n) \n";
    cin >> op;

    if(op == 'y' || op == 'Y')
    {
        string filename;
        cout << "Enter filename : \n";
        cin >> filename;
        ofile.open(filename.c_str());
    }
    cout << "How many flips: \n";
    cout << "0 as tails \n";
    cout << "1 as heads \n";
    cin >> num;

    vector <int> total(num);

    for(int i = 0; i < total.size(); i++)
    {
        total[i] = rand() % 2;
        if(total[i] == 0)
        {
            if(op == 'y' || op == 'Y')
            {
                ofile << "Tails" << total[i] << " ";
                
            }
            tails++;
            
        }
        else if(total[i] == 1)
        {
            if(op == 'y' || op == 'Y')
            {
                ofile << "Heads" << total[i] << " ";
                
            }
            heads++;
            
        }
    }

    cout << "Total: " << total.size() << endl;
    cout << "Heads: " << heads << endl
         << "Tails: " << tails << endl;

    ofile.close();

    return 0;
}