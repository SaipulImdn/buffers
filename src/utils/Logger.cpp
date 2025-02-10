#include "Logger.hpp"
#include <fstream>
#include <iostream>
#include <ctime>
#include <iomanip>

void Logger::log(const std::string& message) {
    std::ofstream logFile("logs/auto_clean.log", std::ios::app);
    
    if (!logFile) {
        std::cerr << "Gagal membuka file log!" << std::endl;
        return;
    }

    std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);

    logFile << "[" << std::put_time(&tm, "%Y-%m-%d %H:%M:%S") << "] " << message << std::endl;
    logFile.close();
}
