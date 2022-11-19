#ifndef QIMAGEWIDGET_H
#define QIMAGEWIDGET_H

#include <QWidget>
#include <QPixmap>

class QImageWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QImageWidget(QWidget *parent = 0);

    ~QImageWidget();
private:
    QPixmap _originImage;
    QColor _backColor;
public:
    void setPixmap(QPixmap pixmap);
    QPixmap pixmap(){return _originImage;}

signals:
    void pixmapChainged();
public slots:
    void setSize(int number);


protected:
    void paintEvent(QPaintEvent *event);
};

#endif // QIMAGEWIDGET_H
















