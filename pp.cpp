#include <iostream>
#include <cstdlib>
#include <filesystem>


// Purpose? Make it faster to transfer files and install applications for personal use.


namespace fs = std::filesystem;

void openApplication() {
    std::system("\"C:\\Users\\Administrator\\Documents\\lebron james\\Apps\\GPUZ.exe\""); // Directories need to be changed
}

void moveFile(const std::string& sourcePath, const std::string& destinationPath) {
        fs::rename(sourcePath, destinationPath);
        std::cout << "File moved successfully." << std::endl;
}

void runRegeditFile(const std::string& regeditFilePath) {
    std::system(("start " + regeditFilePath).c_str()); 
}

int main() {
    int userInput;
    std::cout << "[1] Open EXE's | [2] Move Files | [3] Run Regedits/Other | [4] Exit "; 
    std::cin >> userInput; // What you or someone else would  enter

    if (userInput == 1) {
        openApplication();  // This is openapplication()
    }
    else if (userInput == 2) {
        moveFile("C:\\Users\\Administrator\\Documents\\lebron james\\Move\\style.css", "C:\\style.css"); // Directories need to be changed
    }
    else if (userInput == 3) {
        runRegeditFile("C:\\path\\to\\your\\regedit_file.reg"); // Replace with the actual path to your .regedit file
    }
    else {
        std::cerr << "Exitting" << std::endl; // Exits
        return 0;
    }

    return 0;
}