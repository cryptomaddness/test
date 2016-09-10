#include "siteonchain.h"
#include "ui_siteonchain.h"

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

SiteOnChain::SiteOnChain(QWidget *parent) :
    ui(new Ui::SiteOnChain),
    model(0)
{
    ui->setupUi(this);
}

SiteOnChain::~SiteOnChain()
{
    delete ui;
}
