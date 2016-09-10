#ifndef CLIENTCONTROLPAGE_H
#define CLIENTCONTROLPAGE_H

#include <QWidget>

namespace Ui {
    class ClientControlPage;
}
class ClientModel;
class WalletModel;
//class TxViewDelegate;
//class TransactionFilterProxy;

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Overview ("home") page widget */
class ClientControlPage : public QWidget
{
    Q_OBJECT

public:
    explicit ClientControlPage(QWidget *parent = 0);
    ~ClientControlPage();
    void setModel(WalletModel *model);

  //  void setClientModel(ClientModel *clientModel);
  //  void setWalletModel(WalletModel *walletModel);
   // void showOutOfSyncWarning(bool fShow);

public slots:
  //  void setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance);

signals:
  //  void transactionClicked(const QModelIndex &index);

private:
    Ui::ClientControlPage *ui;
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
        void on_chck4_upd8_clicked();
        void on_dwngrd_opt_clicked();
        void on_CS_submit_clicked();
        void on_BR_submit_clicked();
        void on_AU_apply_clicked();
        void on_minCLIE_clicked();
};

#endif // OVERVIEWPAGE_H
