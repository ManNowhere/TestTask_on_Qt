#include "mywidget.h"
#include "ui_mywidget.h"



MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QImageWidget* image = new QImageWidget();
    ui->horizontalLayout->addWidget(image);
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), image, SLOT(setSize(int)));
}

MyWidget::~MyWidget()
{
    delete ui;
}

