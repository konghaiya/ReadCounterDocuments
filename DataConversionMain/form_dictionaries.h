#ifndef FORM_DICTIONARIES_H
#define FORM_DICTIONARIES_H

#include <QWidget>
#include <QKeyEvent>
#include "gtdatabase.h"
namespace Ui {
class Form_Dictionaries;
}

class Form_Dictionaries : public QWidget
{
    Q_OBJECT

public:
    explicit Form_Dictionaries(QWidget *parent = 0);
    ~Form_Dictionaries();

    void TablAddItem(int row, int coulmn, QString text);
public slots:
    void slotDetails(Dictionaries *id);
protected:
    void keyPressEvent(QKeyEvent *event);
private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Form_Dictionaries *ui;
    GtDataBase DaServer;
};

#endif // FORM_DICTIONARIES_H
