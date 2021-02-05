#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);

    h_limit=1000;
    v_limit= 500;

    timer=new QTimer(this);
    scene=new QGraphicsScene(this);
    scene->setSceneRect(0,0,h_limit,v_limit);

    ui->graphicsView->setScene(scene);
    ui->centralwidget ->adjustSize();
    scene->addRect(scene->sceneRect());//para ver los limites de la escne
    ui->graphicsView->resize(scene->width(),scene->height());
    this->resize(ui->graphicsView->width()+100,ui->graphicsView->height()+100);

    canons.push_back(new canon(20,200));
    canons.back()->posicionar(v_limit);
    scene->addItem(canons.back());

    bars.push_back(new bala(canons.back()->getPX()/2,canons.back()->getPY(),70,70,20));
    bars.back()->actualizar(v_limit);
    scene->addItem(bars.back());
    //timer->start(1000);
    connect(timer,SIGNAL(timeout()),this,SLOT(actualizar()));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
    delete scene;
}

void MainWindow::actualizar()
{
    for(int i=0;i<bars.size();i++)
    {
        bars.at(i)->actualizar(v_limit);
        //borderColilision(bars.at(i)->getEsf());
        //scene->addItem(bars.at(i));
    }
}


void MainWindow::on_pushButton_clicked()
{
    timer->start(20);
}


