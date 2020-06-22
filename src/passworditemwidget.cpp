#include "passworditemwidget.h"
#include "ui_passworditemwidget.h"

PassWordItemWidget::PassWordItemWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PassWordItemWidget)
{
    ui->setupUi(this);
}

PassWordItemWidget::~PassWordItemWidget()
{
    delete ui;
}
