#ifndef SITEONCHAIN_H
#define SITEONCHAIN_H

#include <QWidget>

namespace Ui {
    class SiteOnChain;
}
class ClientModel;
class WalletModel;
//class TxViewDelegate;
//class TransactionFilterProxy;

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Overview ("home") page widget */
class SiteOnChain : public QWidget
{
    Q_OBJECT

public:
    explicit SiteOnChain(QWidget *parent = 0);
    ~SiteOnChain();
    void setModel(SiteOnChain *model);

  //  void setClientModel(ClientModel *clientModel);
  //  void setWalletModel(WalletModel *walletModel);
   // void showOutOfSyncWarning(bool fShow);

public slots:
  //  void setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance);

signals:
  //  void transactionClicked(const QModelIndex &index);

private:
    Ui::SiteOnChain *ui;
        WalletModel *model;
   // ClientModel *clientModel;
   // WalletModel *walletModel;
   // qint64 currentBalance;
  //  qint64 currentStake;
  //  qint64 currentUnconfirmedBalance;
  //  qint64 currentImmatureBalance;

  //  TxViewDelegate *txdelegate;
  //  TransactionFilterProxy *filter;

private slots:
 //   void updateDisplayUnit();
  //  void handleTransactionClicked(const QModelIndex &index);
  //  void updateAlerts(const QString &warnings);
};

#endif // GENEREATEPAGE_H
