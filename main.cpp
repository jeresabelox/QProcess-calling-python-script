#include <QProcess>
#include <QDebug>

int main(int ,char** )
{
    QProcess p;
    QStringList parametrosPython;
    QString pythonPath = "C:/Users/Jeresabelox/PycharmProjects/untitled/venv/Scripts/python.exe";
    //QString pythonScript = "C:/Users/Jeresabelox/Desktop/Proyecto - POO/capacidad_sistema_de_salud.py";

    QString pythonScript = "C:/Users/Jeresabelox/Desktop/Proyecto - POO/HelloWorld.py";

    parametrosPython << pythonScript;
    p.start(pythonPath, parametrosPython);
    p.waitForFinished(-1);
    QString OutputPython = p.readAll();
    QString ErrorPython = p.readAllStandardError();

    if(!ErrorPython.isEmpty())
    {
        qDebug()<<"Python error:"<<ErrorPython;
    }
    qDebug()<<"Resultado de Python: "<<OutputPython;
    return 0;
}
