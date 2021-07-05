#include <iostream>
#include <vector>
#include "cryptocypher.h"
#include "ui_cryptocypher.h"
#include "nano_cypher.h"
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
    QString qsSource = ui->te_source->toPlainText();

    string szSource = qsSource.toStdString();

    vector<char> source;

    for(int i = 0; szSource[i]; i++){
        source.push_back(szSource[i]);
    }

    vector<char> output;
    if(ui->rb_cesar->isChecked()){
        output = cesar_encrypt(source);
    }else if(ui->rb_nano->isChecked()){
        output = nano_encrypt(source);
    }

    QString qsOutput;

    for(vector<char>::iterator it = output.begin(); it != output.end(); it++){
        qsOutput += *it;
    }

    ui->te_output->setText(qsOutput);

}

