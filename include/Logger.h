#pragma once
#include <fstream>
#include <string>

class Logger {
public:
    Logger(const std::string& filename) {
        logFile.open(filename, std::ios::app);
    }

    ~Logger() {
        if (logFile.is_open()) {
            logFile.close();
        }
    }

    void log(const std::string& message) {
        if (logFile.is_open()) {
            logFile << message << std::endl;
        }
    }

private:
    std::ofstream logFile;
};
