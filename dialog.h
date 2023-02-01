#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
    // ключевое слово, обозначающее, что дальше идет описание слотов

private slots:
        void on_m_qBtn_calc_clicked();

        //void on_comboBox_currentIndexChanged(int index);
        //void OnObjTypeChanged();

        //void on_m_qLineEdit_r1_editingFinished();

        //void on_m_qLineEdit_d_editingFinished();

private:
    Ui::Dialog *ui;
//    int m_prev_index=0;
};
#endif // DIALOG_H
