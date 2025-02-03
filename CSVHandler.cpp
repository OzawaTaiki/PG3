#include "CSVHandler.h"
#include <sstream>
#include <cassert>

CSVHandler::CSVHandler(const std::string& _filename)
{
    ReadCSV(_filename);
}

void CSVHandler::ReadCSV(const std::string& _filename)
{
    std::lock_guard<std::mutex> lock(mutex_);

    ready_ = false;

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

    ready_ = true;
}

void CSVHandler::WriteCSV(const std::string& _filename)
{
}

bool CSVHandler::IsReady()
{
    std::lock_guard<std::mutex> lock(mutex_);
    return ready_;
}

std::vector<std::vector<std::string>> CSVHandler::GetData()
{
    std::lock_guard<std::mutex> lock(mutex_);
    return data;
}

