# QProcess-calling-python-script
Utilizamos QProcess para poder ejecutar un codigo de Python

Para poder utilizar este programa se requieren 2 cosas:

1) Modificar la linea:
QString pythonPath = "C:/Users/Jeresabelox/PycharmProjects/untitled/venv/Scripts/python.exe";
y colocarle la direccion donde se encuentra python.exe (en mi PC es una direccion oculta)

2) Modificar la linea:
QString pythonScript = "C:/Users/Jeresabelox/Desktop/Proyecto - POO/capacidad_sistema_de_salud.py";
reemplazando "C:/Users/Jeresabelox/Desktop" por la direccion donde se encuentra la carpeta 
"Proyecto - POO"

El resultado que se visualiza por consola es la salida del script de Python, por eso hay un 
segundo archivo llamado "Hello World" que confirma esto.

Nota:
No supe como implementar QDir para evitar el segundo paso
