#ifndef PASSWORDITEMWIDGET_H
#define PASSWORDITEMWIDGET_H

#include <QWidget>

namespace Ui {
class PassWordItemWidget;
}

class PassWordItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit PassWordItemWidget(QWidget *parent = nullptr);
    ~PassWordItemWidget();

private:
    Ui::PassWordItemWidget *ui;
};

#endif // PASSWORDITEMWIDGET_H
