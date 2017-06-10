#ifndef MIXTXCONFIG_H
#define MIXTXCONFIG_H

#include <QDialog>

namespace Ui
{
class mixTXConfig;
}
class WalletModel;

/** Multifunctional dialog to ask for passphrases. Used for encryption, unlocking, and changing the passphrase.
 */
class mixTXConfig : public QDialog
{
    Q_OBJECT

public:
    mixTXConfig(QWidget* parent = 0);
    ~mixTXConfig();

    void setModel(WalletModel* model);


private:
    Ui::mixTXConfig* ui;
    WalletModel* model;
    void configure(bool enabled, int coins, int rounds);

private slots:

    void clickBasic();
    void clickHigh();
    void clickMax();
};

#endif // MIXTXCONFIG_H
