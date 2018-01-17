#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class Window : public QWidget
{
    Q_OBJECT
    public:
        explicit Window(QWidget *parent = 0);

    private:
        int m_counter;
        QPushButton *m_button;

    signals:
        void counterReached();

    public slots:

    private slots:
        void slotButtonClicked(bool checked);
};

#endif // WINDOW_H
