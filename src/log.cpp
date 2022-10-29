#include "log.h"

void Log(const char* message, const char* logLevel)
{
    const int logLevelLength = strlen(logLevel);
    char* logLevelCapitalized = new char[logLevelLength + 1];

    for (int i = 0; i < logLevelLength; i++)
    {
        logLevelCapitalized[i] = toupper(logLevel[i]);
    }
    logLevelCapitalized[logLevelLength] = '\0';

    std::cout << "[" << (const char*) logLevelCapitalized << "]: " << message << std::endl;
}