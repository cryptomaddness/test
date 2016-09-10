#include "messagepage.h"
#include "ui_messagepage.h"

#include "clientmodel.h"
#include "walletmodel.h"
//#include "bitcoinunits.h"
#include "optionsmodel.h"
//#include "transactiontablemodel.h"
//#include "transactionfilterproxy.h"
#include "guiutil.h"
#include "guiconstants.h"

#include <QAbstractItemDelegate>
#include <QPainter>

#define DECORATION_SIZE 48
#define NUM_ITEMS 10

//#include "clientcontrolpage.moc"

MessagePage::MessagePage(QWidget *parent) :
    ui(new Ui::MessagePage),
    model(0)
{
    ui->setupUi(this);
}

MessagePage::~MessagePage()
{
    delete ui;
}
