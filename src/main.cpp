#include "services/CacheCleaner.hpp"
#include "utils/Logger.hpp"
#include <iostream>
#include <thread>
#include <chrono>

void runCleaner() {
    while (true) {
        std::cout << "Membersihkan buffers dan cache...\n";
        if (CacheCleaner::clear()) {
            std::cout << "Pembersihan berhasil!\n";
        } else {
            std::cout << "Pembersihan gagal!\n";
        }
        
        std::cout << "Menunggu 2 jam sebelum membersihkan lagi...\n";
        std::this_thread::sleep_for(std::chrono::hours(2));
    }
}

int main() {
    std::cout << "Program auto cache cleaner berjalan...\n";
    Logger::log("Program auto cache cleaner dimulai.");
    runCleaner();
    return 0;
}
