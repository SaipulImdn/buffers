#include "CacheCleaner.hpp"
#include "../utils/Logger.hpp"
#include <cstdlib>

bool CacheCleaner::clear() {
    int result = system("sync; echo 3 > /proc/sys/vm/drop_caches");
    
    if (result == 0) {
        Logger::log("Pembersihan cache berhasil.");
        return true;
    } else {
        Logger::log("Pembersihan cache gagal.");
        return false;
    }
}
