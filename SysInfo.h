#ifndef SYSINFO_H
#define SYSINFO_H

#include <QtGlobal>

class SysInfo
{
public:
    SysInfo();
    virtual ~SysInfo();

    virtual void init() = 0;
    virtual double cpuLoadAverage() = 0;
    virtual double memoryUsed() = 0;
};

#endif // SYSINFO_H
