TUTORIAL GIT en linea de compandos


//Cambiamos el username
git config --global user.name "Juan Jose Abad"  

//Cambiamos el email
git config --global user.email "<juanjoabad_saura@hotmail.com>"

//Crear un repositorio.
	//nos creamos una carpeta donde vamos a crear el repositorio
	git init
	
//Si lo que queremos es asociarlo a un repositorio remoto con el siguiente comandos
git remote add origin https://github.com/JSAURAJ/AlmacenesElChollo.git
//para descargar los commits del server a nuestro repositorio local
git pull origin master
//para que no nos lo reemplaze todo en nuestro repositorio local y nos lo conserve hay que ejecutar el siguiente comando
git pull origin master --rebase
//para hacer guardar los cambios en el servidor se hace con el comando push
push -u origin master

//Clonar un repositorio
git clone /*+ ruta*/ http://www.github.com/jsauraj/AlmacenesElChollo
	//automáticamente nos asocia a la ruta especificada como repositorio remoto por defecto, en este caso github
//también por ruta local
git clone c:\user\.........

//añadir archivo para hacer commit
git add ./main.c
//añadir todos los archivos que queremos subir con un commit
git add .

//hacer commit
git commit
	//despues tendrás que rellenar el mensaje
//otra opcción para escribir el mensaje directamente en la linea de comandos
git commit -m "El mensaje"

//si hemos clonado, para subir nuestra versión al server basta con pushear
git push

//ver todo el registro de commits realizado para este repositorio
git log
//para verlo en modo resumen
git log --oneline


//vamos a crear ramas
	git log -oneline //vemos los commits
	//ver las ramas creadas
	git branch
	//ver ramas, tanto locales como remotas
	git brach --all
	//para cambiar de ramas
	git checkout general
	git checkout master
	git checkout ........ lo que sea
	//una vez dentro de la general, podemos crear nuevamente ramas que sean hijas de general
	git branch modificacion
	//o tambien crearla y meternos en ella direcamente (partiendo de general, por ejemplo....)
	git checkout -b modificacion
	//vamos a borrar una ramas
	git branch -d general
	// o forzar borrado en caso de que tenga dependencias.
	t branch -D general
	//vamos a ver los logs pero mostrando a qué ramas pertenecen
	git log --oneline -decorate
	//vamos a fusionar ramas
	//desde la rama padre a la que queramos fusionar ramas hijas:
	git merge /*+ el nombre de la rama hija, en este caso modificacion*/ modificacion

//para descartar un cambio en el  stagin index
git reset head /*+ el nombre dle archivo*/ main.c
//revertir la modificacion de algún archivo a su último commit
git checkout -- /*nombre del archivo*/ main.c

//tambien podemos hacer checkout e irnos a un commit anterior escribiendo el codigo único de identificacion
git log --oneline
git checkout 44223c2f

//tambien podemos añadir un tag (etiqueta)
git tag v0.1//nos lo hace en el que estamos actualmente
git tag v1.0 44223c2f //hace al especificado