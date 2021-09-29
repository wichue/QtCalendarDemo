/*!
 *  @brief     自定义QLineEdit，点击弹出日历，可选择日期上午下午
 *  @details
 *  @author    褚伟(114639950@qq.com)
 *  @version
 *  @date      2021.7.22
 *  @warning
 *  @copyright NanJing HS
 *  @note
 */

#ifndef QLINEEDITCALENDAR_H
#define QLINEEDITCALENDAR_H

#include <QLineEdit>
#include <QWidget>
#include <QMouseEvent>
#include "lunarcalendarwidget.h"

class QLineEditCalendar : public QLineEdit
{
    Q_OBJECT
public:
    explicit QLineEditCalendar(QWidget *parent = nullptr);
private:
    LunarCalendarWidget *pLunarCalendarWidget;
public slots:
    void slotCurrData(QString data);
protected:
    virtual void mousePressEvent(QMouseEvent *event);
};

#endif // QLINEEDITCALENDAR_H
