#include <iostream>
#include <string>
#include "rang.hpp"

class Logger {
    public:
        void WARNING(std::string group, std::string content) {
            std::cout << rang::fg::yellow << "INFO" << rang::fg::reset
                << rang::style::bold << "  => " << rang::style::reset
                << "[" << group << "]"
                << rang::style::bold << " => " << rang::style::reset
                << content << std::endl;
        }

        void INFO(std::string group, std::string content) {
            std::cout << rang::fg::blue << "INFO" << rang::fg::reset
                << rang::style::bold << "  => " << rang::style::reset
                << "[" << group << "]"
                << rang::style::bold << " => " << rang::style::reset
                << content << std::endl;
        }
        
        void ERROR(std::string group, std::string content) {
            std::cout << rang::fg::red << "INFO" << rang::fg::reset
                << rang::style::bold << "  => " << rang::style::reset
                << "[" << group << "]"
                << rang::style::bold << " => " << rang::style::reset
                << content << std::endl;
        }

        void SUCESS(std::string group, std::string content) {
            std::cout << rang::fg::green << "INFO" << rang::fg::reset
                << rang::style::bold << "  => " << rang::style::reset
                << "[" << group << "]"
                << rang::style::bold << " => " << rang::style::reset
                << content << std::endl;
        }
};

class Create {
    public:
        void Directories() {
            Logger log;
            log.INFO(__func__ , "Creating Directories");
            log.SUCESS(__func__ , "Created Directories");
            log.INFO(__func__, "Downloading scripts");
            log.SUCESS(__func__ , "Downloaded Directories");
            log.INFO(__func__, "Downloading configs");
            log.SUCESS(__func__ , "Created Directories");
        }
};