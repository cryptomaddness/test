#ifndef BLOCKBROWSER_H
#define BLOCKBROWSER_H

#include <QWidget>
// Statistics
#include "clientmodel.h"

#include "main.h"
// Statistics
#include "wallet.h"
#include "base58.h"

// Statistics
#include <QDir>
#include <QFile>
#include <QProcess>
#include <QTime>
#include <QTimer>
#include <QStringList>
#include <QMap>
#include <QSettings>
#include <QSlider>

double getBlockHardness(int);
double getTxTotalValue(std::string);
double convertCoins(int64_t);
double getTxFees(std::string);
int getBlockTime(int);
int getBlocknBits(int);
int getBlockNonce(int);
int blocksInPastHours(int);
int getBlockHashrate(int);
std::string getInputs(std::string);
std::string getOutputs(std::string);
std::string getBlockHash(int);
std::string getBlockMerkle(int);
bool addnode(std::string);
const CBlockIndex* getBlockIndex(int);
int64_t getInputValue(CTransaction, CScript);

namespace Ui {
    class BlockBrowser;
}
class ClientModel;
class WalletModel;
//class TxViewDelegate;
//class TransactionFilterProxy;

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Overview ("home") page widget */
class BlockBrowser : public QWidget
{
    Q_OBJECT

public:
    explicit BlockBrowser(QWidget *parent = 0);
    ~BlockBrowser();
    void setModel(WalletModel *model);

    //Statistics
    int heightPrevious;
    int connectionPrevious;
    int volumePrevious;
    int stakeminPrevious;
    int stakemaxPrevious;
    QString stakecPrevious;
    double rewardPrevious;
    double netPawratePrevious;
    QString pawratePrevious;
    double hardnessPrevious;
    double hardnessPrevious2;

  //  void setClientModel(ClientModel *clientModel);
  //  void setWalletModel(WalletModel *walletModel);
   // void showOutOfSyncWarning(bool fShow);

public slots:

    void blockClicked();
    void txClicked();
    void updateExplorer(bool);
    //Statistics
    void updateStatistics();
    void updatePrevious(int, int, int, QString, double, double, double, double, QString, int, int);
  //  void setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance);

signals:
  //  void transactionClicked(const QModelIndex &index);

private:
    Ui::BlockBrowser *ui;
    WalletModel *model;
    //Statistics
ClientModel *clientModel;
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

#endif // BLOCKBROWSER_H
