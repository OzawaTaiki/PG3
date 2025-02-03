#pragma once

#include <string>
#include <vector>
#include <fstream>

class CSVHandler
{
public:
    CSVHandler() = default;
    CSVHandler(const std::string& _filename);
    ~CSVHandler() = default;

    void ReadCSV(const std::string& _filename);
    void WriteCSV(const std::string& _filename);

    std::vector<std::vector<std::string>> GetData() const { return data; }

private:

    std::vector<std::vector<std::string>> data;



};