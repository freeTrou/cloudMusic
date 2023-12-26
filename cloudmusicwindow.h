#ifndef CLOUDMUSICWINDOW_H
#define CLOUDMUSICWINDOW_H

#include <QMainWindow>

namespace Ui {
class CloudMusicWindow;
}

class CloudMusicWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CloudMusicWindow(QWidget *parent = nullptr);
    ~CloudMusicWindow();

private:
    Ui::CloudMusicWindow *ui;
};

#endif // CLOUDMUSICWINDOW_H
