#ifndef DIALOG_DISPOSE_H
#define DIALOG_DISPOSE_H

#include <QDialog>

namespace Ui {
class Dialog_dispose;
}

class Dialog_dispose : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_dispose(QWidget *parent = 0);
    explicit Dialog_dispose(QString configPath ,QWidget *parent = 0);
    ~Dialog_dispose();

    void set_configPath(QString configPath);
    void set_TransmidName(QString TransmidName);

protected:
    void paintEvent(QPaintEvent *event);

signals:
    void dispose_hide();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Dialog_dispose *ui;

    QString m_configPath;

    QString m_TransmidName;
};

#endif // DIALOG_DISPOSE_H
