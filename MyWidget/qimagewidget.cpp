#include "qimagewidget.h"
#include <QPainter>


QImageWidget::QImageWidget(QWidget *parent) : QWidget(parent)
{
    _originImage = QPixmap("pic.png");
    _backColor = Qt::blue;
    connect (this, SIGNAL(pixmapChainged()), SLOT(repaint()));

}

QImageWidget::~QImageWidget()
{

}

void QImageWidget::setPixmap(QPixmap pixmap)
{
     _originImage = pixmap;
     emit pixmapChainged();
}

void QImageWidget::setSize(int number)
{
    QPixmap temp = QPixmap("pic.png");
    switch (number) {
    case 0:
        _originImage = temp;
        break;
    case 1:
        _originImage = temp.scaled(temp.width(),(temp.height()/2), Qt::IgnoreAspectRatio);
        break;
    case 2:
        _originImage = temp.scaled(temp.width(),(temp.height()/4), Qt::IgnoreAspectRatio);
        break;
    }
    emit pixmapChainged();
}

void QImageWidget::paintEvent(QPaintEvent *)
{

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.save();

    painter.setBrush(_backColor);
    painter.drawRect(rect());

    painter.restore();

    QRect imageRect;
    imageRect.setRect(0, 0, _originImage.width(), _originImage.height());
    painter.drawPixmap(imageRect, _originImage);

}



