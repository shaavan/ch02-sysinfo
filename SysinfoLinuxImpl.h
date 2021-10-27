#ifndef SYSINFOLINUXIMPL_H
#define SYSINFOLINUXIMPL_H

#include <QtGlobal>
#include <QVector>

#include "SysInfo.h"

class SysinfoLinuxImpl : public SysInfo
{
public:
    SysinfoLinuxImpl();

    void init() override;
    double cpuLoadAverage() override;
    double memoryUsed() override;

private:
    QVector<qulonglong> cpuRawData();
    QVector<qulonglong> mCPULoadLastValues;
};

#endif // SYSINFOLINUXIMPL_H
