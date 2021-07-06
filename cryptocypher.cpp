#include <iostream>
#include <vector>
#include "cryptocypher.h"
#include "ui_cryptocypher.h"
#include "morse_code.h"
#include "cesar_cypher.h"

using namespace std;

CryptoCypher::CryptoCypher(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CryptoCypher)
{
    ui->setupUi(this);
}

CryptoCypher::~CryptoCypher()
{
    delete ui;
}


void CryptoCypher::on_pb_encrypt_clicked()
{
    if(ui->rb_cesar->isChecked()){
        QString qsSource = ui->te_source->toPlainText();

        string szSource = qsSource.toStdString();

        vector<char> source;

        for(int i = 0; szSource[i]; i++){
            source.push_back(szSource[i]);
        }

        vector<char> output;

        output = cesar_encrypt(source);

        QString qsOutput;

        for(vector<char>::iterator it = output.begin(); it != output.end(); it++){
            qsOutput += *it;
        }

        ui->te_output->setText(qsOutput);

    }else if(ui->rb_morse->isChecked()){
        QString qsSource = ui->te_source->toPlainText();
        string szSource = qsSource.toStdString();
        string szMorse = string_to_morse(szSource);

        QString qsMorse = QString::fromStdString(szMorse);
        ui->te_output->setText(qsMorse);
    }

}

void CryptoCypher::on_pb_descriptografar_clicked()
{
    vector<char> source;
    QString qsSource = ui->te_source->toPlainText();
    string szSource = qsSource.toStdString();

    for(int i = 0; szSource[i]; i++){
        source.push_back(szSource[i]);
    }
    vector<char> target;
    if(ui->rb_cesar->isChecked()){
        target = cesar_decrypt(source);
    }

    QString qsTarget;

    vector<char>::iterator it = target.begin();
    for(; it != target.end(); it++){
        qsTarget += *it;
    }

    ui->te_output->setText(qsTarget);
}


void CryptoCypher::on_pb_inverter_clicked()
{
    ui->te_source->setText(ui->te_output->toPlainText());
    ui->te_output->clear();
}

