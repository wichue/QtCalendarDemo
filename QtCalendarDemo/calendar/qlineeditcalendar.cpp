#include "qlineeditcalendar.h"
#include <QEvent>
#include <QDebug>

QLineEditCalendar::QLineEditCalendar(QWidget *parent) : QLineEdit(parent)
{
    pLunarCalendarWidget = new LunarCalendarWidget();
    connect(pLunarCalendarWidget,&LunarCalendarWidget::signalCurrData,this,&QLineEditCalendar::slotCurrData);
}

void QLineEditCalendar::slotCurrData(QString data)
{
    this->setText(data);
}

void QLineEditCalendar::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        pLunarCalendarWidget->show();
    }
}
