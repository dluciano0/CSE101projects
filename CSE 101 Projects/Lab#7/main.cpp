#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "array.h"


using namespace std;

int main()
{
    ifstream in_stream;
    ofstream out_stream;
    const int NUM_VALUES = 13;

    double salesArray[NUM_VALUES];


    open_files(in_stream, out_stream);

    fill_array(in_stream, salesArray, NUM_VALUES);

    sort_array(salesArray, NUM_VALUES);

    output_sales_data(out_stream, salesArray, NUM_VALUES);


    in_stream.close();
    out_stream.close();

    return 0;
}
