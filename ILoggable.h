#pragma once

class ILoggable {
public:
    virtual ~ILoggable() = default;
    virtual void logToFile(const char* filename) const = 0;
};
