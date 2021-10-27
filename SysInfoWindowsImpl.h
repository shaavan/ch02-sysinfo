#ifndef SYSINFOWINDOWSIMP1_H
#define SYSINFOWINDOWSIMP1_H

#include <QtGlobal>
#include <QVector>

#include "SysInfo.h"

typedef struct _FILETIME FILETIME;

class SysInfoWindowsImpl : public SysInfo
{
public:
    SysInfoWindowsImpl();

    void init() override;
    double cpuLoadAverage() override;
    double memoryUsed() override;

private:
    QVector<qulonglong> cpuRawData();
    qulonglong convertFileTime(const FILETIME& filetime) const;

private:
    QVector<qulonglong> mCPULoadLastValues;
};

#endif // SYSINFOWINDOWSIMP1_H
