#ifndef CRYPTOCYPHER_H
#define CRYPTOCYPHER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CryptoCypher; }
QT_END_NAMESPACE

class CryptoCypher : public QMainWindow
{
    Q_OBJECT

public:
    CryptoCypher(QWidget *parent = nullptr);
    ~CryptoCypher();

private slots:
    void on_pb_encrypt_clicked();

private:
    Ui::CryptoCypher *ui;
};
#endif // CRYPTOCYPHER_H
