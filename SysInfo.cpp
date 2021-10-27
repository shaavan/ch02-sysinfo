#include <QtGlobal>

#include "SysInfo.h"

#ifdef Q_OS_WIN
    #include "SysInfoWindowsImpl.h"
#elif defined(Q_OS_LINUX)
    #include "SysinfoLinuxImpl.h"
#endif

SysInfo& SysInfo::instance()
{
    #ifdef Q_OS_WIN
        static SysinfoWindowsImpl singleton;
    #elif defined(Q_OS_LINUX)
        static SysinfoLinuxImpl singleton;
    #endif

    return singleton;
}

SysInfo::SysInfo()
{

}

SysInfo::~SysInfo()
{

}
