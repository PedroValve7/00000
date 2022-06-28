#ifndef IMAGEN1_H
#define IMAGEN1_H

#include <QDialog>

namespace Ui {
class Imagen1;
}

class Imagen1 : public QDialog
{
    Q_OBJECT

public:
    explicit Imagen1(QWidget *parent = nullptr);
    ~Imagen1();

private:
    Ui::Imagen1 *ui;
};

#endif // IMAGEN1_H
