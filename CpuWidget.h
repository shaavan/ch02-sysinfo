#ifndef CPUWIDGET_H
#define CPUWIDGET_H

#include <QtCharts/QPieSeries>
#include "SysInfoWidget.h"

class CpuWidget : public SysInfoWidget
{
    Q_OBJECT
public:
    explicit CpuWidget(QWidget* parent=0);

protected:
    void updateSeries() override;

private:
    QPieSeries* mSeries;
};

#endif // CPUWIDGET_H
