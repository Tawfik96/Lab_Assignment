#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"product.h"
#include <QDialog>
#include <vector>
class home;
using namespace std;
namespace Ui {class customer;}

class customer :public QDialog
{
    Q_OBJECT

public:
    explicit customer(QWidget *parent = nullptr);
    ~customer();
    void addtocart();
    QString name, address, phone_number, email;
    product *products;
private slots:
    void on_pushButton_5_clicked();

   void on_Sname_clicked();


private:
    Ui::customer *ui;
    home *homewin;
    QString sname;
};

#endif // CUSTOMER_H
