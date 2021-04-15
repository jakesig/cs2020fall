Set-PSDebug -trace 1
docker run -ti --rm -p 8080:80 -v ${PWD}:/home/student/ seancusackcooperunion/cs102e2020fall /bin/bash -c "cd /home/student; exec su student"
Set-PSDebug -trace 0