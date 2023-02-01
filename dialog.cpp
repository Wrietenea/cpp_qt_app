#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QPushButton>
#include <QDoubleValidator>

using namespace std;
#include "lens.h"
using namespace boost::numeric::ublas;

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);


    //ui->m_qLineEdit->setValidator(new QDoubleValidator(this));
    //ui->m_LE_Image->setValidator(new QDoubleValidator(this));

    //ui->m_qLineEdit->setText("50.0");

    //connect(ui->m_qRBLinear, SIGNAL(clicked()), this, SLOT(OnObjTypeChanged()));
    //connect(ui->m_qRBAngular, SIGNAL(clicked()), this, SLOT(OnObjTypeChanged()));

}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_m_qBtn_calc_clicked()
{
    double d=ui->m_qLineEdit_d->text().toDouble();
    double n=ui->m_qLineEdit_n->text().toDouble();
    double r1=ui->m_qLineEdit_r1->text().toDouble();
    double r2=ui->m_qLineEdit_r2->text().toDouble();

    SphericalSurface surf_r1(r1);
    SphericalSurface surf_r2(r2);

    Lens l(surf_r1, surf_r2, d, n);
    Paraxial parax;  // объявление экземпляра параксиальных характеристик
    l.CalculateParaxial(&parax);

    ui->m_qLineEdit_F->setText(QString("%1").arg(parax.F));
    ui->m_qLineEdit_F_->setText(QString("%1").arg(parax.F_));
    ui->m_qLineEdit_SF->setText(QString("%1").arg(parax.SF));
    ui->m_qLineEdit_SF_->setText(QString("%1").arg(parax.SF_));
    ui->m_qLineEdit_SH->setText(QString("%1").arg(parax.SH));
    ui->m_qLineEdit_SH_->setText(QString("%1").arg(parax.SH_));
}



//double d=ui->m_qLineEdit_d->text().toDouble();
//void Dialog::OnObjTypeChanged()
//{
//    if(ui->m_qRBAngular->isChecked())
//    {

//        ui->m_LB_Units->setText("град");
//        ui->comboBox->setEnabled(false);
//    }
//    if(ui->m_qRBLinear->isChecked())
//    {
//        ui->comboBox->setEnabled(true);
//        on_comboBox_currentIndexChanged(ui->comboBox->currentIndex());
//    }
//}




//void Dialog::on_comboBox_currentIndexChanged(int index)
//{
//    double Size=ui->m_qLineEdit->text().toDouble();

//    if(m_prev_index==0)//mm
//    {
//        Size=Size/1000;
//    }
//    else if(m_prev_index==1)//mkm
//    {
//        Size=Size/1000000;
//    }
//    else if(m_prev_index==2)//nm
//    {
//        Size=Size/1000000000;
//    }


//    if(index==0)//mm
//    {
//        Size=Size*1000;
//        ui->m_LB_Units->setText("мм");
//    }
//    else if(index==1)//mkm
//    {
//        Size=Size*1000000;
//        ui->m_LB_Units->setText("мkм");
//    }
//    else if(index==2)//nm
//    {
//        Size=Size*1000000000;
//        ui->m_LB_Units->setText("nm");
//    }

//    ui->m_qLineEdit->setText(QString("%1").arg(Size));

//    m_prev_index=index;
//}





