#include "CSVHandler.h"
#include <sstream>
#include <cassert>

CSVHandler::CSVHandler(const std::string& _filename)
{
    ReadCSV(_filename);
}

void CSVHandler::ReadCSV(const std::string& _filename)
{
    std::ifstream file(_filename);

    if (!file.is_open())
    {
        std::string error = "Error: File not found: " + _filename;
        assert(false && error.c_str());
        return;
    }

    std::string line;

    while (std::getline(file, line))
    {
        std::vector<std::string> row;
        std::stringstream ss(line);
        std::string cell;

        data.emplace_back(std::vector<std::string>());

        while (std::getline(ss,cell,','))
        {
            data.back().push_back(cell);
        }
    }
}

void CSVHandler::WriteCSV(const std::string& _filename)
{
}

