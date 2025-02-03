#pragma once

#include <string>
#include <vector>
#include <fstream>

#include <mutex>

class CSVHandler
{
public:
    CSVHandler() = default;
    CSVHandler(const std::string& _filename);
    ~CSVHandler() = default;

    void ReadCSV(const std::string& _filename);
    void WriteCSV(const std::string& _filename);

    bool IsReady();

    std::vector<std::vector<std::string>> GetData();

private:

    std::mutex mutex_;

    std::vector<std::vector<std::string>> data;

    bool ready_ = false;



};