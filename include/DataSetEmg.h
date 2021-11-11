#pragma once
#ifndef __DataSetEmg__H__
#define __DataSetEmg__H__
#include <string>

class DataSetEmg{

    public:
        void leitorCSV(String pathFile);
        bool escreverCSV(String pathFile);

};

#endif // __DataSetEmg__H__